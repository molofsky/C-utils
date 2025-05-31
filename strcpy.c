/* An implementation of the C library function strcpy 
*
* @author Adrian Molofsky
* @version 1/19/23
*/

void strcpy (char x[], char y[]) {
  int i = 0;
  
  while ((x[i] = y[i]) != '\0') /* copy & test byte */
  i += 1;
}
