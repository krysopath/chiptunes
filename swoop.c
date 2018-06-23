/*
./grime | aplay -r 8000
 */
main(t) {
  for(t=0;;t++)putchar(
    (t*(t>>5|t>>8))>>(t>>16)
  );
}
