#    Opties met een luchtkussenbaan
Een airtrack of luchtrails is een lange buis met gaatjes waar lucht doorheen geblazen wordt, zie {numref}`Figuur {number} <fig:luchtkussenbaanopstelling>`. Karretjes die op deze airtrack 'staan' kunnen vrijwel wrijvingsloos bewegen. Hierdoor kun je de vaak geïdealiseerde natuurkunde onderzoeken.

```{figure} Figures/Luchtkussen/luchtkussenbaan.JPG
---
width: 60%
name: fig:luchtkussenbaanopstelling
---
De luchtkussenbaan bestaat uit een rails met gaatjes waar lucht doorheen geblazen wordt. Het karretje maakt daardoor geen contact met de baan zelf.
```
De track leent zich ideaal voor:
* Nabouwen van toetsel van Atwood 
* Onderzoek naar gekoppelde massa-veersystemen
* Elastische botsingen
* Versnelling langs een helling
* Luchtwrijving

Naast de beschrijvingen hieronder, kun je kiezen voor een reproductiestudie waarbij je de resultaten van een eerder gepubliceerd onderzoek te reproduceren.
* [Optimizing acceleration measurements using a single photogate](https://iopscience.iop.org/article/10.1088/1361-6404/abeafd)
* [Demonstration of a new collision phenomenon using air track](https://iopscience.iop.org/article/10.1088/1742-6596/1918/2/022036/pdf)
* [Video analysis of one-dimensional multi-body collisions: linear momentum, impulse and energy](https://iopscience.iop.org/article/10.1088/1361-6552/abb06b)
* [Coefficient of kinematic friction from damped oscillatory motion](https://iopscience.iop.org/article/10.1088/1361-6552/aadb28)

### Toestel van Atwood
Bij het toestel van Atwood zijn twee objecten met elkaar verbonden via een inelastisch (massaloos) touw, waarbij gebruik gemaakt wordt van een wrijvings- en massaloos katrol. In dit experiment zal een van de objecten de wagen met massa $M_1$ op de baan zijn. Het andere object met massa $M_2$ hangt in de vrije ruimte en zal door de zwaartekracht zorgen dat het systeem versnelt:

$$a=\frac{M_2}{(M_1+M_2)}g$$

Maar dit geldt natuurlijk alleen in de ideale situatie. Wat is de invloed van (de massa van) het touw? Speelt de massa van het katrol een grote invloed? Er zal immers sprake zijn van rotatie-energie... En is er invloed van wrijving? Je vindt een voorbeelduitwerking in het dictaat van het vak [MechaRela](https://qiweb.tudelft.nl/mecharela/rigid_body/#worked-examples).

### Gekoppelde massa-veersystemen
Bij het derde jaarsvak Vaste stof Fysica leer je over atomen en hoe deze beschouwd kunnen worden als gekoppelde massa-veersystemen (fononen). Bij de airtrack kun je de wagentjes aan elkaar koppelen met veren en de beweging bestuderen, bijvoorbeeld als functie van de massa van een karretje.

```{figure} Figures/Luchtkussen/gekoppeldemu.jpg
---
width: 60%
name: fig:gekoppelde_systeem
---
Het idee van gekoppelde massa-veersysteem
```


In plaats van de volledige afleiding hier neer te zetten, volstaat een verwijzing naar een [site](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjhnqWFia70AhV3hP0HHVWPAecQFnoECDQQAQ&url=https%3A%2F%2Fphys.libretexts.org%2FCourses%2FUniversity_of_California_Davis%2FUCD%253A_Physics_9HA__Classical_Mechanics%2F8%253A_Small_Oscillations%2F8.4%253A_Coupled_Oscillators_and_Normal_Modes&usg=AOvVaw1recVDsysOymqKC5bsh6jE) waarop de bewegingsvergelijking voor een gekoppeld massa-veersysteem met gelijke massa's en veren afgeleid wordt.

### Elastische botsingen
Bij MGO zijn (in)elastische botsingen uitgebreid behandeld. Met de airtrack heb je de mogelijkheid deze verder te bestuderen. De basis van het beschrijven van de bewegingen van de twee objecten ligt in de behoud van bewegingsenergie en behoud van impuls:

$$ \frac{1}{2}m_1v_{1,b}^2+\frac{1}{2}m_2v_{2,b}^2 = \frac{1}{2}m_1v_{1,e}^2+\frac{1}{2}m_2v_{2,e}^2 $$

$$ m_1v_{1,b}+m_2v_{2,b}=m_1v_{1,e}+m_2v_{2,e}$$

Bij inelastische botsingen kunnen bovenstaande vergelijkingen opgelost worden, bij elastische botsingen zullen beide objecten samen verder gaan ($m_1+m_2$) met eenzelfde snelheid $v_{1,e}=v_{2,e}$.


### Versnelling langs een helling
We kunnen de baan onder een (kleine) hoek zetten. In de geïdealiseerde situatie zou het wagentje dan versnellen met: 

$$ a = gsin(\theta) $$

Maar of we daadwerkelijk een geïdealiseerde situatie hebben... [zie bijvoorbeeld dit artikel](https://iopscience.iop.org/article/10.1088/1361-6404/abeafd).

### Luchtwrijving
De geïdealiseerde naturkunde gaat uit dat wrijving te verwaarlozen is ten opzichte van andere effecten. Maar we kunnen op het wagentje een kartonnetjes van verschillende groottes zetten en zodoende het effect van luchtwrijving bepalen: 

$$ F_w = \frac{1}{2}\rho C_wAv^2.$$

Is het dan ook mogelijk om $A$ te extrapoleren naar 0 om zo de luchtwrijving van het karretje zelf te bepalen?

```{figure} Figures/Luchtkussen/luchtkussenequipment.JPG
---
width: 60%
name: fig:luchtkussenequ
---
Attributen die gebruikten kunnen worden bij de luchtkussenbaan.
```

Er zijn ook mogelijkheden om wrijving te simuleren, kijk daarvoor in de Notebooks van het vak [MechaRela](https://qiweb.tudelft.nl/mecharela/forces/)

## Materialen
* Luchtrails
* max 4. karretjes
* diverse veertjes
* massablokjes
* wieltje
* elastieken (voor botsen)
* opzethouder voor karton (wrijving)
* fotodiode poortjes
* ..