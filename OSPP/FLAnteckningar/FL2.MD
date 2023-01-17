# Module [1]


## Hårdvaratermer
Ripple adders\
and,or,xor, nand gates osv\
Overflow..\
ALU\


## Fundemental Concepts

Visar bottom up, transistorer. Kolla slides ifall nödvändig\
\
Även lite standard gates. \
Modell på en dator = Von Neumann modellen\

### Important definitions
CPU\
Register\
Memory\
Ram och register är flyktig, "volatile". Snabba men lätt att ändra\
Hard drives är "persistent" mer långvarigt minne.\
CPU state kan användas istället för CPU context. Ex när man behöver spara tillstånd.\
Program. en massa instruktioner som är läsbart för människor.(passiv)\
Executable, ett kompilerat program som är redo att köra för en dator.(passiv)\
Process, Säger till datorn att köra detta lägger sig i ramminnet. (aktiv)\
Static memory allocation\
Dynamic memory deallocation\
kernel = kan och vet allt och vill det bästa, möjligtvis inte för dig.
Bootstrap program

### Dual mode operation
2 modes, kerner och user.\
Kernel mode då har kerneln ha mer privelegier än användarens processer\
User mode, då är användarens process mer prio
Synchonous och Asynchronous events

### Exception och interrupts

Interrupts\
Typ tangenttryck, externa event som CPU behöver veta\
\
Exceptions\
....\

När exception eller interrupts händer så går man in i kernel mode\
problem? vi använder samma register. Måste spara info någonstans, CPU contexT(!)\
Sen restore CPU context!\
\

### Nånting

Saker som gått igenom på darken... Cpu, 32 register osv,\
COprocessor. badV/Addr, Status, Cause, Exceptions (exceptions/interrupts)\

När exceptions/interrupts sker händer följande\
1. Program counter (PC) är lagrad i EPC (coprocessor 0)

2. Cause är lagrad i coprocessor cause
a. exception CAUSE är 5 bit väalur exception code
b. interrupt 1 av 8 pending iterrupt i cause

3. PC är satt till exception/interrupt hanteraren.

Resten beror på hanteraren

### Multiprogrammering

Låter andra köra medans processer som att vänta på mänskliga tangentklick köra.\ 
Multiprogrammering är bra då vi använder CUP mer effektivt\
Finns en timer på hur länge du får vänta i på exempel I/O, annars tillbaka till vanliga kön\
Multiprogrammering möjliggör interraktion mellan olika processer\
Exempel är att du laddar ner en film i bakgrunden samtidigt som du programmerar samtidigt samtidigt som du har musik på.\

### System calls
användare program som kallar på tjänster o ett operativ system\
Exception kallas också trap\
System call exception  är specifikt för Syscalls\



