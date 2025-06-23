/* A generic swap function that swaps two void * arguments
* of n byte size. 
*
* @author Adrian Molofsky
* @version 1/9/23
*/

void swap(void *data1ptr, void *data2ptr, size_t nbytes) {
	char temp[nbytes]; 
	memcpy(temp, data1ptr, nbytes);
	memcpy(data1ptr, data2ptr, nbytes);
	memcpy(data2ptr, temp, nbytes);
} // the nbytes will decide the size of the datatype in a function
