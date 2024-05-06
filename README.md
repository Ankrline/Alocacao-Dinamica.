 <h1 align="center">
    <img width="45" src="https://img.icons8.com/pulsar-line/48/upside-down-icon.png" alt="upside-down-icon"/>
    <span> Alocação Dinamica. (PT/BR) </span>
</h1>

<p>A alocação dinâmica se refere ao processo de reservar e liberar memória durante a execução de um programa de computador. Em sistemas que suportam alocação dinâmica de memória, os programadores podem solicitar a quantidade de memória necessária para armazenar dados em tempo de execução, em vez de definir essa alocação de memória durante a compilação.</p>

<h2>Existem dois principais métodos de alocação dinâmica de memória:🫧</h2>
<ul>
  <li><strong>Alocação Dinâmica de Memória Heap:</strong> É alocada durante a execução do programa e é desalocada explicitamente pelo programador. Em linguagens como C e C++, as funções malloc, calloc e realloc são usadas para alocar memória dinamicamente, e a função free é usada para liberar essa memória quando não é mais necessária.
<br> A alocação de memória dinâmica na heap permite flexibilidade no uso da memória, especialmente para estruturas de dados de tamanho variável ou quando não se sabe antecipadamente o tamanho exato necessário.</li>
<br>
<li><strong>Alocação Dinâmica de Memória em Linguagens de Alto Nível:</strong> Linguagens de programação de alto nível, como Python, Java e C#, possuem mecanismos internos para lidar com a alocação e desalocação de memória de forma transparente para o programador.
Nessas linguagens, objetos e recursos são alocados automaticamente quando são necessários e liberados quando não são mais utilizados, geralmente por meio de coleta de lixo (garbage collection).
<br>Embora os detalhes da alocação dinâmica sejam gerenciados pelo ambiente de execução, é importante entender os conceitos subjacentes para evitar vazamentos de memória ou uso excessivo de recursos.
<br>A alocação dinâmica de memória é essencial para a criação de programas eficientes e flexíveis, especialmente em situações em que a quantidade de memória necessária pode variar durante a execução do programa. No entanto, é importante gerenciar cuidadosamente a alocação e a liberação de memória para evitar problemas como vazamento de memória (memory leaks) ou fragmentação de memória.</li>
</ul>

<h2>Projeto:🫧</h2>

<p>Para a realização desta atividade, realizamos um sistema em C para cadastrar clientes de uma loja, a estrutura do projeto seria:</p>
<h3><strong>Clientes</strong></h3>
<ul>
  <li>Cadastrar Cliente:
    <ul>
	<li> Codigo </li>
	<li> Nome </li>
	<li> CPF </li>
	<li> Data de Nascimento </li>
	<li> Endereço </li>
	<li> Telefone </li>
    </ul></li>
  <li>
   Alterar Cliente:
    <ul>
	<li> Poderá alterar todos os dados iniciais de Cadastro</li>
	<li> Pesquisar cliente por codigo </li>
	<li> Listar todos os clientes </li>
	<li> Listar todos os clientes </li>
	<li> Excluir Cliente </li>
	<li> Voltar ao menu principal </li>
    </ul></li>
	
<h3><strong>Pedidos</strong></h3>	
<li>
   Cadastrar Pedido:
    <ul>
	<li> Nome</li>
	<li> Número do Pedido </li>
	<li> Quantidade </li>
	<li> Valor </li> 
    </ul></li>
    <li>
   Alterar Pedido:
    <ul>
	<li> Poderá alterar todos os dados iniciais de Cadastro.</li>
    </ul></li>
     <li>Excluir Pedido</li>
     <li>Voltar ao menu principal </li>

<h3><strong>Dados</strong></h3>
	<li>Melhor cliente comprador </li>
	<li>Gastos realizados no mês </li>
	<li>Zerar: Virada de mês </li>
	<li>Voltar ao menu principal </li>

<h3><strong>Sair</strong></h3>
<p>O programa está em processo sendo assim algumas implementações estão gerando conflitos ou não funcionando corretamente.</p>
