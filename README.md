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


<h1 align="center">
    <img width="45" src="https://img.icons8.com/pulsar-line/48/upside-down-icon.png" alt="upside-down-icon"/>
    <span> Dynamic Allocation (PT/BR) </span>
</h1>

<p>Dynamic allocation refers to the process of reserving and releasing memory during the execution of a computer program. In systems that support dynamic memory allocation, programmers can request the amount of memory needed to store data at runtime, instead of defining this memory allocation during compilation.</p>

<h2>Main Methods of Dynamic Memory Allocation:🫧</h2>
<ul>
  <li><strong>Dynamic Memory Allocation on Heap:</strong> It is allocated during program execution and is explicitly deallocated by the programmer. In languages like C and C++, functions like malloc, calloc, and realloc are used to dynamically allocate memory, and the free function is used to release this memory when it is no longer needed.
  <br>Dynamic memory allocation on the heap allows flexibility in memory usage, especially for variable-sized data structures or when the exact size needed is not known in advance.</li>
  
  <li><strong>Dynamic Memory Allocation in High-Level Languages:</strong> High-level programming languages like Python, Java, and C# have internal mechanisms to handle memory allocation and deallocation transparently for the programmer.
  <br>In these languages, objects and resources are allocated automatically when needed and released when they are no longer in use, typically through garbage collection.
  <br>While the details of dynamic allocation are managed by the execution environment, it is important to understand the underlying concepts to avoid memory leaks or excessive resource usage.
  <br>Dynamic memory allocation is essential for creating efficient and flexible programs, especially in situations where the required amount of memory may vary during program execution. However, it is important to carefully manage memory allocation and deallocation to avoid issues such as memory leaks or memory fragmentation.</li>
</ul>

<h2>Project Overview:🫧</h2>

<p>For this activity, we developed a C system to register customers in a store. The project structure would be:</p>

<h3><strong>Customers</strong></h3>
<ul>
  <li>Add Customer:
    <ul>
      <li>Code</li>
      <li>Name</li>
      <li>CPF</li>
      <li>Date of Birth</li>
      <li>Address</li>
      <li>Phone</li>
    </ul>
  </li>
  
  <li>
    Edit Customer:
    <ul>
      <li>Can edit all initial registration data</li>
      <li>Search customer by code</li>
      <li>List all customers</li>
      <li>Delete Customer</li>
      <li>Back to main menu</li>
    </ul>
  </li>
</ul>

<h3><strong>Orders</strong></h3>
<ul>
  <li>Add Order:
    <ul>
      <li>Name</li>
      <li>Order Number</li>
      <li>Quantity</li>
      <li>Value</li>
    </ul>
  </li>
  
  <li>
    Edit Order:
    <ul>
      <li>Can edit all initial registration data</li>
    </ul>
  </li>
  
  <li>Delete Order</li>
  <li>Back to main menu</li>
</ul>

<h3><strong>Data</strong></h3>
<ul>
  <li>Top customer by purchases</li>
  <li>Expenses made in the month</li>
  <li>Reset: Month end</li>
  <li>Back to main menu</li>
</ul>

<h3><strong>Exit</strong></h3>
<p>The program is in progress, so some implementations are causing conflicts or not working correctly.</p>

