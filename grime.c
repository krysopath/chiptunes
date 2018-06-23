/*
./grime | aplay -r 8000
 */
main(t) {
  for(t=0;;t++)putchar(
    t*((t>>12|t>>8)&63&t>>4)
  );
}
