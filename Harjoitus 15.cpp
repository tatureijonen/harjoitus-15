/*
TATU REIJONEN - IIO14S1
Harjoitus 15 (Palautus vko 45)

TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C - kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon(ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa(max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim.lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon : ABC_Kissa_kavelee
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

