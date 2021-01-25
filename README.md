# Parametry projektu

Nazwa: pm-lab-5  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na piąte spotkanie laboratoryjne z przedmiotu _Techniki mikroprocesorowej_.  
Wersja: v1.0  
Data: 25.01.2021 r.

# Informacje o studencie

Imię i nazwisko studenta: Imię Nazwisko  
Numer albumu: 72524  
Grupa studencka: WELEWEL18DE1S1

# Odpowiedzi do pytań z instrukcji
...
READMY proszę w kilku zdaniach wyjaśnić jego zasadę działania, uzasadnić konieczność zastosowania tranzystora oraz możliwość udoskonalenia.

zasada działania regulujemy napięcie w czasie na bazie co sprawia że tranzystor jest w określanym czasie załączany i wyłączany w obwodzie głównym tranzystora zmienia się recystancja kolektor-emiter co powodujezmiane napięcia i prądu na zaciskach silnika. sam silnik nie musi być połączony pod stabilizator ardruino a może być podłączony pod inne źrudła napięciowe o większej mocy.

dlaczego tranzystor
tranzystor jest konieczny ze względu na ograniczenia obciążalności układu ardruino oraz możliwość uszkodzenia jego przez przepięcia i za dużą moc jeśli byśmy go nie zastosowali przepięcia na zaciskach silnika które generowały by się po przez samo indukcje mogą uszkodzić układ.

udoskonalenia
- dioda zwrotna na zaciskach silnika {aby ograniczyć przepięcia}
-przy bazie tranzystora podłączyć kondensator małej pojemności i dużej rezystancji równolegle do kondensatora [kondensator równolegle między masą a bazą , ]{nie podłączenie jego powoduje to że mamy przebieg prostokątny podany na tranzystor a ze względu na to że silnik elektryczny to praktycznie czysta indukcyjność Powstanie nam układ podwyższający napięcie na zaciskach silnika przy odpowiednim wypełnieniu}(po to kondensator aby całkować napięcie i uzyskać napięcie o jak najmniejszych zmianach z możliwością regulacji napięcia skutcznedo , rezystor po to by po uzyskaniu napięci mugł spowrotem w szybszy sposub samoistnie się rozładować nawet po wyłączeniu użądzenia)

-w miejsce 1 tranzystora można użyć wzmacniacza operacyjnego najlepiej z ujemnym sprzężeniem zwrotnym a sam tranzystor umieścić na rezystorze R1 lub R2 aby nim regulować wzmocnienie w układnie. (ten punkt jest mniej istotny )

-dodatkowym zabezpieczeniem jakby coś miało pujść nie tak jak powinno to dobranie diody zwrotnej przy wyjściu kture będziemy sterować + szergowo rezystor aby muc regulować 2 tranzystorem odciążający diode zwrotną (aby jej nie uszkodzić) w tedy przepięcia zagrażające układowi mogły by być zwierane do masy
