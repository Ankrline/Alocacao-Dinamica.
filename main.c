#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 200

struct pedido
{
	char namePed[200];
	char CPF[200];
    char numPed[200];
    char qtdPed[200];
    char valorped[200];
    int cod;
    
}logP[200];

struct cadastro
{
    char CPF[200];
    char Nascimento[200];
    char telefone[200];
    char nome[200];
    char endereco[200];
    char data[200];
    int vazio, cod;
    struct pedido clientePed;
    float totalCompras;

}log[200];


// AQUI DECLARO AS FUNÇÕES A SEREM USADAS
int verifica_pos();
int verifica_cod(int cod);
int opt;
void cadastroP(int cod,int pos);
void list();
void consultaCod (void);
void alteraCliente();
void excluirCliente (void);
void cadastroPedido();
void alteraPedido();
void excluirPedido();
void listaMelhorComprador();
void zerarPedidos();
void gastosTotal();

//INICIO DO MENU
int main(void){ 

    int i,Opcao,OpcaoCliente,posicao,retorno;
    int codaux;
    do
    {
        printf("1 - Clientes\n");
        printf("2 - Pedidos\n");
        printf("3 - Dados\n");
        printf("4 - Sair\n");
        printf(" Selecione uma opcao por favor: ");
        scanf("%d", &Opcao);
        getchar();
        if (Opcao == 1)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 1 - Clientes\n\n");
            printf("1 - Cadastrar Cliente\n");
            printf("2 - Alterar Cliente\n");
            printf("3 - Pesquisar cliente por codigo\n");
            printf("4 - Listar todos os clientes\n");
            printf("5 - Excluir Cliente\n");
            printf("6 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);
            getchar();
            	if(OpcaoCliente == 1){
                    printf("Voce selecionou a opcao 1 - Cadastrar Novo Cliente\n");
            posicao=verifica_pos();

                if ( posicao != -1 )
                {

                    printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");
                    scanf("%d",&codaux);fflush(stdin);

                    retorno = verifica_cod( codaux );

                    if ( retorno == 1 )
                        cadastroP( codaux, posicao );
                    else{
                        printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");
                        getchar();
                        system("cls");
                        main();
                    }

                }
                else
                    printf("\nNao e possivel realizar mais cadastros!\n");

                break;
                }
                else if(OpcaoCliente == 2){ 
                printf("Voce selecionou a opcao 2 - Alterar Cliente\n");
                	alteraCliente();
                }
                else if(OpcaoCliente == 3){
                    consultaCod();
                }
                else if(OpcaoCliente == 4){
                    list();
                }
                else if(OpcaoCliente == 5){ 
                printf("Voce selecionou a opcao 5 - Excluir Cliente\n");
            	excluirCliente();
                }
                else if(OpcaoCliente == 6){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =!6 || OpcaoCliente > 6 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }
        else if (Opcao == 2)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 2 - Pedidos\n\n");
            printf("1 - Cadastrar Pedido\n");
            printf("2 - Alterar Pedido\n");
            printf("3 - Excluir Pedido\n");
            printf("4 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);
            getchar();
            	if(OpcaoCliente == 1){
                    printf("Voce selecionou a opcao 1 - Cadastrar Pedido\n");
                    cadastroPedido();
                }
                else if(OpcaoCliente == 2){ 
                printf("Voce selecionou a opcao 2 - Alterar Pedido\n");
                alteraPedido();
                }
                else if(OpcaoCliente == 3){ 
                printf("Voce selecionou a opcao 3 - Excluir Pedido\n");
                excluirPedido();
                }
                else if(OpcaoCliente == 4){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =!4 || OpcaoCliente > 4 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }
        else if (Opcao == 3)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 3 - Dados\n\n");
            printf("1 - Melhor cliente comprador\n");
            printf("2 - Gastos realizados no mês\n");
            printf("3 - Zerar: Virada de mês\n");
            printf("4 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);
            getchar();
            	if(OpcaoCliente == 1){
                    printf("Voce selecionou a opcao 1 - Melhor cliente comprador\n");
                    listaMelhorComprador();
                }
                else if(OpcaoCliente == 2){ 
                printf("Voce selecionou a opcao 2 - Gastos realizados no mês\n");
                //gastosTotal();
                }
                else if(OpcaoCliente == 3){ 
                printf("Voce selecionou a opcao 3 - Zerar: Virada de mês\n");
                //zerarPedidos();
                }
                else if(OpcaoCliente == 4){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =!4 || OpcaoCliente > 4 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }
        else if (Opcao == 4)
        {
            printf("Voce selecionou a opcao 4 - Sair\n");
        }
        else{
            printf("Opcao invalida, favor pressione enter para voltar ao menu principal");
            getchar();
            system("cls");
        }
        }    while (Opcao != 8 || Opcao < 8);

} 

//LISTA DE CLIENTES CADASTRADOS
void list(){  
    int i,j;
    for(i=0;i<200;i++){
        if(log[i].cod!=NULL){
            printf("\nCodigo: %d \nNome: %s\nCPF: %s\nNascimento: %s\nEndereco: %s\nTelefone: %s\n\n", log[i].cod,log[i].nome,log[i].CPF,log[i].Nascimento,log[i].endereco,log[i].telefone);
    }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");

} 

//CADASTRO DO CLIENTE
void cadastroP(int cod, int pos){ 
    int i;
    do{
    pos = verifica_pos();
    log[pos].cod = cod;
        printf("\nDigite seu nome: ");
        gets(log[pos].nome);
        printf("\nDigite seu CPF: ");
        gets(log[pos].CPF);
        printf("\nDigite sua Data de Nascimento: ");
        gets(log[pos].Nascimento);
        printf("\nDigite seu Endereco: ");
        gets(log[pos].endereco);
        printf("\nDigite seu Telefone: ");
        gets(log[pos].telefone);
        log[pos].vazio = 1;
        //printf("\nDigite enter para efetuar novo cadastro ou qualquer outra tecla para volar ao menu principal");
        //scanf("%d", &opt);
        opt ==1;
        getchar();
    }while(opt==1);
    system("cls");
    main();

} 

//ALTERAÇÃO DE DADOS DO CLIENTE: Opção 1 - Infelizmente não consegui implementar essa versão.
/*void alteraCliente()
{
    int cod, i;
    printf("\nEntre com o codigo do cliente que deseja alterar: ");
    scanf("%d", &cod);

    for(i = 0; i < MAX; i++)
    {
        if(log[i].cod == cod && log[i].vazio != 1)
        {
            printf("\nDados atuais do cliente:\n");
            printf("Codigo: %d\n", log[i].cod);
            printf("Nome: %s\n", log[i].nome);
            printf("CPF: %s\n", log[i].CPF);
            printf("Data de Nascimento: %s\n", log[i].Nascimento);
            printf("Telefone: %s\n", log[i].telefone);
            printf("Endereco: %s\n", log[i].endereco);
            printf("Data do Cadastro: %s\n", log[i].data);

            printf("\nQuais dados deseja alterar?\n");
            printf("1 - Nome\n");
            printf("2 - CPF\n");
            printf("3 - Data de Nascimento\n");
            printf("4 - Telefone\n");
            printf("5 - Endereco\n");
            printf("6 - Cancelar\n");
            printf("Digite o numero da opcao desejada: ");
            scanf("%d", &opt);

            switch(opt)
            {
                case 1:
                    printf("\nDigite o novo nome do cliente: ");
                    scanf(" %[^\n]s", log[i].nome);
                    break;
                case 2:
                    printf("\nDigite o novo CPF do cliente: ");
                    scanf(" %[^\n]s", log[i].CPF);
                    break;
                case 3:
                    printf("\nDigite a nova data de nascimento do cliente: ");
                    scanf(" %[^\n]s", log[i].Nascimento);
                    break;
                case 4:
                    printf("\nDigite o novo telefone do cliente: ");
                    scanf(" %[^\n]s", log[i].telefone);
                    break;
                case 5:
                    printf("\nDigite o novo endereco do cliente: ");
                    scanf(" %[^\n]s", log[i].endereco);
                    break;
                case 6:
                    printf("\nAlteracao cancelada, pressione ENTER para continuar.");
                    getchar();
                    return;
                default:
                    printf("\nOpcao invalida, pressione ENTER para continuar.");
                    getchar();
                    return;
            }

            printf("\nDados do cliente atualizados com sucesso, pressione ENTER para continuar.");
            getchar();
            return;
        }*/
  
  //ALTERAÇÃO DE DADOS DO CLIENTE: Opção 2     
	void alteraCliente(){
    int codaux, i;
    printf("Entre com o codigo do cliente a ser alterado: ");
    scanf("%d",&codaux);fflush(stdin);
    for (i=0; i<200; i++){
        if (log[i].cod == codaux && log[i].vazio == 1){
            printf("Cliente encontrado!\n");
            printf("Nome atual: %s\n", log[i].nome);
            printf("Digite o novo nome: ");
            fgets(log[i].nome, MAX, stdin);
            log[i].nome[strcspn(log[i].nome, "\n")] = 0;
            printf("CPF atual: %s\n", log[i].CPF);
            printf("Digite o novo CPF: ");
            fgets(log[i].CPF, MAX, stdin);
            log[i].CPF[strcspn(log[i].CPF, "\n")] = 0;
            printf("Data de nascimento atual: %s\n", log[i].Nascimento);
            printf("Digite a nova data de nascimento: ");
            fgets(log[i].Nascimento, MAX, stdin);
            log[i].Nascimento[strcspn(log[i].Nascimento, "\n")] = 0;
            printf("Telefone atual: %s\n", log[i].telefone);
            printf("Digite o novo telefone: ");
            fgets(log[i].telefone, MAX, stdin);
            log[i].telefone[strcspn(log[i].telefone, "\n")] = 0;
            printf("Endereco atual: %s\n", log[i].endereco);
            printf("Digite o novo endereco: ");
            fgets(log[i].endereco, MAX, stdin);
            log[i].endereco[strcspn(log[i].endereco, "\n")] = 0;
            printf("Dados do cliente atualizados com sucesso!\n");
            return;
        }
    }
    printf("Cliente nao encontrado!\n");
}
        
//VERIFICADOR DA POSIÇÃO
int verifica_pos( void ) 
{
    int cont = 0;

    while ( cont <= 200 )
    {

        if ( log[cont].vazio == 0 )
            return(cont);

        cont++;

    }

    return(-1);

} 

// VERIFICADOR DE CÓDIGO
int verifica_cod( int cod ) 
{
    int cont = 0;

    while ( cont <= 200 )
    {
        if ( log[cont].cod == cod )
            return(0);

        cont++;
    }

    return(1);

} 

//CADASTRO DO PEDIDO
void cadastroPedido(){
char CPFcliente[200];
float valorPedido, totalPedido = 0.0;
int i, n;
printf("Digite o CPF do cliente: ");
fgets(CPFcliente, 200, stdin);
CPFcliente[strcspn(CPFcliente, "\n")] = '\0';

// busca pelo cliente com o CPF correspondente
for (i = 0; i < MAX; i++) {
    if (strcmp(log[i].CPF, CPFcliente) == 0) {
        // leitura do pedido
        printf("Digite o nome do produto: ");
        fgets(logP[i].namePed, 200, stdin);
        logP[i].namePed[strcspn(logP[i].namePed, "\n")] = '\0';
        
        printf("Digite o numero do pedido: ");
        fgets(logP[i].numPed, 200, stdin);
        logP[i].numPed[strcspn(logP[i].numPed, "\n")] = '\0';
        
        printf("Digite a quantidade do pedido: ");
        fgets(logP[i].qtdPed, 200, stdin);
        logP[i].qtdPed[strcspn(logP[i].qtdPed, "\n")] = '\0';
        
        printf("Digite o valor do pedido: ");
        fgets(logP[i].valorped, 200, stdin);
        logP[i].valorped[strcspn(logP[i].valorped, "\n")] = '\0';
        valorPedido = atof(logP[i].valorped);
        
        // atualização do valor total do pedido
        totalPedido += valorPedido;
        
        printf("\nPedido cadastrado com sucesso!\n");
        break;
    }
}

// atualização do campo "totalCompras" do cliente correspondente
if (i < MAX) {
    log[i].totalCompras += totalPedido;
} else {
    printf("\nCliente nao encontrado!\n");
}
}


//ALTERAÇÃO DO PEDIDO - A opção não está funcionando.
void alteraPedido() {
    char cpf[20];
    int cod;

    printf("\nDigite o CPF do cliente: ");
    fgets(cpf, 20, stdin);

    int i, j;
    for (i = 0; i < MAX; i++) {
        if (log[i].vazio == 0 && strcmp(log[i].CPF, cpf) == 0) {
            printf("\nDigite o codigo do pedido: ");
            scanf("%d", &cod);

            for (j = 0; j < MAX; j++) {
                if (log[i].clientePed.cod == cod) {
                    printf("\nDigite o novo nome do pedido: ");
                    fgets(log[i].clientePed.namePed, 200, stdin);

                    printf("\nDigite o novo numero do pedido: ");
                    fgets(log[i].clientePed.numPed, 200, stdin);

                    printf("\nDigite a nova quantidade do pedido: ");
                    fgets(log[i].clientePed.qtdPed, 200, stdin);

                    printf("\nDigite o novo valor do pedido: ");
                    fgets(log[i].clientePed.valorped, 200, stdin);

                    printf("\nPedido alterado com sucesso!");
                    return;
                }
            }

            printf("\nCodigo do pedido nao encontrado.");
            return;
        }
    }

    printf("\nCliente nao encontrado.");
}

//CONCULTAR CLIENTE
void consultaCod (void)  
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);
    fflush(stdin);
    system("cls");

    while ( cont <= 200 )
    {

        if (log[cont].cod==cod)
        {
            if (log[cont].vazio==1)
            {

                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nNascimento: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].Nascimento,log[cont].endereco,log[cont].telefone);


                system ("pause");

                system("cls");

                break;

            }
        }

        cont++;

        if ( cont > 200 ){
            printf("\nCodigo nao encontrado, pressione enter para volar ao menu principal\n");
            getchar();
            system("cls");
        }

    }
}  

//MELHOR CLIENTE COMPRADOR
void listaMelhorComprador(){
    float maxCompras = -1.0;
    char CPFmaxCompras[MAX] = "";
    int i, j = 0, flag = 0;

    // Verifica se há pelo menos um cliente cadastrado
    for (i = 0; i < MAX; i++) {
        if (log[i].vazio == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Nenhum cliente cadastrado!\n");
        return;
    }

    // Percorre o vetor de clientes e encontra o cliente que realizou a maior compra
    for (i = 0; i < MAX; i++) {
        if (log[i].vazio == 1) {
            float totalComprasAtual = log[i].totalCompras;
            if (totalComprasAtual > maxCompras) {
                maxCompras = totalComprasAtual;
                strcpy(CPFmaxCompras, log[i].CPF);
            }
        }
    }

    // Imprime o CPF do cliente que realizou a maior compra
    printf("Melhor cliente comprador: %s\n", CPFmaxCompras);
    printf("Valor total das compras: R$ %.2f\n", maxCompras);
}

/*//GASTOS MENSAL - Codigo dando conflito...
void gastosTotal() {
	float somaGastos = 0;
	for(int i = 0; i < MAX; i++) {
		if(log[i].vazio == 0) {
		printf("CPF: %s\n", log[i].CPF);
		printf("Nome do Cliente: %s\n", log[i].nome);
		printf("\n");
    float totalCliente = 0;
    for(int j = 0; j < MAX; j++) {
        if(strcmp(logP[j].CPF, log[i].CPF) == 0) {
        printf("Número do Pedido: %s\n", logP[j].numPed);
        printf("Produto: %s\n", logP[j].namePed);
        printf("Valor: %s\n", logP[j].valorped);
        printf("\n");

        	totalCliente += atof(logP[j].valorped);
            }
        }
        printf("Valor total do cliente: %.2f\n", totalCliente);
        printf("\n");

        somaGastos += totalCliente;
    }
}
printf("Somatória de gastos de todos os clientes: %.2f\n", somaGastos);
printf("\n");
}*/

/*//ZERAR TODOS OS PEDIDOS APÓS VIRADA DO MÊS - Codigo dando conflito...
void zerarPedidos() {
    for (int i = 0; i < MAX; i++) {
        memset(logP[i].namePed, '\0', sizeof(logP[i].namePed));
        memset(logP[i].CPF, '\0', sizeof(logP[i].CPF));
        memset(logP[i].numPed, '\0', sizeof(logP[i].numPed));
        memset(logP[i].qtdPed, '\0', sizeof(logP[i].qtdPed));
        memset(logP[i].valorped, '\0', sizeof(logP[i].valorped));
        logP[i].cod = 0;
    }
    printf("Todos os pedidos foram zerados com sucesso!\n");
}*/

//EXCLUIR PEDIDO
void excluirPedido()
{
    int numPedido, i, j;
    printf("Digite o numero do pedido que deseja excluir: ");
    scanf("%d", &numPedido);
    getchar();
    
    for(i = 0; i < MAX; i++)
    {
        if(strcmp(logP[i].numPed, "") == 0)
            continue;
        if(atoi(logP[i].numPed) == numPedido)
        {
            for(j = i; j < MAX-1; j++)
                logP[j] = logP[j+1];
            strcpy(logP[MAX-1].namePed, "");
            strcpy(logP[MAX-1].CPF, "");
            strcpy(logP[MAX-1].numPed, "");
            strcpy(logP[MAX-1].qtdPed, "");
            strcpy(logP[MAX-1].valorped, "");
            printf("\nPedido excluido com sucesso!\n");
            return;
        }
    }
    printf("\nPedido nao encontrado.\n");
}

//EXCLUIR CLIENTE
void excluirCliente(void)  
{
    int cod, cont = 0;
    char resp;
    printf("\nEntre com o codigo do registro que deseja excluir: \n");
    scanf("%d", &cod );

    while ( cont <= 200 )
    {

        if ( log[cont].cod == cod )
        {

            if (log[cont].vazio == 1 )
            {
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nNascimento: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].Nascimento,log[cont].endereco,log[cont].telefone);
                getchar();
                printf("\nDeseja realmente exlucir? s/n: ");
                scanf("%s",&resp);

                if ( ( resp == 'S' ) || ( resp == 's' ) )
                {
                    log[cont].vazio=0;
                    log[cont].cod = NULL;
                    printf("\nExclusao feita com sucesso\n");
                    break;
                }
                else
                {
                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
                    {
                        printf("Exclusao cancelada!\n");
                        break;
                    }
                }

            }

        }

        cont++;

        if ( cont > 200 )
            printf("\nCodigo nao encontrado\n");

    }
    system("pause");
    system("cls");
}


   

