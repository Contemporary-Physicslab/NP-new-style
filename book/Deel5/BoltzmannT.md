# Boltzmann heeft het koud

In een van de voorgeschreven experimenten heb je onderzoek gedaan naar het ($V,I$)-karakteristiek van een diode, bij gelijke temperatuur. Maar in de Boltzmann energiedistributie zit ook een temperatuurafhankelijkheid. Op basis van dit experiment kun je het effect van temperatuur op de karakteristiek van een diode en een Ohmse weerstand bepalen.

## Introductie
Zowel het klassieke vrij-elektron model als het quantum mechanische vrij-elektron model leidt tot een Ohm’s gedrag voor de geleiding van metalen en halfgeleiders. In dit experiment wordt de weerstand als functie van de temperatuur gemeten van een metaal (dat voldoet aan criteria van een vrij elektron gas) en twee halfgeleiders. We verwachten van je dat je aan het einde van het project de meetresultaten kunt interpreteren volgens het microscopische geleidingsmodel waarbij de begrippen elektronmassa, elektronendichtheid, elektronlading en de relaxatie (of botsings) tijd aan bod komen en de invloed van de temperatuur op deze grootheden. Met de interpretatie dienen de geleidingsmodellen, geverifieerd dan wel gefalsificeerd te worden.

In het microscopische beeld van de elektrische geleiding leidt de wet van Ohm tot een relatie (vergelijking 38.12, pagina 1235 ref {cite:p}`Tippler`) tussen de specifieke weerstand ($\rho$) en de effectieve elektronmassa ($m_e$), de ladingsdragerdichtheid ($n$), de elementaire lading ($e$) en de tijd tussen twee opeenvolgende botsingen ($\tau$).

$$\rho=\frac{m_e}{ne^2\tau}$$ (eq:elek_gel)

In een metaal zal de elektronendichtheid niet sterk van de temperatuur T afhangen, maar de tijd tussen twee opeenvolgende botsingen is hier juist heel bepalend voor de geleiding.

De klassieke geleidingstheorie voorspelt een temperatuurafhankelijkheid die evenredig is met de wortel uit de temperatuur ($\rho ~ \sqrt{T}$).

De kinetische energie $E_{kin}$ van het elektron wordt gegeven door drie vrijheidsgraden (nml. bewegingen in de x, y en z richtingen) die ieder $1/2k_BT$ bijdragen aan de totale energie (equipartitie theorie, p 544 {cite:p}`Tippler`):

$$E_{kin}=\frac{1}{2}mv^2=\frac{3}{2}k_BT$$ (eq:Evrijheidsgraden)

waarin $v$ de snelheid van het elektron en $k_B$ de Boltzmann constante is.

In het quantummechanische model daarentegen zijn het de voornamelijk roostertrillingen die de botsingstijd beperken. Omdat bet aantal gekwantiseerde roostertrillingen bij lage temperaturen lineair toeneemt met de temperatuur neemt de botsingstijd en dus ook de specifieke weerstand lineair met de temperatuur toe.

Voor de geleiding in halfgeleiders zijn de temperatuurveranderingen in de botsingstijd veel geringer dan de veranderingen in de dichtheid van de ladingdragers. Vanwege de verboden zone (band gap) zijn de bezette valentiebanden en de onbezette geleidingsbanden van elkaar gescheiden. De geleiding vindt plaats door elektronen in de geleidingsband en gaten in de valentieband. De kans dat een valentie-elektron thermisch kan
worden aangeslagen van de valentieband naar de geleidingsband wordt gegeven door de
Fermi-Dirac verdeling (vgl 38.45, p 1257 {cite:p}`Tippler`):

$$P(E)=(e^{\frac{E_g}{k_BT}}+1)^{-1}$$ (eq:FermiDirac)

waarin $E$ de energie van het elektron, $E_g$ de bandgap energie voorstelt.

## Apparatuur
### Cryostaat
Temperatuurafhankelijke metingen worden meestal in een cryostaat uitgevoerd. Dit is een apparaat dat is opgebouwd uit een aantal compartimenten. Het binnenste compartiment is de sampleruimte waarin zich het te meten sample bevindt en desgewenst een oventje orn te kunnen verwarmen. Om de sampleruimte heen is een compartiment voor de koelvloeistof (vloeibaar stikstof of helium). In dit experiment wordt stikstof als koeling gebruikt. Stikstof heeft een kookpunt van 77 K bij een atmosferische druk van 1010 hPa.

Tussen de ruimte voor de vloeibare stikstof en de buitenwand is er een isolatiecompartiment dat onder vacuum staat, zodat er geen warmte via convectie wordt overgedragen aan de vloeibare stikstof. Bovendien bevindt zich in deze ruimte een absorptiepomp die begint te pompen zodra het compartiment voor de koelvloeistof gevuld wordt. De oppervakken in deze isolatieruimte die naar buiten zijn gericht, zijn ook nog voorzien van een laag superisolatie dat cen hoog reflecterend vermogen heeft voor warmtestraling.

Aan de samplestaaf kunnen eén of meerdere samples worden bevestigd in een IC voetje. Een stooklintje gewikkeld om de samplehouder fungeert als oventje om de temperatuur in te kunnen stellen van het kookpunt van vloeibaar stikstof tot 350 K. Aan de samplestaaf is ook een sensorlas van een thermokoppel bevestigd dat de temperatuur van de samplehouder registreert.

### Thermokoppel
De temperatuur wordt gemeten met behulp van een thermokoppel en een uitleesunit. Deze unit meet de thermospanning van de meetlas (een metaal/metaal contact) en geeft de temperatuur in graden Celsius weer op het display. De spanning van de referentielas wordt automatisch gecompenseerd. De uitleestabel voor een koper/constantaan (type T) thermokoppel, zit in het geheugen van deze unit. Met een type T thermokoppel kan de temperatuur op betrouwbare wijze in het interval van -250$^o$C tot +400$^o$C worden gemeten.

### Voeding en DMM
Er is een voeding beschikbaar die voor het stooklintje kan worden ingezet. Bij de inventaris van dit experiment horen drie digitale multimeters om de weerstand van de smoorspoel en de werkpunten van de diode te kunnen meten.

## Opdrachten
```{exercise} Het klassieke vrij elektron model
Waardoor wordt in dit model de afhankelijkheid van de temperatuur in de geleiding veroorzaakt? Leid de temperatuurafhankelijkheid af uit formule (1) en (2). Schets het verwachte verloop van de specifieke weerstand van een metaal als functie van de temperatuur volgens dit model.
```

```{exercise} Het quantummechanische vrij elektron model
Hoe komt in dit model de temperatuurafhankelijkheid tot uitdrukking? Schets het verwachte verloop van de specifieke weerstand als functie van de temperatuur voor een metaal.
```

```{exercise} Fermi-Dirac verdeling in halfgeleiders
Laat met behuip van {eq}`eq:elek_gel` en {eq}`eq:FermiDirac` zien dat het aantal ladingsdragers toeneemt bij toenemende temperatuur en dat hierdoor de weerstand in een halfgeleider afneemt.
```

Dc stroom in een diode wordt bepaald door de kans dat de elektronen de potentiaal stap kunnen maken van n → p. De stroom $I$ in een diode wordt daarom gegeven als:

$$I=I_0(e^{\frac{qU}{k_BT}}-1)$$ (eq:lekstroom)

Hierin is $I_0$ de donkerstroom die wordt bepaald door de kans dat elektronen thermisch worden aangeslagen vanuit de valentieband naar de geleidingsband:

$$Ae^{-\frac{E_g}{k_BT}}$$ (eq:I0)

Uit {eq}`eq:lekstroom` en {eq}`eq:I0` volgt vervolgens dat:

$$qU=E_g-k_BTln(\frac{A}{I}$$ (eq:iconst)

Bij een constant gehouden stroom i, is de spanning over een diode in de doorlaatrichting
lineair met de temperatuur.

```{exercise}
Schets het spanningsverloop als functie van temperatuur en geef aan hoe hieruit de bandgap kan worden bepaald.
```

```{tip}
In het oorspronkelijke experiment moest men de weerstand van de smoorspoel en de dioden in de cryostaat in het temperatuur traject van 100 tot 300 K met stappen van 5 K meten en verwarmen met een snelheid van 2 graden per minuut.
```