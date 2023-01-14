#include "./data.h" 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( void ) {
	char entry[15] ;
	int value ;
	FILE *fileptr ;
	int counter = 0 ;

	while( 1 ) {
		fileptr = fopen( "db.txt" , "a" ) ;

		printf( "Entry:" ) ;
		fprintf( fileptr , "Entry:" ) ;
		scanf( "%s" , &entry ) ;
		fprintf( fileptr , "%s\n" , entry ) ;

		printf( "Value:" ) ;
		fprintf( fileptr , "Value:" ) ;
		scanf( "%d" , &value ) ;
		fprintf( fileptr , "%d\n" , value ) ;

		for( counter = 0 ; counter < value ; ++counter ) {
			printf( "%c" , block ) ;
			fprintf( fileptr , "%c" , block ) ;
		}
		printf( "\n-----------------------------\n" ) ;
		fprintf( fileptr , "\n-----------------------------\n" ) ;
		fclose( fileptr ) ;
	}
}
