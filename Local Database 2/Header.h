#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
	unsigned short int codigo;
	char nombre[40];
	char carrera[40];
	unsigned short int generacion; // 0000a/b
	unsigned short int fechaNac; //dd/mm/aa
	char ciudad[40];
	char direccion[40];
	unsigned short int codigoPostal;
	char telefono[15];
	unsigned short int alta;
};

struct usuario
{
	char usuario[40];
	char password[40];
};

int registrarUsuario(struct usuario nuevo)
{

	FILE* pf;
	errno_t FR;
	FR = fopen_s(&pf, "u.dat", "a+b");
	if (pf == NULL)
		return EXIT_FAILURE;
	fwrite(&nuevo, sizeof(struct usuario), 1, pf);
	fclose(pf);
	return EXIT_SUCCESS;
}

int registrarCarrera(char *nuevo)
{

	FILE* pf;
	errno_t FR;
	FR = fopen_s(&pf, "c.dat", "a+b");
	if (pf == NULL)
		return EXIT_FAILURE;
	fwrite(&nuevo, sizeof(char[40]), 1, pf);
	fclose(pf);
	return EXIT_SUCCESS;
}

int encontrarUsuario(struct usuario nuevo)
{
	FILE* pf;
	errno_t FR;
	FR = fopen_s(&pf, "u.dat", "rb");
	struct usuario usuarios;
	if (pf == NULL)
		return EXIT_FAILURE;
	fread(&usuarios, sizeof(struct usuario), 1, pf);
	if (feof(pf))
		return EXIT_FAILURE;
	if (strcmp(nuevo.usuario, usuarios.usuario) == 0 && strcmp(nuevo.usuario, usuarios.usuario) == 0)
		return EXIT_SUCCESS;	
	do {		
		fread(&usuarios, sizeof(struct usuario), 1, pf);
		if (strcmp(nuevo.usuario, usuarios.usuario) == 0 && strcmp(nuevo.usuario, usuarios.usuario) == 0)
			return EXIT_SUCCESS;
	} while (!feof(pf));
	fclose(pf);
	return EXIT_FAILURE;
}

int registrarAlumno(struct alumno nuevo)
{

	FILE* pf;
	errno_t FR;
	alumno n;
	FR = fopen_s(&pf, "a.dat", "rb");
	if (pf == NULL)
	{
		nuevo.codigo = 1;
		FR = fopen_s(&pf, "a.dat", "a+b");
		if (pf == NULL)
			return EXIT_FAILURE;
		fwrite(&nuevo, sizeof(struct alumno), 1, pf);
		fclose(pf);
		return EXIT_SUCCESS;
	}
	else
	{
		fread(&n, sizeof(struct alumno), 1, pf);
		while (!feof(pf))
		{
			nuevo.codigo++;
			fread(&n, sizeof(struct alumno), 1, pf);
		}
		fclose(pf);
		FR = fopen_s(&pf, "a.dat", "a+b");
		if (pf == NULL)
			return EXIT_FAILURE;
		fwrite(&nuevo, sizeof(struct alumno), 1, pf);
		fclose(pf);
		return EXIT_SUCCESS;
	}
}
