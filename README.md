# Trabalho-Embarcados 2021
Repositório oficial de desenvolvimento e avaliação do projeto de Sistemas Embarcados 
<br/>
<br/>
<p align="center">
Trabalho escolhido - Projeto 5 
<p/>
<br/>
Projeto: IHM para braço robotico de reabilitação
<br/>
Descrição: Interface para operação com envio de instruções de comando e recepção e apresentação de estado do equipamento
<br/>
Hadware Computacional: VIOLA + VF Toradex
<br/>
Hadware Mecatrônico: Braço robo MOREA - reabilitação de braço
<br/>
Software: Linux, C
<br/>
<br/>

Nomes do grupo: 
<br/> Arthur Amêndola Paschoal Nº Nº 10309121
<br/> Pedro Henrique Barboza Pedrini Nº 10309034
<br/> Vitor Hugo Barbosa Duchini Nº 9947934

<br/>
<br/>
Diagrama de blocos da estrutura do projeto:

![image](https://user-images.githubusercontent.com/39706145/126869657-3c066a78-35e6-4c89-bddf-cab34444d952.png)

A interface gráfica foi desenhada com o software QT

24/07 - Código para implementação da IHM, criada pela interface QT em C/C++, inserido no Github

![image](https://user-images.githubusercontent.com/39706050/126876602-470ebda6-5eef-4780-9031-f984e9746fb7.png)

29/07 - Cliente e servidor já funcionando conectado a uma interface

![Captura de tela interface](https://user-images.githubusercontent.com/39706145/127585160-d692edc2-d607-46b0-8a9a-5be835491be9.png)

*Uma possível modificação poderia ser em relação a linguagem de progrmação escolhida. Conforme discutido com grupo parceiro, implementar o protocolo TCP-IP com a interface poderia ser mais simples e possbilitar novas funcionalidades com menos complexidade

Em relação as mensagens transmitidas, foi pensado em simular a transferência e recebimento de dados no modelo CANopen. Como é possível observar na imagem abaixo, retirada do documento "Manual da Comunicação CANopen" disponibilizado pela empresa WEG, a estrutura de uma informação possui 11 bits de identificador e 6 bytes de dados.

![image](https://user-images.githubusercontent.com/39706145/127787621-6e45576a-5d16-41cd-ba84-5e216427976d.png)
<br/>
Fonte: WEG (https://static.weg.net/medias/downloadcenter/h2f/h1a/WEG-cfw11-manual-da-comunicacao-canopen-plc11-10002134020-manual-portugues-br.pdf)

A transmissão de dados numéricos através de telegramas CANopen é feita utilizando a representação hexadecimal do número, assim um exemplo de dado enviado pode ser 12345678h como na imagem acima.

Esse protocolo da WEG é a respeito do inversor de frequência CFW-11, no caso, a comunicação CANopen é para operação do cartão PLC11 que é aclopado ao CFW-11 e da possibilidade inclusive de programação em Ladder por agregar funcionalidades de um CLP. 

Um inversor de frequência pode ser interessante já que ele possibilita o controle de velocidade e torque de motores de corrente alternada variando a frequência e a tensão de entrada do motor.

Com o computador conectado à máquina do laboratório através do AnyDesk, foi possível passar os códigos do GitHub para o sistema Linux da máquina e fazer a conexão cliente-servidor entre a máquina e a Colibri VF 50

![Sistema funcionando na Colibri](https://user-images.githubusercontent.com/39706145/127898521-a1af494b-3d81-41a2-a45d-3e5f01af8e96.png)

Foi utilizado o ip 172.17.2.119 para o servidor e o 172.17.2.103 para a Colibri

