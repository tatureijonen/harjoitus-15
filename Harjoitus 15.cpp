/*
TATU REIJONEN - IIO14S1
Harjoitus 15 (Palautus vko 45)

T�SS� TEHT�V�SS� ON K�YTETT�V� C - kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon(ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)
b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")
c) merkkijono voi olla kuinka pitk�
tahansa(max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim.lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon : ABC_Kissa_kavelee
ohjelma tulostaa : eelevak_assiK_CBA
__________________________________________________________________________
*/

#include <iostream>
using namespace std;
int main()
{
	/*
	char mjono[17+1];
	cout << "Anna 17 merkkia pitka jono: ";
	cin >> mjono;
	cout << mjono << endl << endl;
	// a) kohta

	int ind;
	for (ind = 16 ; ind >= 0 ; ind--)
	cout << mjono[ind];
	// b) kohta

	char mjono2[17 + 1];
	int i, j;
	for (i = 0, j = 16; j <= 0; i++, j--)
	mjono2[i] = mjono[j];

	mjono2[i] = '\0';
	cout << mjono2;
	*/
	// c) kohta
	
	
	char mjono3[100 + 1];
	char mjono4[100 + 1];
	int ind;
	int mpituus;
	cout << "Anna max 100 merkkia pitka jono: ";
	cin >> mjono3;
	cout << mjono3 << endl << endl;
	for (ind = 0; mjono3[ind] != '\0'; ind++);
	cout << "Pituus: " << ind << endl;
	mpituus = ind;

	int i, j;
	for (i = 0, j = mpituus - 1; j >= 0; i++, j--)
		mjono4[i] = mjono3[j];

	mjono4[i] = '\0';
	cout << mjono4;
	if (strcmp(mjono3, mjono4) == 0)
		cout << "PALINDROMI!!!";
	else
		cout << "EI OLE PALINDROMI!!!";

}

