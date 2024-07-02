# LaTeX

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 100%; height: 0; padding-bottom: 75%;">
    <iframe
      src="https://www.youtube.com/embed/viLuhT2wNKk"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>

<div style="display: flex; justify-content: center;">
  <div style="width:80%; margin:0 auto;">
    <iframe
      src="https://www.youtube.com/embed/viLuhT2wNKk"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>




<iframe width="1128" height="635" src="https://www.youtube.com/embed/7ODISZK6fMA" title="intro tot tn1405" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>


## Over LaTeX
LaTeX is een tekstverwerker, net als Microsoft Word. LaTeX brengt echter een aantal voordelen met zich mee die het ontzettend geschikt maakt om te gebruiken voor artikelen en verslagen.

In dit hoofdstuk leer je dan ook stap voor stap wat je nodig hebt om je eerste verslag in LaTeX te schrijven. Voor het schrijven zal gebruik worden gemaakt van [Overleaf](https://overleaf.com/), een online LaTeX editor. Houd wel in gedachte dat er meerdere alternatieven zijn voor Overleaf, zowel online als offline. Een voorbeeld van een goed alternatief voor de offline editor is TexStudio. En geavanceerder: je kunt Overleaf en Git aan [elkaar koppelen](https://www.overleaf.com/learn/how-to/Git_integration) en vervolgens werken in [VisualStudioCode](https://code.visualstudio.com/)...

```{tip}
Net als met Python geldt dat je het internet kunt raadplegen als je iets niet weet. Begin hierbij op Google, door bijvoorbeeld te zoeken naar "LaTeX" $+$ *datgene wat je wilt doen* (in het Engels). StackExchange komt vaak als een van de eerste resultaten. Dit is altijd een goede bron van informatie, waar vaak antwoorden staan op vragen waar jij ook mee zit. Ook ChatGPT kan goed helpen met LaTeX.
```

```{admonition} Opdracht: Overleaf account
:class: dropdown
Maak een account aan bij [Overleaf](https://overleaf.com/) . Dit kan met je NetID. Klik hiervoor op "Log in through your institution". Hiermee krijg je ook een gratis premium account.
```

## Opstarten van LaTeX
In deze Opdracht: zul je gebruik maken van een template van het practicum, zodat je niet zelf aan de opmaak hoeft te sleutelen. Voer de volgende Opdracht: uit om het practicum template verslag in Overleaf te laden.

```{admonition} Opdracht: Je eerste project
:class: dropdown
Download eerst het template verslag van IE-1 van Brightspace (de .zip file). Klik in Overleaf op new project en selecteer vervolgens upload project om het verslag wat je in van Brightspace hebt gehaald in Overleaf te zetten (zonder het .zip bestand uit te pakken). Je hebt nu je eerste LaTeX project geopend!
```

Een document schrijven in LaTeX is eigenlijk een beetje als programmeren. Je vertelt de computer wat hij moet doen met behulp van code, die vervolgens wordt *gecompileerd* tot een pdf.

## De preamble

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
    <iframe
      src="https://www.youtube.com/embed/WhKWGs7vQDw"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>



Een LaTeX document begint altijd met een preamble. In de preamble laad je packages in (net als Python), maak je de opmaak en begin je het document. In de preamble mag dus nog geen inhoudelijke tekst van je document. In het template verslag is er al een opmaak gemaakt en zijn er alvast een aantal packages ingeladen. Wil je later toch een andere opmaak? Om hiermee te beginnen zijn er online (bijvoorbeeld op Overleaf zelf) een hele hoop templates te vinden die je net als dit template kunt inladen in Overleaf.

Verder is het goed om te weten dat wanneer een regel voorafgaat met '%', de regel overgeslagen wordt door de compiler. Dit werkt hetzelfde als '#' in Python. Tenslotte, wanneer je iets hebt aangepast, kun je op de 'Recompile' knop klikken om en nieuw voorbeeld van je verslag te compileren.


```{admonition} Opdracht: Preamble
:class: dropdown
Voer de volgende Opdracht:en uit zodat je begrijpt wat de preamble precies doet:

1.  Zoek het command `\begin{document}` op in `main.tex` en verwijder deze tijdelijk. Doe hetzelfde voor `\end{document}`. Wat gebeurt er  als je het bestand opnieuw compileert?

2.  Zoek de plaats waar de packages ingeladen worden met het commando `\usepackage{}`. Waar zijn `graphicx` en `natbib` voor?

3.  Pas alles op het titelblad aan zodat de informatie voor jou klopt. Kijk hiervoor in de main.tex file en de title.tex file.
```

## Inhoud

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
    <iframe
      src="https://www.youtube.com/embed/ObuHb-SLB-8"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>


Nu de layout is gemaakt, kun je aan de slag met de inhoud. Het is belangrijk om een goede structuur in je document te hebben. Hiermee blijft je verslag overzichtelijk. In het template verslag is deze structuur gemaakt door middel van `\chapter` en `\section`. Hiermee creëer je hoofdstukken en secties.

```{admonition}  Opdracht: Toevoegen van een section
:class: dropdown
Splits het hoofdstuk resultaten en discussie in twee secties. Gebruik hiervoor het command `\section{}`. Wat gebeurt er als je `\section*{}` gebruikt?
```

Je kunt eenvoudig verwijzen naar de hoofdstukken en secties door ze te labelen. Dit doe je door het commando `\label{<<NAAM>>}` toe te voegen achter het commando voor je hoofdstuk of sectie. Vervolgens kun je in de tekst hiernaar verwijzen met het commando `\ref{<<NAAM>>}`.

```{admonition}  Opdracht: Toevoegen van verwijzing
:class: dropdown
Verwijs in je resultaten terug naar het hoofdstuk experimentele methode.
```

Om verder overzicht te houden is het handig om verschillende hoofdstukken in verschillende .tex bestanden te schrijven. Gebruik `\input` om deze hoofdstukken vervolgens in je hoofdbestand main.tex te zetten.

```{admonition}  Opdracht:
:class: dropdown
Maak een nieuw .tex bestand aan en noem deze 'Discussie'. Begin in dit bestand een nieuwe chapter met de naam conclusie. Voeg deze tenslotte toe aan je main.tex door gebruik te maken van het `\input{}` command.
```

```{tip}
Als je een nieuw .tex bestand maakt voor een nieuw hoofdstuk, zorg dan dat de naam geen spaties bevat. Dit kan errors in LaTeX opleveren.
```

## Formules

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
    <iframe
      src="https://www.youtube.com/embed/-XP2c4imluA"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>

Een van de grote voordelen van het gebruiken van LaTeX zijn formules. Formules komen in twee vormen: (1) Inline, door gebruik te maken van de enkele dollar tekens: `$y=4x$` of met `\(y=4x\)`. (2) Op een nieuwe regel door gebruik te maken van de environment equation: `\begin{equation}` & `\end{equation}`.

```{admonition} Opdracht: Maken van een formule
:class: dropdown
Neem een kijkje op [deze site](https://en.wikibooks.org/wiki/LaTeX/Mathematics). Zet de volgende formule als oefening in LaTeX. Het is hiervoor nodig dat je het package `amsmath` toevoegt aan de preamble. $f^{(n)}(a) = \frac{n!}{2\pi i}\oint_C \frac{f(z)}{(z-a)^{n+1}}\dd{z}$
```

```{tip}
Als je iets tussen haakjes wilt zetten gebruikt dan `\left ( ... \right )` om de grootte van de haakjes aan te laten passen aan de inhoud.

Bijvoorbeeld: 
$\begin{aligned}
    \text{zonder:} \hspace{1em}(\frac{1}{x})^2 && \text{met:} \hspace{1em} \left (\frac{1}{x}\right )^2
\end{aligned}$
```

Mocht je er niet direct uitkomen, dan kunnen de volgende sites wellicht helpen.
* https://www.codecogs.com/latex/eqneditor.php
* http://detexify.kirelabs.org
* https://mathpix.com/


```{admonition}  Opdracht: Formule maken
:class: dropdown
Maak de formule voor het doorrekenen van onzekerheden in je experiment in de volgende vorm en zet deze in je resultaten sectie: $$u(Z) = \sqrt{\left(\frac{\partial Z}{\partial A}\right)^2 u(A)^2 + \left(\frac{\partial Z}{\partial B}\right)^2 u(B)^2 + ...}$$ Probeer zowel de inline equation als de equation environment uit. Wat past hier het beste?
```

Wanneer je de equation environment gebruikt, kun je vergelijkingen net als secties labelen om er daarna naar te kunnen verwijzen. Het label plaats je in dit geval binnen de equation environment.

```{admonition}  Opdracht: Toevoegen van label
:class: dropdown
Voeg een label toe aan de formule voor het doorrekenen van onzekerheden en verwijs er naar terug.
```

```{tip}
Om het overzichtelijk te houden kun je de verschillende soorten labels laten voorgaan met prefixes. Bijvoorbeeld sec voor secties, eq voor equations, fig voor figuren en tab voor tabellen. Dit doe je door `\label{fig:<<xxx>>}`. Geef ook een naam die het duidelijk maakt voor jezelf waar je naar terug verwijst.
```

````{admonition} Voorbeeld
:class: dropdown, tip
Eerder zagen we dat we formules kunnen gebruiken in LaTeX. $\label{voorbeeld:fig:tudelft_logo}     A = b \cdot C \times D + E_{subscript} - F^{superscript} + \int_{0}^{1} x dx + \frac{\partial G}{\partial H} / \cos{I}$

Hieronder is de code weergeven die gebruikt is om het bovenstaande stuk tekst te krijgen.
```LaTeX
\begin{equation}\label{voorbeeld:fig:tudelft_logo}
  A = b \cdot C \cross D + E_{subscript} - F^{superscript} + \int_{0}^{1} x dx + \frac{\partial G}{\partial H} / \cos{I}
\end{equation}
```
````

## Tabellen

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
    <iframe
      src="https://www.youtube.com/embed/4Pcpdc1qwCI"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>


Tabellen zijn een van de dingen die wat lastiger zijn in LaTeX dan in bijvoorbeeld Word. De makkelijkste manier om een tabel te maken is de tabel te maken in Excel en deze te importeren met een online tool. Een voorbeeld van zo'n tool is: [table generator](http://www.tablesgenerator.com/latex_tables).

```{admonition}  Opdracht: Tabel maken
:class: dropdown
Zet je resultaten van het practicum in een tabel in de resultaten sectie. Vergeet je tabel geen label en een bovenschrift te geven!
```

````{admonition} Voorbeeld
:class: dropdown, tip
Het volgende stuk code

```LaTeX
\begin{table}[H]
  \centering
    \caption{Voorbeeld tabel}
    \begin{tabular}{|l||c r|}\hline
       $L \pm 0.2$ (cm) & $f_\textrm{blaas} \pm 3 $ (Hz) &
       $f_\textrm{comp} \pm 3$ (Hz) \\ \hline \hline
      39.5       & 211    & 214    \\ \hline
      36.5       & 229    & 231    \\ \hline
      33.5       & 250    & 252    \\ \hline
      30.5       & 275    & 277    \\ \hline
    \end{tabular}
    \label{latex_voorbeel_tabel}
\end{table}
```
geeft de tabel:
  ```{figure} Figures/LaTeX/Table.PNG
  ---
  width: 60%
  name: fig:LaTeX:Table
  ---
  ```

Hier is gebruik gemaakt van `|l||c r|` om de bepalen of een kolom, links, midden of rechts begint, de `|` wordt gebruikt om aan te geven waar een scheidingslijn komt. Het teken & wordt gebruikt om aan te geven wat het volgende element in een rij is en het commando `hline` wordt gebruikt om de horizontale lijnen te krijgen.
````

## Afbeeldingen

<div style="display: flex; justify-content: center;">
  <div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
    <iframe
      src="https://www.youtube.com/embed/rP8g3DIjVx8"
      style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;"
      frameborder="0"
      allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
      allowfullscreen
    ></iframe>
  </div>
</div>



In LaTeX kun je afbeeldingen toevoegen door gebruik te maken van het `figure` environment. Wanneer je dit environment gebruikt, voegt Overleaf automatisch de commando's toe waarmee je de afbeelding kunt inladen. De afbeelding zelf laad je in met het commando `\includegraphics`.

Om de grootte van de figuur te regelen, kun je de volgende optie aan je figuur toevoegen: `[width=0.75\textwidth]`. Met dit commando wordt de breedte van je figuur aangepast naar een fractie van de tekst breedte.


```{admonition}  Opdracht:
:class: dropdown
Voer de volgende Opdracht:en uit:

1.  Voeg de grafieken van de metingen tijdens het practicum toe als figuren in de resultaten sectie.

2.  Geef de figuren onderschriften.

3.  Refereer naar je figuur met `\(auto)ref{label}`.

4.  Varieer de grootte van je figuur en kijk wat het beste past.

Voor een extra uitdaging: Zet twee van je grafieken naast elkaar door gebruik te maken van `\subfigure{}`. Zorg ervoor dat beide afbeeldingen een eigen onderschrift hebben. Ook moet je totale figuur een onderschrift hebben.
```

> **Voorbeeld Afbeeldingen**\
> Om een figuur in te voegen kun je de volgende code gebruiken:
```LaTeX
  \begin{figure}
    \centering
        \includegraphics[width=0.5\linewidth]{Figures/logo.jpg}
        \caption{Het TU Delft logo}
        \label{voorbeeld:fig:tudelft_logo}
  \end{figure}
```
  
> Deze code geeft vervolgens als output:

```{figure} Figures/LaTeX/TUDlogo.PNG
---
width: 60%
name: fig:LaTeX:TUDlogo
---
```


```{tip}
Figuren worden het mooiste als je ze opslaat als .eps bestand. Omdat je plots dan worden opgeslagen als vector, blijft de resolutie behouden als je de grootte aanpast. Hiervoor moet je wel de package `epstopdf` laden.
```

## Plaats van tabellen en afbeeldingen

Zoals je misschien is opgevallen, komen de figuren en tabellen soms niet op de plaats terecht waar je ze bedoeld hebt. Het plaatsen van de figuren en tabellen, ook wel floats genoemd, gebeurt automatisch in LaTeX. De floats worden op de plaats gezet waar ze het beste passen in je document, zodat er zo min mogelijk witruimte ontstaat. Soms kan het handig zijn om echter zelf te bepalen waar de float terecht komt. Om dit te doen kun je zogenoemde placement specifiers gebruiken die je als optie toevoegt aan je environment:

        \begin{figure}[specifier]


```{admonition}  Opdracht:
:class: dropdown
Probeer de verschillende placement specifiers 'h', 't', 'b' en 'H' uit. Voor placement specifier 'H' heb je het package `\usepackage{float}` nodig.
```

## Samenvatting

Als je de documentclass report gebruikt: (dit kun je zien bij `\``documentclass{}` in de preamble) heeft een speciale environment voor de samenvatting. Deze ku je, net als de andere environments beginnen met het commando `\begin{environment}` en `\end{environment}`. Waarbij je in dit geval abstract gebruikt als environment. In het template is de samenvatting al gemaakt.

```{admonition}  Opdracht:
:class: dropdown
Schrijf een samenvatting over je afgelopen experiment op de goede plaats in het template verslag.
```

## Inhoudsopgave

Het maken van een inhoudsopgave gaat heel gemakkelijk in LaTeX. Wanneer je de commando's `\chapter`, `\section` en `\subsection` gebruikt, worden deze automatisch toegevoegd. Ook de paginanummers en namen van de kopjes worden automatisch geüpdate al je ze besluit te  veranderen. Om LaTeX de inhoudsopgave zelf te laten maken, gebruik je het commando `\tableofcontents`.

```{admonition}  Opdracht:
:class: dropdown
Zoek waar de inhoudsopgave gemaakt wordt in het LaTeX template. Verander vervolgens tijdelijk de naam van je kopjes en kijk wat er gebeurt in de inhoudsopgave.
```
## Referenties

[](https://youtu.be/0W8N_mNpVMk)Om een referentielijst te maken, gebruik je het package `natbib`. Dit package kun je gebruiken door `\usepackage{natbib}` toe te voegen aan je preamble. In het template is dit al voor je gedaan. De referenties zelf voeg je toe aan de bibliography file `bibliography.bib`. In het template staan een paar voorbeelden van hoe je een referentie in de bibliography file zet.

Om je bibliografie te laten werken moet je LaTeX vertellen hoe deze moet worden gestructureerd. Dit doe je moet het commando `\bibliographystyle{<<xxx>>}`. In de template is gekozen voor de stijl `unsrt`.

```{admonition}  Opdracht:
:class: dropdown
Refereer naar een bron in je verslag door eerst een referentie toe te voegen in de .bib file. Verwijs vervolgens naar deze bron met het commando `\cite{label}`. Kun je de referentie in je bestand vinden?
```

```{admonition}  Opdracht:
:class: dropdown
Zoek online welke stijlen er behalve unsrt nog meer zijn en verander de de stijl van je bibliografie tijdelijk.
```

Als je wilt verwijzen naar een bepaalde site, dan heb je het package `\usepackage{url}` nodig. De referentie in de .bib file ziet er als volgt uit:
```LaTeX
@misc{andor2016,
  author       = {Andor Technologies ltd},
  title        = {Zyla 5.5 sCMOS},
  howpublished = {\url{http://www.andor.com/scientific-cameras/neo-and-zyla-scmos-cameras/zyla-55-scmos}},
  note         = {retrieved June 9 2016},
  }
```

```{admonition}  Opdracht:
:class: dropdown
Voeg voor je verslag een referentie toe naar een site die je hebt gebruikt als bron.
```

## Verslag

```{admonition}  Opdracht:
:class: dropdown
Maak de rest van je verslag af in LaTeX.
```

## Extra: Tips

* Nieuwe pagina: `\newpage` or `\clearpage`
* Forceer een enter: `\\`
* Kijk een keer naar het commando `\autoref`
* Een handige tool voor het schrijven van vergelijkingen: [Mathpix](https://mathpix.com/)

Tot slot: Als je een error krijgt bij het compileren, zoek dan op internet naar je fout. Je bent vast niet de eerste (en de laatste) die met dat probleem zit.



