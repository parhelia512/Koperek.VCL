Readme(void)
{

""C:\BlaBla\Koperek" /o... /buforsize(1024) /argts(blabla;[nazwa];[rozmiar];[atrybuty];[data]) /maska(*.txt;*.blabla;jeszczjedno.blabla) /kopiuj /przenies /usun /koduj /dekoduj /listuj /jakreaguj(quest) "c:\Katalog docelowy"" 

/kopiuj - kopiowanie plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
          np. uruchomienie "Koperek.exe /kopiuj d:\smieci" spowoduje skopiowanie nazw w showku do d:\smieci

/przenies - przeniesienie plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
            np. uruchomienie "Koperek.exe /przenies d:\smieci" spowoduje przeniesienie nazw w showku do d:\smieci

/koduj - szyfrowanie nazw(y) plikow(katalogow) o nazwach znajduj�cych si� w schowku do "Katalog docelowy"
         np. uruchomienie "Koperek.exe /przenies d:\smieci" spowoduje przeniesienie nazw w showku do d:\smieci

/dekoduj - deszyfrowanie nazw(y) plikow(katalogow) znajduj�cych si� w schowku do "Katalog docelowy"
           np. uruchomienie "Koperek.exe /przenies d:\smieci" spowoduje przeniesienie nazw w showku do d:\smieci

/listuj - umieszczenie w schowku jesli docel = "Clipboard:" lub w pliku docel listy plik�w i katalog�w w "C:\katalog zrodlowy"
          np. uruchomienie "Koperek.exe /listuj d:\log.txt" spowoduje zlistowanie katalogu z nazw� umieszczon� w schowku do logu w pliku lub schowku

Jako "plik" docelowy listy mo�na wpisa� "clipboard:" spowoduje to listowanie do schowka

/usun - Usuniecie "Katalog docelowy"
        Uruchomienie "Koperek.exe /usun d:\smieci" spowoduje usuni�cie d:\smieci

/cutiffilesize(x) - gdzie x to liczba bajt�w, od jakiej zostanie skr�cony plik 

/cuttofilesize(x) - gdzie x to liczba bajt�w, do jakiej zostanie skr�cony plik 

/buforsize(x) - gdzie x to liczba Kbajt�w, zmiana bufora plikowego na wartosc np x "/buforsize(x) (domy�lna w programie to 64KB) 

/jakreaguj(tak) - potwierdzaj na wszystkie pytania

/jakreaguj(nie) - zaprzeczaj na wszystkie pytania

/jakreaguj(quest) - pytaj usera o odpowiedx

/maska(maska1;maska2;maskaN) - wykonuje operacje na plikach o nazwach
                               spelnaiaj�cych warunek nazwa pasuje do maska1 || maska2 || maskaN

/argts(jeden;drugi;[nazwa];[rozmiar];[atrybuty]) - parametry lini listowania gdzie [nazwa];[rozmiar];[atrybut] to nazwa kolejnego pliku itp, sta�e b�d� poprostu przepisane

/o... okno About (czy to jeszcze dzie�a?)

nie aktywne /przegladaj - przgl�dnie struktury rozmiarowej katalog�w (kiedy� by�o i to fajne ale nie ma, trzeba do��czy� istniej�ce �r�d�o i zadzia�a gdyby kto� chcia� mi to zleci�)
 
/zaznacz - np. uruchomienie "Koperek.exe /zaznacz  "C:\Windows" "c:\temp" "C:\autoexec.bat" spowoduje przeniesienie nazw w showku do d:\smieci
           spowoduje skopiowanie do schowka takiego String'a 

Program napisany przez Stanis�aw Stasiak "TSoft, where?"(do you want to superfreak today?) (R) 2000-2002
w C++Builder 3 licencjonowanego na RoSt 2002 (R)

return Zadowolenie;
}

(dla u�atwienia) Szyforwanie jest oparte na trzech metodach :

1. ExOrowanie 
2. NQuadrowanie
3. Over4Space

w przypadku wpisania niew�a�ciwego has�a do dekodowania niechybnie czeka AccessViolation