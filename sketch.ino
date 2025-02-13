#include <avr/io.h>
#include <util/delay.h>


void ADC_init()
{
  //zasilanie
  ADMUX |= (1<<REFS0);
  ADMUX &= ~(1<<REFS1);

  //division factor
  ADCSRA |= (1<<ADPS0);
  ADCSRA |= (1<<ADPS1);
  ADCSRA |= (1<<ADPS2);

  //kanał
  ADMUX &= ~(1<<MUX0);
  ADMUX &= ~(1<<MUX1);
  ADMUX &= ~(1<<MUX2);
  ADMUX &= ~(1<<MUX3);
  
  //włączenie ADC
  ADCSRA |= (1<<ADEN);
  
}

int channelA0()
{
   ADCSRA |= (1<<ADSC);

  while(ADCSRA & (1<<ADSC))
  {}

  //zwracanie zmierzonego napięcia
  return ADC;
}

int channelA3()
{
  //kanał
  ADMUX |= (1<<MUX0);
  ADMUX |= (1<<MUX1);
  ADMUX &= ~(1<<MUX2);
  ADMUX &= ~(1<<MUX3);

   ADCSRA |= (1<<ADSC);

  while(ADCSRA & (1<<ADSC))
  {}

  //zwracanie zmierzonego napięcia
  return ADC;
}

int main()
{
  ADC_init();

  DDRD |= (1<<PD2);
  DDRD |= (1<<PD3);
  DDRD |= (1<<PD4);

  PORTD &= ~(1<<PD2);
  PORTD &= ~(1<<PD3);
  PORTD &= ~(1<<PD4);

  int resultA0 = 0;
  float napiecieA0 = 0.0;
  
   int resultA3 = 0;
  float napiecieA3 = 0.0;
  


  while(1)
  {
    
    resultA0 = channelA0();
    napiecieA0 = resultA0*5.0/1023.0;
    
    resultA3 = channelA3();
    napiecieA3 = resultA3*5.0/1023.0;


    if(napiecieA0 > 2.5)
    {
      PORTD |= (1<<PD2);
    }
    else
    {
      PORTD &= ~(1<<PD2);
    }
    if(napiecieA3 > 3.5)
    {
      PORTD |= (1<<PD3);
    }
    else
    {
      PORTD &= ~(1<<PD3);
    }
    /*
    if(napiecie > 4.75)
    {
      PORTD |= (1<<PD4);
    }
    else
    {
      PORTD &= ~(1<<PD4);
    }*/

  }
  return 0;
}