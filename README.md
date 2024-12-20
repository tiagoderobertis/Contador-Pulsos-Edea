<p align="center">
  <img src="https://img.shields.io/badge/STATUS-FINISHED-green"/>
</p>

# Contador de pulsos para Edea
*Infrarrojo Derroque* - **De Robertis Tiago y Choque Mauricio**

## Introducción
El proyecto *"Infrarrojo Derroque"* - *De Robertis y Choque* consiste en el desarrollo de un sistema que permite a los operadores de la reconocida empresa Edea contar los pulsos infrarrojos emitidos por los medidores de consumo energético de manera más eficiente. Utilizando un sensor y un programa desarrollado en Arduino/C++, este sistema ofrece una solución automatizada que facilita la recolección de datos. Esto no solo mejora la eficiencia operativa, sino que también ayuda a los operadores a realizar su trabajo con mayor rapidez y exactitud.

## Objetivos

**Objetivo general:**  
Desarrollar un sistema automatizado para el conteo de pulsos infrarrojos en los medidores de consumo energético de Edea, optimizando la recolección de datos y mejorando la eficiencia del trabajo de los operadores.

**Objetivos específicos:**  
- Implementar un software en C++ que detecte y registre los pulsos infrarrojos de los medidores.
- Diseñar un sistema de indicadores LED que facilite la visualización del conteo de pulsos.
- Reducir el tiempo necesario para el conteo manual de pulsos, permitiendo a los operadores concentrarse en tareas más estratégicas.
- Mejorar la precisión en la recolección de datos de consumo energético, lo que beneficiará la planificación y gestión energética de la empresa.
- Realizar un aporte valioso a la empresa y poner en práctica nuestros conocimientos en las prácticas profesionalizantes en Edea.

## Contexto
Edea es una empresa líder en la distribución y comercialización de energía eléctrica en la región, comprometida con ofrecer servicios de calidad y eficiencia a sus clientes. Su actividad principal incluye la medición y control del consumo energético de sus usuarios, un proceso que tradicionalmente se ha llevado a cabo de manera manual, lo que puede resultar en errores y demoras en la recolección de datos.  

La problemática que se aborda en este proyecto es la ineficiencia del conteo manual de pulsos infrarrojos, que puede ser un proceso tedioso y propenso a errores. Los operadores necesitan una solución que les permita contar los pulsos de manera rápida y precisa, mejorando así la calidad de los datos y optimizando su tiempo de trabajo. Al implementar un sistema automatizado, se busca facilitar el trabajo de los operadores.

## Metodología

**Herramientas y Tecnologías Utilizadas:**  
- **C++/Arduino**  
Para el desarrollo del sistema de conteo de pulsos infrarrojos, se utilizó un Arduino Nano como plataforma principal, que permite la integración de diferentes componentes electrónicos de manera eficiente.  

El sistema incorpora un sensor infrarrojo, que es responsable de detectar los pulsos emitidos por los medidores de consumo energético. Además, se integraron dos LEDs que sirven como indicadores visuales del conteo, y se utilizó una batería de 9V para proporcionar la energía necesaria al dispositivo.  

Para mejorar la ergonomía del sistema, se construyó un gabinete de mano en forma de control remoto, que incluye un switch de encendido y apagado, facilitando su uso por parte de los operadores.

**Desarrollo del Programa:**  
El desarrollo del software fue un proceso iterativo, donde se realizaron múltiples pruebas y refactorizaciones para optimizar el código. Inicialmente, se implementaron las funcionalidades básicas, permitiendo la detección y conteo de pulsos. A medida que avanzaba el desarrollo, se identificaron áreas de mejora en la estructura y eficiencia del código, lo que llevó a una serie de refactorizaciones.  

El objetivo fue llegar a un código limpio, fácil de entender y mantener, que garantizara un funcionamiento rápido y funcional del sistema.

**Implementación del Sistema de Conteo y Control de LEDs:**  
La implementación del sistema de conteo se realizó detectando cada pulso infrarrojo de manera precisa. Cada 10 pulsos, el primer LED se activa como indicativo, y al llegar a 30 pulsos, ambos LEDs se iluminan simultáneamente.  

Este sistema de indicadores visuales proporciona a los operadores una manera clara y rápida de verificar el conteo en tiempo real, mejorando así la eficiencia del proceso de medición.  

El diseño del gabinete y la disposición de los componentes fueron cuidadosamente planificados para asegurar que el dispositivo fuera fácil de usar en entornos de trabajo.

<h2>Fotos del desarrollo</h2>

<p align="center">
  <img src="https://github.com/user-attachments/assets/9c3a15dc-e47c-42da-86cf-3180820afc34" width="300"/>
  <img src="https://github.com/user-attachments/assets/7c8fd62b-3768-47a2-9433-9341988eefbc" width="300"/> </br>
  <img src="https://github.com/user-attachments/assets/36d8927e-31b2-4784-b720-f8bce09aa9a1" width="300"/>
  <img src="https://github.com/user-attachments/assets/9e611c27-76c9-423f-906c-2884374a09c1" width="560"/>
 
</p>


<h2>Agradecimientos</h2>
Agradecemos enormemente a los trabajadores de Edea del sector laboratorio de mediciones por darnos la oportunidad y la responsabilidad de encargarnos de este proyecto, ayudando también a reforzar este período de practicas profesionalizantes, las cuales nos sirven para recibirnos como técnicos de la Escuela Secundaria Técnica N°3 de Mar del Plata.


<h2>Contacto</h2>
Por cualquier duda o consulta, no dude en escribir a:
tiagoderobertis@gmail.com
choquemauricio124@gmail.com

