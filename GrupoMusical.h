#ifndef GRUPOMUSICAL_H_INCLUDED
#define GRUPOMUSICAL_H_INCLUDED

struct GrupoMusical{
    string nombre;
    string anioDeFunacion;

    GrupoMusical * sig;

    GrupoMusical(string nom, string an){

        nombre = nom;
        anioDeFunacion = an;
        sig = NULL:

    }

};

#endif // GRUPOMUSICAL_H_INCLUDED
