#ifndef biginteger
#define biginteger
struct BigInteger *initialize(char a[]);
void display(struct BigInteger *head);
struct BigInteger *add(struct BigInteger *head1, struct BigInteger *head2);
struct BigInteger* Subtraction(struct BigInteger *head1,struct BigInteger *head2);
struct BigInteger* sub(struct BigInteger *head1,struct BigInteger *head2);
struct BigInteger* mul(struct BigInteger *head1, struct BigInteger *head2);
struct BigInteger* div1(struct BigInteger *head1 ,struct BigInteger *head2);
#endif
