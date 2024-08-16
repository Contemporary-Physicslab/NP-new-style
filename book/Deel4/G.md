# Een nauwkeurige en precieze bepaling van g

## Doel
### Practicumdoel
In dit practicum mag je uit twee verschillende manieren kiezen om het vierde significante cijfer van de zwaartekrachtsversnelling $g$ te bepalen, en dat binnen een foutmarge van $0.5\%$ van de gebruikte waarde in Delft. 

### Leerdoel
Na het uitvoeren van dit practicum:
* Kun je gemaakte aannames aanwijzen en deze valideren.
* Kun je bewuste keuzes maken in de methode wat betreft het verkleinen van de meetonzekerheid.
* Kun je een strijdigheidsanalyse uitvoeren.

## Inleiding
De zwaartekracht zorgt er voor dat je terug naar de grond versnelt wanneer je omhoog springt. De grootte van de zwaartekrachtsversnelling $g$ is wel bekend en in Delft 9.812... m/s$^2$. Maar hoe goed kunnen we die waarde bepalen met eenvoudige middelen?

## Theorie
### De slinger
Volgens de theorie zou een fysische slinger, bestaande uit een puntmassa aan een massaloze draad, zie {numref}`Figuur {number} <fig:gbep:sling>`, een periode hebben van:

$$ T = 2\pi\sqrt{\frac{l}{g}}$$


Wanneer de lengte van de slinger bekend is en de periode bepaald, volgt uit bovenstaande vergelijking de waarde voor de zwaartekrachtsversnelling.

```{figure} Figures/G/Slinger.png
---
width: 15%
name: fig:gbep:sling
---
De opstelling van de fysische slinger.
```

### De valproef
Wanneer je een object laat vallen in vacuüm zal het object een beweging beschreven volgens:

$$ y(t) = y_0 + v_0t+\frac{gt^2}{2}$$

Door de valtijd voor verschillende hoogtes te bepalen, volgt uit bovenstaande vergelijking de waarde voor de zwaartekrachtsversnelling.

## Aanpak
### Voorbereiding
1. Installeer de gratis [Arduino](www.arduino.cc) software op je laptop en download de bijbehorende codes van Brightspace.
2. Doe voor je gekozen experimenten een testrun waarbij je gebruikt maakt van de stopwatch op je telefoon.
3. Voer de slingerproef uit met een slingerlengte van 1,0 m, of de valproef met een valhoogte van 1,0m. Meet vijfmaal.
4. Bepaal de gemiddelde periode/valtijd, de standaarddeviatie en de meetonzekerheid voor de periode/valtijd die volgt uit dit experiment.
5. Doe de vorige twee opdrachten nogmaals maar nu voor 10 periodes/valtijden.
6. Hoe reduceert de meetonzekerheid door 10 periodes/valtijd te bepalen?
7. Is de verkregen meetonzekerheid in de tijd voldoende om $g$ te bepalen met een foutenmarge van 0.5\%?
8. Maak nu gebruik van de opstelling om de een gevoel te krijgen voor de spreiding in de metingen. Vergelijk de bepaalde waarden met jouw eerder gevonden waarden.

```{tip}
:class: dropdown
Voor de valproef moet je soms de pinnen 2 en 8 in de code omdraaien. Test eerst met je hand of je een output krijgt als je je hand eerst langs de bovenste sensor haalt en vervolgens de onderste.
```

```{tip} 
:class: dropdown
Je waarden uitlezen in Arduino kan via de seriële monitor.
```

9. De theorie is te kort door de bocht en dient verder uitgewerkt te worden. Identificeer wat er ontbreekt en wat daaraan toegevoegd moet worden.
10. Maak een meetplan voor een van de twee experimenten. Onderbouw elke keuze die je maakt, beschrijf de aannames die je doet en valideer deze waar nodig. Voer extra testen uit indien nodig.
11. Laat je meetplan controleren door de assistent.
12. Maak de bijbehorende verwerking voor Python. Bedenk goed hoe je je data gaat analyseren.

### Uitvoering
14. Voer het bedachte en goedgekeurde meetplan uit.

### Verwerking
15. Verwerk je gegevens volgens het vooropgezette plan. Voer een strijdigheidsanalyse uit.
