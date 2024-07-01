---
jupytext:
  text_representation:
    extension: .md
    format_name: myst
    format_version: 0.13
    jupytext_version: 1.10.3
kernelspec:
  display_name: Python 3 (ipykernel)
  language: python
  name: python3
---

# Labjournaal

<div style="text-align: right; width: 70%; margin-left: 30%;">

*For this you keep a lab notebook. Everything gets written down, formally, so that you know at all times where you are, where you've been, where you're going and where you want to get. In scientific work and electronics technology this is necessary because otherwise the problems get so complex you get lost in them and confused forget what you know and what you don't know and have to give up. In cycle maintenance things are not that involved, but when confusion starts it's a good idea to hold it down by making everything formal and exact. Sometimes just the act of writing down the problems straightens out your head as to what they really are.*

Robert Pirsig - On Scientific Method in Zen & the art of motorcycle maintenance

</div>


Bij elk practicum moet je voorbereidingsopdrachten maken die je helpen bij het begrijpen van het experiment en het verwerken van de data. Daarnaast moet je tijdens het practicum data verzamelen en noteren, instellingen van meetinstrumenten opschrijven, waarnemingen beschrijven, ideeën opsommen etc. Dit alles moet uiteindelijk overzichtelijk in een document staan. Dat document is je labjournaal. Met het labjournaal in de hand moet iemand anders de proef die jij uitvoert af kunnen maken of bijvoorbeeld kunnen toetsen dat je alles op de juiste wijze hebt uitgevoerd. Het labjournaal is dan ook een belangrijk onderdeel in het practicum en binnen (natuurwetenschappelijk)onderzoek.

```{figure} Figures/Labjournaal/labjournalscan.png
---
width: 90%
name: fig:labj
---
Een scan van een labjournaal van een student uit
2019
```

## Functie

```{code-cell} ipython3
:tags: [remove-input]
 
from myst_nb import glue
from IPython.lib.display import YouTubeVideo
video = YouTubeVideo('vZPQA6G8uoM', width =600)
 
glue("vid", video, display = False)
 
```
 
<div style='text-align: center;'>
 
```{glue:} vid
```
</div>

Het labjournaal is een vergaarbak van ideeën, metingen, methodes, experiment etc. Alles wat belangrijk is voor het onderzoek, noteer je in het labjournaal. Een ander zou op basis van jouw labjournaal verder moeten kunnen gaan waar jij bent gebleven. Niet gepubliceerd materiaal kan na twee jaar nog gebruikt worden omdat je overzichtelijk hebt genoteerd wat je hebt gedaan, wat je hebt gevonden, wat mogelijke verklaringen zijn voor wat je hebt gevonden en wat dat betekent geplaatst in een breder perspectief.

Het netjes bijhouden van een labjournaal, begrijpelijk maken van code voor anderen, en overzicht bewaren is niet makkelijk. Daarom proberen we je in het eerstejaars practicum een algemene structuur aan te bieden voor het opzetten van het labjournaal. Je kunt niet altijd alle velden invullen en wellicht heb je later meer velden nodig. Dan is dat eenvoudig uit te breiden.

Het goed bijhouden en leesbaar maken van je labjournaal kan bijdragen aan *Open Science*. We hanteren hier de twee levels die binnen de afdeling QN zijn opgeteld door Steele en Ahkmerov:

**Level 0:** Het publiceren van de verwerkte data (bestanden) welke zijn weergegeven in de plots in het gepubliceerde werk (verslag).

**Level 1:** Het publiceren van de ruwe data zoals verzameld door de computers en/of handmatig alsmede de verwerkingsscripts waarop de verwerkte data in de plots zijn verkregen.

## Opbouw

Een labjournaal volgt een soortgelijk structuur als een verslag. Het beslaat de volgende punten:

**Algemeen**
| no.| Onderdeel                | Beschrijving                                  |
| -- | ------------------------ | --------------------------------------------- |
| 1. | Titel experiment         | Noteer een bondig, geheel omvattende titel. | 
| 2. |  Begindatum              | Noteer de datum van de start van het experiment. | 
| 3. |  Verwachtte einddatum    | Noteer de verwachtte einddatum voor langer lopende onderzoeken. | 
| 4. |  Partner                 | Noteer, wanneer van toepassing, de naam van je partner. | 
| 5. |  Doel experiment         | Noteer bondig het doel van het experiment | 
| 6. |  Onderzoeksvraag         |  Noteer, wanneer van toepassing, de onderzoeksvraag. Het kan zijn dat bij enkele practica de onderzoeksvraag er niet direct is, schrijf dan een iets uitgebreidere doel. | 
| 7. |  Verwachting             |  Wat is het verwachte antwoord op de onderzoeksvraag. | 
| 8. |  Gewenste nauwkeurigheid |  Hoeveel procent wil je van de literatuurwaarde af zitten, welke eis stel je aan de nauwkeurigheid van het eindantwoord (bijv. in een situatie waarin de uitkomsten implicaties hebben voor de werkelijke wereld). | 

**Voorbereiding**
| no.| Onderdeel                  | Beschrijving                                  |
| -- | -------------------------- | --------------------------------------------- |
| 1. | Opdrachten                 | Hierin zet je de gemaakte opdrachten. Als je dit handig aanpakt wissel je tussen markdown (tekst) en code (Python). Je kunt al functies definiëeren die je later zeker nodig hebt. |
| 2. | Theorie                    | In het eerste jaar hoef je geen theorie te beschrijven, in sommige gevallen kun je verwijzen. Anders geef je hier kort weer welke theorie je nodig hebt om de proef te begrijpen en uit te voeren. |
| 3. | Methode                    |  Globaal wat je gaat doen, de precieze stapsgewijze beschrijving volgt in je procedure. Eventuele verwerking van data tot bewijs.                              |
| 4. | Onafhankelijke variabele   | De variabele die jij in stelt.                |
| 5. | Afhankelijke variabele(n) | De variabele(n) die je gaat meten.             |
| 6. | Gecontroleerde variabelen | De variabelen die van invloed kunnen zijn op de uitkomst van het experiment en die constant gehouden moeten worden om een eerlijke test uit te voeren.           |
| 7. | Meetinstrumenten & instellingen | De meetinstrumenten die gebruikt zijn en hun bijbehorende instellingen. Die instellingen kunnen tijdens het experiment wijzigen, je kunt dan hier bijvoorbeeld de bijbehorende nauwkeurigheid per instelling noteren. |
| 8. | Meetprocedure | De beschrijving van wat je gaat doen (argumentatie waarom je dit op die manier doet, kan hier ontbreken, afhankelijk van de proef. Die argumentatie moet wel opgenomen worden in het  verslag). |
| 9. | Opstelling | Een plaatje, tekening, verwijzing naar de opstelling. |
| 10.| Opmerkingen | Ruimte voor eventuele opmerkingen over dingen waar specifiek op gelet moet worden. |
| 11.| Nauwkeurigheid | Verdere ruimte voor noteren en berekenen van meetonzekerheden. |

**Uitvoering**
| no.| Onderdeel                  | Beschrijving                                  |
| -- | -------------------------- | --------------------------------------------- |
| 1. | Tabel | Noteer je waarden overzichtelijk in een gelabelde tabel. Waarden die niet veranderen moeten niet in de tabel maar er boven of er onder. Daadwerkelijke metingen zet je in een csv file die je inlaadt in Python. De ruwe data blij je van af!|
| 2. | Waarnemingen | Waarnemingen die zijn gedaan die niet direct kwantiatief te beschrijven zijn (*de gloeilamp gaf nu voor het eerst zichtbaar licht*). |
| 3. | Opmerkingen: | Verdere opmerkingen die van belang kunnen zijn bij het verzamelen van de data. |


**Verwerking**
| no.| Onderdeel                  | Beschrijving                                  |
| -- | -------------------------- | --------------------------------------------- |
| 1. | Grafieken | De grafieken die volgen uit je data verzameling en dataverwerking (de laatste beschreven in de methode beschrijving). |
| 2. | Trend | De algemene trend die je ziet in de grafiek, overeenkomst met bijv. theoretisch model. |
| 3. | Analyse | De verdere analyse van de data. |
| 4. | Berekeningen | Berekeningen van eindwaardes wanneer nodig. Eventueel verdere berekening wat betreft meetonzekerheid. |
| 5. | Opmerkingen | Verdere opmerkingen over het verwerken van de data, bijvoorbeeld het verwijderen van datapunten uit meetseries. |


**Evaluatie**
| no.| Onderdeel                  | Beschrijving                                  |
| -- | -------------------------- | --------------------------------------------- |
| 1. | Discussie | Bespreking van je resultaten wanneer dat niet past binnen de verwerking. |
| 2. | Conclusie | De eindconclusie die je trekt, de wetenschappelijke claim die je maakt en die je kunt verantwoorden met je data.|

Is dit niet gewoon een verslag? Nee. Het verschil tussen een verslag en een labjournaal is de hoeveelheid tekst die je produceert en de argumentatie die je gebruikt om het hele onderzoek te  onderbouwen. Er mist bijvoorbeeld een introductie waarin je de relevantie aangeeft, een uitgebreide onderbouwing voor de methode, een volledig, onderbouwd antwoord op de onderzoeksvraag. Het is wel zo  dat als je het logboek op zo'n manier bijhoudt, het schrijven van een verslag een stuk eenvoudiger wordt. Wat helemaal mooi zou zijn, is als de uitvoering van de proef, het noteren van je gegevens, het visualiseren en verwerken van data gelijktijdig kunt doen. Daarom gebruiken we de Jupyter Notebook als labjournaal.

## Jupyter Notebook

Er staat een algemene template voor je klaar op Brightspace, daarnaast staat er voor IE-1 ook een template voor je klaar. Een voorbeeld van een stuk uit een logboek is te zien in {numref}`Figure {number} <fig:logboek:lb>`.

Veel gebruikte functies in MarkDown kun je vinden op: [JPNB working with markdown](https://jupyter-notebook.readthedocs.io/en/stable/examples/Notebook/Working%20With%20Markdown%20Cells.html)

```{figure} Figures/Labjournaal/logboek.JPG
---
width: 80%
name: fig:logboek:lb
---
Een deel van een logboek gemaakt in JPNB
```