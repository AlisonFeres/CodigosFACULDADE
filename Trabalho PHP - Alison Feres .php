<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8" />
    <meta name="author" content="AlisonFeres" />
    <meta name="keywords" content="HTML 5, CSS
            semantica" />
    <meta name="description" content="Programação html, 
        conceitos básico.">

    <title> Validação de aumento salarial. </title>
</head>

<body>
    <center>
        <p> <mark> VALIDAÇÃO DE AUMENTO SALARIAL </mark> </p> 
    </center>
    <form method="POST" action="#">
      <fieldset>  <label>Insira o seu nome:</label>
        <input type="text" placeholder="Digite aqui o seu nome."name="insira_o_seu_nome" required/>
        
        
        <br> <br>
        
        
        <label>Insira a sua data de nascimento:</label>
        <input type="date" placeholder="Digite aqui a sua idade." required/>
        
        
        <br><br>
        
        
        <label>Insira seu cargo atual:</label>
        <input type="text" placeholder="Digite aqui o seu cargo." name="insira_seu_cargo" required/>
        
        
        <br><br>
        
        
        <label>Insira a sua idade:</label>
        <input type="number"placeholder="Digite aqui a sua idade." min= "18" max="100" name="insira_sua_idade" required/>
        
        
        <br> <br>
        
        
        <label>Insira a sua matricula da empresa:</label>
        <input type="text" placeholder="Digite aqui a sua matricula." name="insira_sua_matricula" required/>
        
        <br><br>


        <label>Informe o seu salario atual (Sem virgulas e pontos):</label>
        <input type="text" placeholder="Digite aqui o seu salario." name="insira_seu_salario_atual" required/>
        
        <br> <br>

       <center> <input type="submit" name="btn_exibir" value="Calcular"> </center>
    </form> </fieldset>
    
    <?php

 

    if  (count($_POST))    
    {
 
    
        $salario = $_POST["insira_seu_salario_atual"];
     

    if ( $salario >= 1500 && $salario <= 1750) 
    {

        $aumento = $salario * 12 / 100;
        $novo_salario = $salario + $aumento;
        

        echo "<br><center>Seu salario aumentado será:" . $novo_salario;
        echo "<br><center> O seu aumento foi de: " .$aumento;

    } 
    
    elseif ($salario >= 1751 && $salario <= 2000) 
    
    {
        $aumento = $salario * 10 / 100;
        $novo_salario = $salario + $aumento;
       
        echo "<br><center>Seu salario aumentado será:" . $novo_salario;
        echo "<br><center> O seu aumento foi de: " .$aumento;
        

    } 
    
    elseif ($salario >= 2000.1 && $salario <= 3000) 
    
    {
        $aumento = $salario * 7 / 100;
        $novo_salario = $salario + $aumento;
        
        echo "<br> <center>Seu salario aumentado será: " .$novo_salario;
        echo "<br> <center> O seu aumento foi de: " .$aumento;


    } 
    
    
    elseif ($salario >= 3000.1) 
   
    {
        $aumento = $salario * 5 / 100;
        $novo_salario = $salario + $aumento;
        
        echo "<br><center> Seu salario aumentado será: " . $novo_salario;
        echo "<br><center> O seu aumento foi de: " .$aumento;  
    }

}




    ?>