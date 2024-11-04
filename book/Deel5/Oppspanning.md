# Bepaling van de oppervlaktespanning

## Doel
Het doel van dit experiment is de oppervlaktespanning van een vloeistof te bepalen als functie van een zelfgekozen grootheid (bijvoorbeeld de concentratie suiker, temperatuur, zoutgehalte...).

## Voorbereiding
Voordat je naar het practicum komt, word je geacht de theorie in dit hoofdstuk te hebben bestudeerd en een idee te hebben van wat je wilt gaan onderzoeken. Schrijf de antwoorden op de vragen, en je ideeen voor onderzoeken op in je labjournaal. 

## Achtergrond
Oppervlaktespanning is een bekend natuurkundig fenomeen. Althans, we hebben het allemaal wel eens gezien. Zo zijn we bekend met schaatsrijders op het water, water dat plakt tegen de zijkant van een regenpijp, of de cappilaire werking die berust op oppervlaktespanning etc. Maar het idee van oppervlaktespanning is veel omvat en best complex. Vaak wordt er slechts een benadering van het fenomeen gegeven, waarbij de abrupte overgang van water naar lucht beschouwd wordt. 

Het belangrijkste idee is dat de potentiele energie van een molecuul aan het oppervlak groter is dan op andere plaatsen in de vloeistof. Dit betekent dat energie toegevoerd moet worden om moleculen toe te voegen. Er is dus een kracht die weerstand biedt tegen uitbreiding van het oppervlak. 

```{figure} Figures/Oppspanning/schaatsrijder.jpg
---
width: 60%
name: fig:surf_tens_1
---
Een schaatsrijder die goed gebruik maakt van de oppervlaktespanning van water 
```


## Methode
### De ring van Du Noüy
Als we een dunne metale ring met een kleine diameter $d$ en radius $R$ op het wateroppervlak leggen, dan zal deze niet zinken. Omgekeerd, als we proberen de ring uit het water te trekken, dan wordt het water mee omhoog getrokken. De ring lijkt vastgeplakt aan het water. Een eerste benadering van de kracht om de ring uit het water te trekken wordt gegeven door: 

$$ F = 4 \pi R \sigma $$ (eq:surf)

$\sigma$ is hierin de oppervlaktespanning. Echter, als we zorgvuldig kijken zien we dat met het omhoogtrekken van de ring ook water omhoog getrokken wordt. Daarnaast is er een opwaartse kracht (buoyance) die op de ring werkt. Als we alle factoren in acht nemen krijgen we:

$$ F = 4 \pi R \sigma - 2 \pi R d \sqrt{2 \sigma \rho g} + \frac{1}{4} \pi^2 R d^2 \rho g $$ (eq:surf2)

hierin is $\rho$ de dichtheid van de vloeistof, $g$ de zwaartekrachtsversnelling. Om de oppervlaktespanning te bepalen hoeven we dus alleen maar te bepalen hoe groot de kracht is om de ring uit het water te trekken...

```{figure} Figures/Oppspanning/opstelling_nouy.jpg
---
width: 60%
name: fig:nouy_opst
---
De experimentele opstelling voor het bepalen van de oppervlaktespanning van water met behulp van de ring van Noüy.
```

De oppervlaktespanning is te bepalen met de tensiometer van Du Noüy, zie  {numref}`Figuur {number} <fig:nouy_opst>`. De tensiometer is een zogenaamde torsiebalans. De dunne balansarm (8) is bevestigd aan de horizontale gespannen torsiedraad (7). De platina ring is bevestigd aan de arm (6). De benodigde kracht wordt bepaald door: 

* de arm te balanceren door te draaien aan knop 1 zodanig dat de dunne arm horizontaal staat. Om te bepalen of deze horizontaal staat wordt het occulair gebruikt, zie {numref}`Figuur {number} <fig:nouy_opst>`. 
* de ring onder te dompelen door de hoogte van het bakje te veranderen met knop 5.
* de arm voorzichtig te balanseren door knop 1 en 5 te draaien.
* als de arm gebalanseerd is, verlaag je het bakje met vloeistof met knop 5, en vervolgens de arm weer horizontaal te krijgen met knop 1. Dat proces gaat door totdat de ring ineens los spring uit het water. 

Om uiteindelijk de kracht te bepalen, moeten we de torsieschaal eerst kalibereren. Daartoe hebben we verschillende kleine massa's die eerst gewogen kunnen worden en daarna gebruikt voor het kalibreren.

% assignment: derive the unit using equation \ref{eq:surf}
% solve eq 2 using the abc method
% think of a proper way to calibrate the tension scale.

### Capillaire werking

Een cappilair (dun buisje), zie {numref}`Figuur {number} <fig:capmethod>` met binnen radius $r$ is in water gedompeld. De vloeistof bevochtigt de binnenbuis en de vloeistof stijgt tot een hoogte $h$. Daarbij geldt: 

$$ 2\pi r \gamma = \pi r^2 h \rho g $$ (eq:surf3)

Waarin $\rho$ de dichtheid van de vloeistof is en $g$ de zwaartekrachtsversnelling.

De cappilaire hoogte $h$ kan gemeten worden met een microscoop, zie {numref}`Figuur {number} <fig:capmethod>`. Als eerst, focus de scoop op het oppervlak van het water in het bakje en noteer de hoogte. Vervolgens richt je de scoop op de top van het water in het cappilair en noteert weer de hoogte. Het verschil tussen deze twee hoogtes is de cappilaire hoogte.

```{figure} Figures/Oppspanning/cappilairmethod.jpg
---
width: 40%
name: fig:capmethod
---
De experimental opstelling om het oppervlaktespanning te bepalen op basis van de cappilaire werking
```

### Druppelmethode
De maximale grootte van een druppel die nog blijft hangen aan een dun buisje wordt gegeven door: 

$$mg=2\pi r\sigma$$

door de maximale grootte van druppels bij verschillende buisdiameters te bepalen, zou het mogelijk moeten zijn de waarde van de oppervlaktespanning te bepalen.

## Experimentale aanpak

* Start met een proefmeting om gevoel te krijgen voor beide methode. 
* Maak de waterbakjes schoon. Vul het en maak het oppervlak schoon door er water tegenaan te spuiten.
* Droog de bodem waarbij je er voor zorgt dat er geen vet of zeep op de bodem komt. Meet de temperatuur en bepaal het oppervlaktespanning met de tensiometer. Herhaal de meting met warmwater. Is het verschil groot / significant? Laat de metingen controleren door de assitent.
* Maak het oppervlak nu vies met je vinger. Verandert de oppervlaktespanning?
* Meet de cappilaire hoogte bij kamer temperatuur. Welk van de methoden werkt beter, welk is nauwkeuriger?
* Bedenk welke onderzoeksvraag je interessant vindt en wilt beantwoorden. bedenk een methode om het experiment op te zetten zodanig dat het antwoord geeft op de onderzoeksvraag. Verwerk dit in je onderzoeksvoorstel.

## Materialen
* Opstelling van de ring van Du Nuoy
* Opstelling voor de cappilaire werking
* Buisjes met verschillende binnendiameters
* Verschillende vloeistoffen
* Precisie weegschaal
* Materiaal om te mengen
* Thermometer