#include <typeinfo>
/*
static constexpr int addiereFuenf(int wert) {
	return wert + 5;
}

int main() {

	std::cout << "--- 1. Der magische Assistent: 'auto' ---\n";

	auto ganzeZahl = 123;
	auto kommaZahl = 45.67;
	auto textLiteral = "Hallo Auto!";
	auto modernerText = std::string("C++");

	std::cout << "Typ: " << typeid(ganzeZahl).name() << " (Wert: " << ganzeZahl << ")\n";
	std::cout << "Typ: " << typeid(kommaZahl).name() << " (Wert: " << kommaZahl << ")\n";
	std::cout << "Typ: " << typeid(textLiteral).name() << " (Wert: " << textLiteral << ")\n";
	std::cout << "Typ: " << typeid(modernerText).name() << " (Wert: " << modernerText << ")\n";


	// komplexer
	std::vector<int> zahlenListe = { 20, 2, 3 };
	auto it = zahlenListe.begin();
	std::cout << "Erstes Element der Liste: " << *it << "\n";

	
	std::cout << "\n--- 2. der Zeitsparer: 'constexpr' ---\n";
	
	constexpr int konstante_addiereFuenf = addiereFuenf(10);
	std::cout << "Ergebnis addiereFuenf (Kompilierzeit): " << konstante_addiereFuenf << std::endl;

	int laufzeitWert;
	std::cout << "Geben Sie eine Zahl fuer Lautzeitberechnung ein: ";
	std::cin >> laufzeitWert;

	int laufzeit_addiereFuenf = addiereFuenf(laufzeitWert);
	std::cout << "Ergebnis addiereFuenf (" << laufzeitWert << ") (Laufzeit): " << laufzeit_addiereFuenf << std::endl;

	std::cout << "\n--- 3. Der flexible Helfer: Lambda-Funktionen ---\n";

	auto quadriere = [](int x) {
		return x * x;
		};

	std::cout << "Quadriere 6 (Lambda): " << quadriere(6) << std::endl;


#include <iostream>
#include <string>
#include <vector>

    // ==========================================================
    // 3. Vererbung: Klassendefinitionen
    // Wir definieren die Klassen hier oben, damit sie in main() bekannt sind.
    // ==========================================================

    // Die Basisklasse (Elternklasse)
    class Lebewesen {
    protected:
        // "protected" bedeutet: Diese Klasse und alle abgeleiteten Klassen
        // (Kinder) können darauf zugreifen.
        std::string name;

    public:
        // Konstruktor der Basisklasse
        Lebewesen(std::string name) : name(name) {
            std::cout << "(Konstruktor von Lebewesen '" << name << "')" << std::endl;
        }

        // Eine "virtuelle" Funktion. Das 'virtual' Schlüsselwort erlaubt es
        // Kindklassen, diese Funktion zu überschreiben und ihr eigenes Verhalten zu definieren.
        // Das ist die Grundlage für Polymorphie.
        virtual void macheGeraeusch() {
            std::cout << name << " macht ein undefinierbares Geräusch..." << std::endl;
        }
    };

    // Die abgeleitete Klasse (Kindklasse)
    class Hund : public Lebewesen {
    public:
        // Der Konstruktor von Hund ruft den Konstruktor der Basisklasse auf,
        // um den Namen zu initialisieren.
        Hund(std::string name) : Lebewesen(name) {
            std::cout << "(Konstruktor von Hund '" << name << "')" << std::endl;
        }

        // Hier überschreiben wir die Funktion der Elternklasse.
        // Das 'override' Schlüsselwort ist gute Praxis, um zu signalisieren:
        // "Ich überschreibe hier bewusst eine virtuelle Funktion der Elternklasse."
        void macheGeraeusch() override {
            std::cout << name << " sagt: Wuff!" << std::endl;
        }
    };

    // Eine weitere abgeleitete Klasse
    class Katze : public Lebewesen {
    public:
        Katze(std::string name) : Lebewesen(name) {
            std::cout << "(Konstruktor von Katze '" << name << "')" << std::endl;
        }

        void macheGeraeusch() override {
            std::cout << name << " sagt: Miau!" << std::endl;
        }
    };
    */



#include <iostream>
#include <string>
#include <vector>

    // ==========================================================
    // 3. Vererbung: Klassendefinitionen
    // Wir definieren die Klassen hier oben, damit sie in main() bekannt sind.
    // ==========================================================

    // Die Basisklasse (Elternklasse)
class Lebewesen {
protected:
    // "protected" bedeutet: Diese Klasse und alle abgeleiteten Klassen
    // (Kinder) können darauf zugreifen.
    std::string name;

public:
    // Konstruktor der Basisklasse
    Lebewesen(std::string name) : name(name) {
        std::cout << "(Konstruktor von Lebewesen '" << name << "')" << std::endl;
    }

    // Eine "virtuelle" Funktion. Das 'virtual' Schlüsselwort erlaubt es
    // Kindklassen, diese Funktion zu überschreiben und ihr eigenes Verhalten zu definieren.
    // Das ist die Grundlage für Polymorphie.
    virtual void macheGeraeusch() {
        std::cout << name << " macht ein undefinierbares Geräusch..." << std::endl;
    }
};

// Die abgeleitete Klasse (Kindklasse)
class Hund : public Lebewesen {
public:
    // Der Konstruktor von Hund ruft den Konstruktor der Basisklasse auf,
    // um den Namen zu initialisieren.
    Hund(std::string name) : Lebewesen(name) {
        std::cout << "(Konstruktor von Hund '" << name << "')" << std::endl;
    }

    // Hier überschreiben wir die Funktion der Elternklasse.
    // Das 'override' Schlüsselwort ist gute Praxis, um zu signalisieren:
    // "Ich überschreibe hier bewusst eine virtuelle Funktion der Elternklasse."
    void macheGeraeusch() override {
        std::cout << name << " sagt: Wuff!" << std::endl;
    }
};

// Eine weitere abgeleitete Klasse
class Katze : public Lebewesen {
public:
    Katze(std::string name) : Lebewesen(name) {
        std::cout << "(Konstruktor von Katze '" << name << "')" << std::endl;
    }

    void macheGeraeusch() override {
        std::cout << name << " sagt: Miau!" << std::endl;
    }
};

class Spieler {
public:
    std::string name;
    int lebenspunkte;

    // Ein einfacher Konstruktor
    Spieler(std::string name, int leben) : name(name), lebenspunkte(leben) {}

    void statusAnzeigen() {
        std::cout << "Name: " << this->name
            << ", Lebenspunkte: " << this->lebenspunkte << std::endl;
    }
};


// ==========================================================
// Das Hauptprogramm
// ==========================================================

int main() {

    // ####################################################################
    // ===== 1. Zeiger (Pointers) - Die Arbeit mit Speicheradressen =====
    // ####################################################################
    std::cout << "===== 1. ZEIGER (POINTERS) =====\n" << std::endl;

    int zahl = 42;
    int* pZahl = nullptr; // Ein Zeiger auf eine Ganzzahl. `nullptr` bedeutet "zeigt auf nichts".

    // Der '&'-Operator gibt die Speicheradresse einer Variable zurück.
    pZahl = &zahl;

    std::cout << "Die Variable 'zahl' hat den Wert: " << zahl << std::endl;
    std::cout << "Die Variable 'zahl' liegt an der Speicheradresse: " << &zahl << std::endl;
    std::cout << "Der Zeiger 'pZahl' zeigt auf die Adresse: " << pZahl << std::endl;

    // Der '*'-Operator (Dereferenzierungsoperator) holt den Wert, der an der Adresse liegt.
    std::cout << "Der Wert an der Adresse, auf die 'pZahl' zeigt, ist: " << *pZahl << std::endl;

    std::cout << "\n-> Wir aendern den Wert ueber den Zeiger: *pZahl = 99;" << std::endl;
    *pZahl = 99; // Wir ändern den Wert an der Speicheradresse.

    std::cout << "Die Variable 'zahl' hat jetzt den Wert: " << zahl << " (obwohl wir nur den Zeiger angefasst haben!)" << std::endl;


    // ####################################################################
    // ===== 2. Referenzen (References) - Ein Alias oder Spitzname   =====
    // ####################################################################
    std::cout << "\n\n===== 2. REFERENZEN (REFERENCES) =====\n" << std::endl;

    std::string original = "Ich bin das Original.";

    // Eine Referenz MUSS bei der Erstellung sofort initialisiert werden.
    // Sie ist danach untrennbar mit der Original-Variable verbunden.
    std::string& refOriginal = original;

    std::cout << "Original: " << original << std::endl;
    std::cout << "Referenz: " << refOriginal << std::endl;

    std::cout << "\n-> Wir aendern die Referenz: refOriginal = \"Text wurde geaendert\";" << std::endl;
    refOriginal = "Text wurde geaendert."; // Man braucht keine Sonderzeichen (* oder &).

    std::cout << "Original: " << original << " (hat sich mitgeändert!)" << std::endl;
    std::cout << "Referenz: " << refOriginal << std::endl;

    std::cout << "\nUnterschied zum Zeiger: Eine Referenz ist einfacher zu benutzen (kein *),"
        << "\nkann aber nicht mehr auf eine andere Variable 'umgebogen' werden." << std::endl;


    // ####################################################################
    // ===== 3. Vererbung (Inheritance) - Das 'IST EIN'-Prinzip        =====
    // ####################################################################
    std::cout << "\n\n===== 3. VERERBUNG (INHERITANCE) =====\n" << std::endl;

    Hund bello("Bello");
    Katze minka("Minka");

    std::cout << "\nDirekter Aufruf der Methoden:" << std::endl;
    bello.macheGeraeusch(); // Ruft die spezielle Hund-Version der Funktion auf.
    minka.macheGeraeusch(); // Ruft die spezielle Katze-Version der Funktion auf.

    std::cout << "\nDie Magie der Vererbung (Polymorphie):" << std::endl;
    // Wir erstellen eine Liste, die Zeiger auf LEBEWESEN enthält.
    // Ein Hund IST EIN Lebewesen, eine Katze IST EIN Lebewesen.
    // Deswegen dürfen wir ihre Adressen hier speichern.
    std::vector<Lebewesen*> zoo;
    zoo.push_back(&bello);
    zoo.push_back(&minka);

    // Jetzt gehen wir durch den Zoo...
    for (Lebewesen* tier : zoo) {
        // Obwohl 'tier' vom Typ 'Lebewesen-Zeiger' ist, ruft C++ dank 'virtual'
        // die korrekte, überschriebene Funktion der Kindklasse auf!
        std::cout << "Ein Tier im Zoo ";
        tier->macheGeraeusch();
    }

    std::cout << "===== Vorbereitung =====\n";

    // Wir erstellen ein ganz normales Objekt auf dem Stack.
    Spieler spieler1("Aragon", 100);

    // Wir erstellen einen Zeiger, der auf die Speicheradresse dieses Objekts zeigt.
    Spieler* pSpieler = &spieler1;

    std::cout << "Ein Spieler-Objekt 'spieler1' wurde erstellt.\n";
    std::cout << "Ein Zeiger 'pSpieler' zeigt jetzt auf die Adresse von 'spieler1'.\n\n";

    // ####################################################################
    // ===== Methode 1: Der "lange" Weg mit Dereferenzierung (*) und Punkt (.) =====
    // ####################################################################
    std::cout << "===== 1. Der lange Weg mit Stern und Punkt =====\n";

    // Schritt 1: Dereferenzieren, um das Original-Objekt zu bekommen.
    // Mit (*pSpieler) holen wir uns quasi 'spieler1' zurück.
    // Die Klammern sind wichtig, weil der Punkt-Operator eine höhere Priorität hat als der Stern!
    // Schritt 2: Den Punkt-Operator benutzen, um auf die Member zuzugreifen.

    std::cout << "Zugriff auf Member 'lebenspunkte' mit (*pSpieler).lebenspunkte" << std::endl;
    (*pSpieler).lebenspunkte = 80;

    std::cout << "Aufruf der Methode 'statusAnzeigen()' mit (*pSpieler).statusAnzeigen()" << std::endl;
    (*pSpieler).statusAnzeigen();


    // ####################################################################
    // ===== Methode 2: Der "kurze" Weg mit dem Pfeil-Operator (->)   =====
    // ####################################################################
    std::cout << "\n===== 2. Der kurze, elegante Weg mit dem Pfeil-Operator =====\n";

    // Der Pfeil-Operator '->' ist eine exakte Abkürzung für "Dereferenziere den Zeiger UND
    // greife dann auf den Member zu".
    // Die Schreibweise 'pSpieler->lebenspunkte' macht genau dasselbe wie '(*pSpieler).lebenspunkte'.

    std::cout << "Zugriff auf Member 'name' mit pSpieler->name" << std::endl;
    pSpieler->name = "Aragon, der Koenigssohn";

    std::cout << "Aufruf der Methode 'statusAnzeigen()' mit pSpieler->statusAnzeigen()" << std::endl;
    pSpieler->statusAnzeigen();


    // ####################################################################
    // ===== Überprüfung am Original-Objekt                             =====
    // ####################################################################
    std::cout << "\n===== Überprüfung am Original-Objekt 'spieler1' =====\n";
    std::cout << "Alle Änderungen, die über den Zeiger gemacht wurden, sind am Original sichtbar:\n";
    spieler1.statusAnzeigen();


    return 0;
}
