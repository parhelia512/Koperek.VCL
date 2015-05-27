Program do operacji plikowych zamiennik funkcji kopiowania, przenoszenia i usuwania z explorera systemu windows.

Nie gwarantuje �e jest dobry ani nawet �e to stabilna kompilacja,
pobierasz i u�ywasz na w�asn� odpowiedzialno��.
Wersja 1.0 to w zasadzie jedyna jak� obecnie dysponuje przed drastycznymi zmianami w kodzie �r�d�owym, ka�da kolejna od 2.0 jest bli�sza w akcie tworzenia j�zykowi C, proces migracji do �rodowiska Visual Studio 2003 oraz przede wszystkim nie ma graficznych okienek poniewa� skupia�em si� na algorytmach kompresji,
W kolejnej ods�ownie planowane jest stworzenie GUI na bazie html i innych socketowych c�d�w.
Je�li potrzebujesz drobnych kosmetycznych zmian bo program spe�nia oczekiwania, napisz to jest �atwe w realizacji, mam nadzieje utrzymywa� wersje 1.0 przy �yciu i kto wie mo�e nawet z czasem uzupe�ni� o wprowadzone zmiany funkcjonalne.

Ultracopier, Copy Handler, Turbocopy to przekombinowane programy m�j rodzima produkcja odpowied� na powolne kopiowanie w Win98 oraz 2k, napisany w licencjonowanym �rodowisku Borland BCB 3, okno potwierdzania kopiowa� pixel w pixel z windowsowym oknem(�eby nie wprowadza� zamieszania) Je�li jest zapotrzebowanie to nowy kombaj do zbierania kur po wioskach powstanie wkr�tce.
Ma opcje pauzowania i wylicza czas lepiej ni� microsoftowe potworki, konfigurowalny poprzez parametry uruchomieniowe, potrafi kopiowa�, przenosi�, usuwa�, kompresowa�(format zbli�ony do kompresji NTFS) i szyfrowa� do plik�w .eno(encoded) 

INSTALACJA:
Skopiuj pliki programu do katalogu C:\Program Files\Kop32 lub wypakuj archiwum je�li nim dysponujesz do Program Files(archiwum ma ju� w strukturze podkatalog Kop32).

Otw�rz plik KOP_REG.reg (polecenie scal) i po zapytaniu systemu dodaj tre�� do rejestru
aby deinstalowa� wpisy uruchom KOP_UNINSTALL_REG.reg i "dodaj" tre�� do rejestu.

Powinny pojawi� si� wpisy w menu prawokliku explorera dla plik�w katalog�w i dysk�w o tre�ci np. sstsoft->Kop32->ZAZNACZ
co powoduje skopiowanie nazwy katalogu do schowka albo sstsoft->Kop32->LISTUJ co spowoduje pokazanie okna i pro�be o dodanie listy plik�w w podkatalogu do schowka zgodnie z wybranym wzorcem.

Je�li nie chcesz miesza� w rejestrze utw�rz skr�ty w Wy�lij do.
Mo�esz zmieni� ikone dla ka�dego z polece� program ma ich kilka wbudowane w .exe
Wiesz jak to zrobi�?
Je�li nie pisz sstsoft@wp.pl

""C:\Koperek" /o... /BUFOR{1024} /ARGTS{blabla;#file;#size;#attr;#path} /MASKA{*.txt,*.blabla,jeszcze.blabla} /KOPIUJ /PRZENIES /USUN /KODUJ /DEKODUJ /listuj /BREAK{q} "c:\Katalog docelowy"" 

/KOPIUJ
kopiowanie plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
np. uruchomienie "Koperek.exe /KOPIUJ d:\smieci" spowoduje skopiowanie plik�w do d:\smieci

/PRZENIES
przeniesienie plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
np. uruchomienie "Koperek.exe /PRZENIES d:\smieci" spowoduje przeniesienie do d:\smieci

/KODUJ
szyfrowanie plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
np. uruchomienie "Koperek.exe /KODUJ d:\smieci" spowoduje zakodowanie do d:\smieci

/DEKODUJ
deszyfrowanie plikow(katalogow) znajduj�cych si� w schowku do "Katalog docelowy"
np. uruchomienie "Koperek.exe /DEKODUJ d:\smieci" spowoduje przeniesienie do d:\smieci

/LISTUJ
umieszczenie w schowku jesli docel = "Clipboard:" lub w pliku listy plik�w z "C:\katalog zrodlowy"
np. uruchomienie "Koperek.exe /listuj d:\log.txt" spowoduje zlistowanie katalogu do logu w pliku d:\log.txt

/USUN
Usuniecie "Katalog docelowy"
Uruchomienie "Koperek.exe /USUN d:\smieci" spowoduje usuni�cie d:\smieci

/TNIJ{x}
gdzie x to liczba bajt�w, od jakiej zostanie skr�cony plik 

/BUFOR{x}
gdzie x to liczba Kbajt�w, zmiana bufora plikowego
(domy�lna w programie to 64KB) 

/BREAK{?}
t = potwierdzaj na wszystkie pytania
n = zaprzeczaj na wszystkie pytania
q = pytaj usera o odpowied�

/MASKA{maska1,maska2,maskaN}
wykonuje operacje na plikach o nazwach spelnaiaj�cych warunek nazwa pasuje do maska1 || maska2 || maskaN

/ARGTS{jeden,drugi,...#}
parametry lini listowania gdzie dyrektywy: #file, #path, #size, #attr to nazwa kolejnego pliku, katalogu, rozmiaru, atrybut�w. Jeden, drugi - sta�e b�d� poprostu przepisane

/o...
okno informacji o programie

/ZAZNACZ
np. uruchomienie "Koperek.exe /ZAZNACZ  "C:\Windows" "c:\temp" "C:\autoexec.bat" spowoduje utworzenie w schowku listy tych plik�w potrzebnej do wykonania okre�lonej w nast�pnym wywo�aniu operacji 

/SLOWNIK{x}
gdzie x to liczba bajt�w, zmiana rozmiaru s�ownika kompresji LZ77 
(domy�lna w programie to 4KB) 

Szyforwanie jest oparte na metodach:
EXOrowanie, QDRowanie
Kompresja jest oparta na metodach:
LZ77,RLE,BWT,MTF

w przypadku wpisania niew�a�ciwego has�a do dekodowania niechybnie czeka AccessViolation

http://goo.gl/596Ui - Readme
Archiwum SFX Kop32.exe - http://goo.gl/khYmE
http://goo.gl/fbtNY - Instalator
Deinstalator wpis�w - http://goo.gl/m9sfb

INNE

https://dl.dropboxusercontent.com/u/10755180/START.html