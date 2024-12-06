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

## Voorbereiding
1. Installeer de gratis <a href="www.arduino.cc" target="_blank">Arduino</a> software op je laptop, kies of [vrije val](./freefall/freefall.ino) of de [slinger](./pendulum/pendulum.ino) en download de bijbehorende code (zie link).
2. Download het bijbehorende labjournaal. Doe voor je gekozen experimenten een testrun waarbij je gebruikt maakt van de stopwatch op je telefoon.
3. Voer de slingerproef uit met een slingerlengte van 1,0 m, of de valproef met een valhoogte van 1,0m. Meet vijfmaal.
4. Bepaal de gemiddelde periode/valtijd, de standaarddeviatie en de meetonzekerheid voor de periode/valtijd die volgt uit dit experiment.
5. Doe de vorige twee opdrachten nogmaals maar nu voor 10 periodes/valtijden.
6. Hoe reduceert de meetonzekerheid door 10 periodes/valtijd te bepalen?
7. Is de verkregen meetonzekerheid in de tijd voldoende om $g$ te bepalen met een foutenmarge van 0.5\%?
8. Maak nu gebruik van de opstelling om de een gevoel te krijgen voor de spreiding in de metingen. Vergelijk de bepaalde waarden met jouw eerder gevonden waarden. Zie [hier](sec:Arduino) voor meer info over de Arduino.

9. De theorie is te kort door de bocht en dient verder uitgewerkt te worden. Identificeer wat er ontbreekt en wat daaraan toegevoegd moet worden.
10. Maak een meetplan voor een van de twee experimenten, gebruik daarvoor het labjournaal. Onderbouw elke keuze die je maakt, beschrijf de aannames die je doet en valideer deze waar nodig. Voer extra testen uit indien nodig.
11. Laat je meetplan controleren door de assistent.
12. Maak de bijbehorende verwerking voor Python. Bedenk goed hoe je je data gaat analyseren.

### Uitvoering
14. Voer het bedachte en goedgekeurde meetplan uit.

### Verwerking
15. Verwerk je gegevens volgens het vooropgezette plan. Voer een strijdigheidsanalyse uit.

(sec:Arduino)=
### Iets over Arduino
De Arduino wordt gebruikt om de sensoren uit te lezen, en de tijd tussen twee metingen te sturen naar de computer. Om contact te maken met de Arduino moet je het bestand uploaden naar de Arduino, kiest eerst via het menu tools / port de USB-poort waar de Arduino zit, zie {numref}`Figuur {number} <fig_COM>`.

```{figure} Figures/G/COM.gif
---
width: 75%
name: fig_COM
---
De stappen om de juiste COM-poort te kiezen.
```

Klik vervolgens {fa}`long-right` om de code naar de Arduino te sturen. Via de seriële monitor ![Figures/G/serial.PNG] kun je de gemeten tijden verkrijgen. 

```{warning}
Let op! De BAUD rate staat op 9600, die moet ook op 9600 staan in de seriele monitor.
```

We breken hieronder de code op in delen om duidelijk te maken hoe deze werkt.

In de programmeertaal C++ moet je aangeven van welk type je variabelen zijn. We maken dan voor het eigenlijke programma de variabelen aan. In de `setup()` geven we aan welk van die variabelen pinnen zijn op de Arduino. Met `Serial.begin` geven we aan dat we met de Arduino willen "praten".

```{code} C
int value = 0;
unsigned long time1;                       //start time
unsigned long time2;                       //end time
int i = 0;                        //counter
int last;                         //

int detectiepin2 = 8;
int poweroutput1 = 7;
//int poweroutput2 = 6;
int detectiepin1 = 2; 

void setup() {
  pinMode(poweroutput1, OUTPUT);
  digitalWrite(poweroutput1,HIGH);

//  pinMode(poweroutput2, OUTPUT);
//  digitalWrite(poweroutput2,HIGH);
  
  pinMode(detectiepin1,INPUT);               //pin 8 is used for the detection
  digitalWrite(detectiepin1,HIGH);           //an internal resistor is used

  pinMode(detectiepin2,INPUT);               //pin 8 is used for the detection
  digitalWrite(detectiepin2,HIGH);           //an internal resistor is used
  
  Serial.begin(9600);             //talking with the arduino using the serial monitor
}

```

In de onderstaande code vertellen we dat de Arduino niets hoeft te doen totdat de eerste detectiepin wordt getriggerd. Als dat zo is, wordt de tijd `time1` geregistreerd. Daarna wordt er gekeken naar de tweede detectiepin, als die wordt getriggerd wordt de tijd `time2` geregistreerd en het tijdsinterval teruggegeven `Serial.println(time2-time1);`. 

```{code} C
void loop() {
  while(digitalRead(detectiepin2) == 1){}
    //Serial.println("check");
    time1 = micros();
  while(digitalRead(detectiepin1) == 1){}
    time2 = micros();
    //Serial.println("check2");
    

  Serial.println(time2-time1);
  delay(50);
}
```