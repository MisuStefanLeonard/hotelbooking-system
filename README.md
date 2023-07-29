# hotelbooking-system
object-oriented C++ programming project

	
	
	---------------------------------------------------------------
	
	ALL RIGHTS RESERVED TO MisuStefanLeonard
	
	
	PERSONAL PROJECT
	
	Friday 28 July 2023 , somewhere near dawn of the sun
	
	---------------------------------------------------------------

	 FEW THINGS ABOUT ME : --- My name is Misu Stefan and I'm currently first year , now passed the second year at University of Bucharest  ,  Faculty of Mathematics And Informatics  , profile:  Computers And Technology of Information


 	--> PROJECT NAME: BOOKING HOTEL SYSTEM

 	--> Personal project I have been working on.Something simple , not very complicated. 
     Made in object-oriented C++ programming.
 
 	--> Few things about the project:

	>>>>>> things to ADD ( maybe in future) ----> To disconnect automatically from the account in a  timespan of 30 minutes
					        ----> Hotel recensions 
					        ----> ......

     >>>>>> Tried learning some c++ and I thought this project would get maybe to beginner to medium  
				level
     >>>>>> Used abstractization , templates , vector and map from STL , REGEX etc.

     >>>>>> Encountered problems at map , templates and regex. In the final, made them work.
  
     >>>>>> Left comments everywhere where I encountered a problem or for testing purposes.

     >>>>>> Tried to make a login system using files 
		
	--- > When you register yourself in the system your data gets written into the file. Then I used a map to link the id (which is unique) to the respective data of the customer.

	---> Same works the delete system (with the files) and the forgot password function too. 

     >>>>>> Made a function to generate an unique token based on your id/password and the current time 
      	    ---> id and password are crypter with Caesar Cypher
     >>>>>> Fixed some bugs: ---- Forgot to read in the password map the data from the records file (now the id is unique )

     			     ---- Fixed the modify customer data (it was reading the data twice in a row when you wanted to modify your data), now it is reading only once.

                             ---- Fixed a segmentation fault from the map iterator when you were removing your data.

  
  
  
  	>>>> FEEL FREE TO INSPIRE IF YOU WANT
	
	
	 >>>> RUN WITH (in console) : 1) make clean 
  
  				      2) make
				
				      3) ./bin/main





