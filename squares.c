/*
./squares | aplay -r 8000
 */
main(t) {
  for(t=0;;t++)putchar(
    t&t>>8
  );
}
