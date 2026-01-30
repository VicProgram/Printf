 *Este proyecto ha sido creado como parte del currículo de 42 por vabad-ro.*


# Descripción
Este proyecto se basa en la replicación del funcionamiento de la función "printf" original de C. Se basa en replicar las funciones básicas y alguna avanzada para su posterior uso en el resto de proyectos de el curso.

 **Nos permite imprimir por terminal de forma formateada.**

Tenemos en cuenta los conversores *(nos indican el tipo de formato para la variable a imprimir)*.
Nos permite también saber la cantidad de caractéres impresos ya que la función retorna el número total de carácteres impresos.

Los conversores o *"Place holders"* van precedidos del símbolo '%', tenemos varios para diferentes formatos.

# Instrucciones
De forma sencilla hacemos una llamada a la función ft_printf();

Como primer parámetro dentro tenemos la cadena de carácteres que va a incluir los carácteres '%' y detrás los conversores/place holders para dar formato. 

Como segundo parámetro la variablea imprimir.

	Ejemplo
		ft_printf("%c", 'h');
	Este ejemplo imprimirá en la terminal el carácter 'h'.

		ft_printf("%X", 141);
	Este ejemlo imprime en base hexadecimal con las letras mayúsculas el valor 141.

# Listado de funciones

Las conversiones que tenemos disponibles son :

	-c -> Para carácteres individuales.
	-s -> Para cadenas de carácteres.
	-p -> Para punteros.
	-d -> Para números decimales.
	-i -> Para números enteros.
	-u -> Para números decimales sin signo *(Unsigned)*.
	-x -> Para números hexadecimales con la base con letras minúsculas.
	-X -> Para números hexadecimales con la base con letras mayúsculas.
	-% -> Para imprimir el carácter '%'.

# Recursos

La mayor parte de información la hemos extraído de:

-	*Peer to Peer*.
-	*Manuales de Linux*
-	*https://www.ibm.com/docs*