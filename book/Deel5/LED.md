# (LE)Diode

Diodes, en zeker Light Emitting Diodes kom je overal tegen. De LED's vervangen de oude gloeilampen, waardoor een stukje toegepaste quantummechanica de huiskamers is binnen gekomen. In deze open opdracht doe je onderzoek naar eigenschappen de LED.

## De theorie van diodes
(Hoofdstuk 38 van physics)

## De theorie van LED's
De LED geeft licht vanaf een bepaalde spanning over de LED. Daarbij is de uitgezonden golflengte gelijk aan: 

$$qU=\frac{hc}{\lambda}$$

Uit de praktijk blijkt er een treshold te zijn, waardoor de vergelijking iets anders wordt, namelijk:

$$qU-\phi=\frac{hc}{\lambda}$$

## Onderzoeksideeen
Voor verschillende LEDs kun je de golflengte en drempelspanning bepalen. Op basis van die metingen kun je bovenstaande theorie bevestigen en de constante van Boltzmann bepalen. 

Ook kun je de LED of diode onder dompelen in vloeibaar stikstof onder dompelen en de stroomsterkte als functie van de temperatuur bepalen. 


## Inleiding

### Doel van het experiment

Zowel het klassieke vrij-elektron model als het quantum mechanische vrij-elektron model leidt tot een Ohm’s gedrag voor de geleiding van metalen en halfgeleiders. In een eenvoudig experiment wordt de weerstand als functie van de temperatuur gemeten van een metaal (dat voldoet aan criteria van een vrij elektron gas) en twee halfgeleiders. Van de studenten wordt verwacht dat zij aan het einde van de middag de meetresultaten kunnen interpreteren volgens het microscopische geleidingsmodel waarbij de begrippen elektronmassa, elektronendichtheid, elektronlading en de relaxatie (of botsings) tijd aan bod komen en de invloed van de temperatuur op deze grootheden. Met de interpretatie dienen de geleidingsmodellen, geverifieerd dan wel gefalsificeerd te worden.

### Voorbereiding

### Theoretische achtergrond

In het microscopische beeld van de elektrische geleiding leidt de wet van Ohm tot een relatie {eq}`eq:soort_weer` tussen de specifieke weerstand ($\rho$) en de effectieve elektronmassa ($m_{e}$), de ladingsdragerdichtheid ($n$), de elementaire lading ($e$) en de tijd tussen twee opeenvolgende botsingen ($\tau$).

$$\rho = \frac{m_e}{ne^2\tau}$$ (eq:soort_weer)

In een metaal zal de elektronendichtheid niet sterk van de temperatuur $T$ afhangen, maar de tijd tussen twee opeenvolgende botsingen is hier juist heel bepalend voor de geleiding.

De klassieke geleidingstheorie voorspelt een temperatuurafhankelijkheid die evenredig is met de wortel uit de temperatuur ($\rho ~ \sqrt{T}$).

De kinetische energie $E_{kin}$ van het elektron wordt gegeven door drie vrijheidsgraden (nml. bewegingen in de $x$, $y$ en $z$ richtingen) die ieder $1/2kT$ bijdragen aan de totale energie {eq}`eq:kin_energie`.

$$ E_{kin}=\frac{1}{2}mv^2=\frac{3}{2}kT$$ (eq:kin_energie)

Waarin $v$ de snelheid van het elektron en $k$ de Boltzmann constante is.

In het quantummechanische model daarentegen zijn het de voornamelijk roostertrillingen die de botsingstijd beperken. Omdat het aantal gekwantiseerde roostertrillingen bij lage temperaturen lineair toeneemt met de temperatuur neemt de botsingstijd en dus ook de specifieke weerstand lineair met de temperatuur toe.

Voor de geleiding in halfgeleiders zijn de temperatuurveranderingen in de botsingstijd veel geringer dan de veranderingen in de dichtheid van de ladingsdragers. Vanwege de verboden zone _(band gap)_ zijn de bezette valentiebanden en de onbezette geleidingsbanden van elkaar gescheiden. De geleiding vindt plaats door elektronen in de geleidingsband en gaten in de valentieband. De kans dat een valentie-elektron thermisch kan worden aangeslagen van de valentieband naar de geleidingsband wordt gegeven door de fermi-dirac verdeling {eq}`eq:fermi_dirac`.

$$ P(E)=\frac{1}{e^{(\frac{E_g}{kT})}+1}$$ (eq:fermi_dirac)

Waarin E de energie van het elektron, $E_g$ de bandgap energie voorstelt.

## Apparatuur

### Cryostaat

Temperatuurafhankelijke metingen worden meestal in een cryostaat uitgevoerd. Dit is een apparaat dat is opgebouwd uit een aantal compartimenten. Het binnenste compartiment is de sampleruimte waarin zich het te meten sample bevindt en desgewenst een oventje om te kunnen verwarmen. Om de sampleruimte heen is een compartiment voor de koelvloeistof (vloeibaar stikstof of helium). In dit experiment wordt stikstof als koeling gebruikt. Stikstof heeft een kookpunt van 77 K bij een atmosferische druk van 1010 hPa.

__figuur__

Tussen de ruimte voor de vloeibare stikstof en de buitenwand is er een isolatiecompartiment dat onder vacuüm staat, zodat er geen warmte via convectie wordt overgedragen aan de vloeibare stikstof. Bovendien bevindt zich in deze ruimte een absorptiepomp die begint te pompen zodra het compartiment voor de koelvloeistof gevuld wordt. De oppervlakken in deze isolatieruimte die naar buiten zijn gericht, zijn ook nog voorzien van een laag superisolatie dat een hoog reflecterend vermogen heeft voor warmtestraling. Aan de samplestaaf kunnen één of meerdere samples worden bevestigd in een IC voetje. Een stooklintje gewikkeld om de samplehouder fungeert al oventje om de temperatuur in te kunnen stellen van het kookpunt van vloeibaar stikstof tot 350 K. Aan de samplestaaf is ook een sensorlas van een thermokoppel bevestigd dat de temperatuur van de samplehouder registreert.

### Thermometer

De temperatuur wordt gemeten met behulp van een thermokoppel en een uitleesunit. Deze unit meet de thermospanning van de meetlas (een metaal/metaal contact) en geeft de temperatuur in graden Celsius weer op het display. De spanning van de referentielas wordt automatisch gecompenseerd. De uitleestabel voor een koper/constantaan (type T) thermokoppel, zit in het geheugen van deze unit. Met een type T thermokoppel kan de temperatuur op betrouwbare wijze in het interval van -250$^o$C tot +400$^o$C worden gemeten.

### Voeding

Er is een voeding beschikbaar die voor het stooklintje kan worden ingezet.

### Digitale multimeter

Bij de inventaris van dit experiment horen drie digitale multimeters om de weerstand van de smoorspoel en de werkpunten van de diode te kunnen meten.

## Opdrachten

### Het klassieke vrij elektron model

Waardoor wordt in dit model de afhankelijkheid van de temperatuur in de geleiding veroorzaakt? Leid te temperatuurafhankelijkheid af uit formule {eq}`eq:soort_weer` en {eq}`eq:kin_energie`. Schets het verwachte verloop van de specifieke weerstand van een metaal als functie van de temperatuur volgens dit model.

### Het quantummechanische vrij elektron model

Hoe komt in dit model de temperatuurafhankelijkheid tot uitdrukking? Schets het verwachte verloop van de specifieke weerstand als functie van de temperatuur voor een metaal.

### Fermi-Dirac verdeling in halfgeleiders

Laat met behulp van {eq}`eq:soort_weer` en {eq}`eq:fermi_dirac` zien dat het aantal ladingsdragers toeneemt bij toenemende temperatuur en dat hierdoor de weerstand in een halfgeleider afneemt.

De stroom in een diode wordt bepaald door de kans dat de elektronen de potentiaal stap kunnen maken van n $\rightarrow$ p. De stroom $i$ in een diode wordt daarom gegeven als:

$$ i=i_0 ( e^{\frac{eV}{kT}}-1)$$ (eq:stroom_diode)

- $e$ = elementaire lading

- $V$ = bias spanning

- $k$ = constante van Boltzmann

- $T$ = Temperatuur

Hierbij is $i_0$ de donkerstroom die wordt bepaald door de kans dat elektronen thermisch worden aangeslagen vanuit de valentieband naar de geleidingsband.

$$ i_0 = Ae^{- \frac{E_g}{kT}}$$ (eq:donkerstroom)

- $E_g$ = bandgap

- $A$ = constante

Uit {eq}`eq:stroom_diode` en {eq}`eq:donkerstroom` volgt vervolgens dat

$$ eV = E_g – kT \ln(\frac{A}{i}) $$

Bij een constant gehouden stroom $i$, is de spanning over een diode in de doorlaatrichting lineair met de temperatuur. Schets het spanningsverloop als functie van temperatuur en geef aan hoe hieruit de bandgap kan worden bepaald.

### Experimenten

Meet de weerstand van de smoorspoel en de dioden in de cryostaat in het temperatuurtraject van 100 tot 300 K met stappen van 5 K en verwarm met een snelheid van 2 graden per minuut.

### Interpretatie en nabespreking

Verwerk de meetwaarden grafisch en bespreek met de assistenten de interpretatie.