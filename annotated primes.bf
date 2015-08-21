
fill every other column with numbers one to two hundred fifty five
in-between columns will be used for two loop variables as we seek over them
during our inner loop

>+[[->+>+<<]>[-<+>]>+]<+>
<<[<<] seek to start
>+ set 1 on interleaved box
> point to first number
>> point to second number because 2 is prime
[ while not zero
 +[- if not negative one
   . output this number as prime
  now eliminate all multiples
  copy N to the next box and box plus one
  the next box will decrement as these two slide down
  when it reaches zero the next number is blanked out
  then it starts at N again continuing before reaching
  the end of the tape
  once hitting the end of the tape
  rewind to our marker
  and go to the next number
   <+ this is our marker the previous box
   >
   [->+>>+<<<] copied N to next N minus one and N two to the right of that
    empty n
   >-< dec initial iterator (N minus one)
   
   while the target num is unequal to zero
   >>[ 
    <[ slide window once rep until val is zero and n
     >>[>>+<<-]
     <<[>>+<<-]
     >>-
    ]
    
    clear number which is multiple
    >[-]
    
    reset iterator(s)
    >[-<+>]<
    [>+>>+<<<-]-  set the number to negative one as a flag
    >-> decr interator at start and move to next number
   ]
   we've reached the end of the set of numbers
   clear left itr
   <[-]
   clear right itr
   >>[-]
   
    find marker   
    -[+<<-] found marker
    point to our empty number
    >
   ] point to the next number
   >>
  ]
  
