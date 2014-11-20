multiplier_systemC
==================

Multiplication is performed by adding the multiplicand A to itself B times, where B denotes the multiplier. A multiplier circuit has two 4-bit inputs A and B and its 8-bit output, W. After a complete positive pulse appears on go, the circuit reads the A and B operands from the corresponding busses, after which the multiplication process begins. After the completion of the multiplication process, the multiplier places Won the corresponding busses and issues a one-clock duration pulse of ready. Following this, the circuit returns to its starting state waiting for another pulse on go.
