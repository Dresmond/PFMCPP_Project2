#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 // 1) answer:
// void, int, char, float, double float, wide character
  
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 

3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()

{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    // primitive declarations for types: int, char, float, double float, wide character
    
    // type int declarations

    int intVar10 = 10;         // initial value is 10
    int intVar20 = 20;         // initial value is 20
    int intVar30 = 30;         // initial value is 30    

    // type char declarations

    char charVar1 = 'A';        // initial value is A
    char charVar2 = 'B';        // initial value is B
    char charVar3 = '9';        // initial value is '9'

    // type float declarations

    float floatVar1 = 1.0;         // initial value is 1.0
    const float floatVar2 = 2.0;   // initial value is 2.0
    

    // type float double declarations
    const double PI = 3.14159;            // PI const cannot be modified
    double doubleVar1 = 1.00987654321;    // initial value is 1.00987654321  
    double doubleVar2 = 100000000000.00;  // initial value is 100,000,000,000
    const double PIDUB = 3.14159265359;   // PI const cannot be modified


    ignoreUnused(intVar10);            //passing type int to ignoreUnused()
    ignoreUnused(intVar20);            //passing type int to ignoreUnused()
    ignoreUnused(intVar30);            //passing type int to ignoreUnused()

    ignoreUnused(charVar1);            //passing type char to ignoreUnused()
    ignoreUnused(charVar2);            //passing type char to ignoreUnused()
    ignoreUnused(charVar3);            //passing type char to ignoreUnused()

    ignoreUnused(floatVar1);           //passing type float to ignoreUnused()
    ignoreUnused(floatVar2);           //passing type float to ignoreUnused()
    ignoreUnused(PI);                  //passing type float to ignoreUnused()

    ignoreUnused(doubleVar1);           //passing type double to ignoreUnused()
    ignoreUnused(doubleVar2);           //passing type double to ignoreUnused()
    ignoreUnused(PIDUB);                //passing type double to ignoreUnused()
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) add two integers, return result
 */

int addIntegers( int, int );                           // function declaration

int addIntegers( int intVar10 = 0, int intVar20 = 0 )  // function definition 
{
    ignoreUnused( intVar10, intVar20 );
    return {};
} 

/*
 2) elevator goes up one floor
 */

int goUpOneFloor( int );                  // function declaration

int goUpOneFloor( int currentFloor = 0)   // function definition
{
    ignoreUnused( currentFloor );
    return {}; 

}
/*
 3) display the notes in minor chord
 */

void playMinorChord( char, char );                        // function declaration

void playMinorChord( char key = 'C', char flavor = 'd' )  // function definition
{
    ignoreUnused( key, flavor );    
}

/*
 4) play a sound
 */

void playSound( float, int );                           // function declaration

void playSound( float freq, int volume = 1 )            // function definition
{
    ignoreUnused( freq, volume );
}

/*
 5) move mechanical eye
 */

void moveEye( int, char );                             // function declaration

void moveEye( int degrees = 30, char axis = 'y' )      // function definition
{
    ignoreUnused( degrees, axis );
}

/*
 6) adjust compressor                             
 */

int adjCompressor( double, double, double, double );    // function declaration
                                                    
	                                                      // function definition
int adjCompressor( double adjRatio = 0, double adjAttack = 0, double adjRelease = 0, double adjThreshold = 0 )
{
    ignoreUnused( adjRatio, adjAttack, adjRelease, adjThreshold );
	return {};
}

/*
 7) play trumpet note
 */

int playNote( int, int, int, int );                                    // function declaration
                                                                
int playNote( int v1 = 0, int v2 = 0, int v3 = 0, int slotnum = 4 )    // function definition
{
    ignoreUnused( v1, v2, v3, slotnum );
	return {};
}

/*
 8) move spaceShip to next position
 */

int moveShip( double, double, double, int state = 1, double = 0.0 );          // function declaration

                                                                              // function definition
int moveShip( double pitch, double roll, double yaw, int state, double velocity )
{
    ignoreUnused( pitch, roll, yaw, state, velocity );
	return {};
}

/*
 9) open or close drawer
 */

int drawerSwitch( int, int);                        // function declaration

int drawerSwitch( int drawerNum, int switcher )     // function definition
{
    ignoreUnused( drawerNum, switcher );
	return {};
}

/*
 10) display notes in a major scale
 */

void playMajorScale( char, char );               // function declaration

void playMajorScale( char key, char mode )       // function definition
{
    ignoreUnused( key, mode );                    
} 


int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)  int addIntegers( int, int )
    int return1 = addIntegers(1, 2);

    //2)  int goUpOneFloor( int );
    int return2 = goUpOneFloor(3); 
    
    //3)  char playMinorChord( char, char );
    playMinorChord('E', 'd');   

    //4)  void playSound( float, int );
    playSound(440.5, 10);

    //5)  void moveEye( int, char );
    moveEye(30, 'y'); 

    //6) int adjCompressor( double, double, double, double );
    int return6 = adjCompressor(1.5, 0.12, 480.4, 0.6 ); 

    //7) int playNote( int, int, int, int );
    int return7 = playNote(1, 1, 0, 3); 

    //8) int moveShip( float, float, float, int, float );
    int return8 = moveShip(32.8, 12.5, 67.20, 1, 679.999);

    //9) int drawerSwitch( int, int);
    int return9 = drawerSwitch( 4, 1);

    //10) void playMajorScale( char, char );
    playMajorScale('9', '2');  
    
    std::cout << "good to go!" << std::endl;

   /* 
   FIXME can you use the ignoreUnused(...) here to clear the warnings that remain?
   */

   ignoreUnused( return1 ); //call the function with the variables triggering warnings
   ignoreUnused( return2 ); //call the function with the variables triggering warnings
   ignoreUnused( return6 ); //call the function with the variables triggering warnings
   ignoreUnused( return7 ); //call the function with the variables triggering warnings
   ignoreUnused( return8 ); //call the function with the variables triggering warnings
   ignoreUnused( return9 ); //call the function with the variables triggering warnings
    return 0;    
}

