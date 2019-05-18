---
title: List of definitions from my computer science book.
---
- algorithm: A set of rules or a sequence of steps specifying how to solve a problem.
- selection statements: Used to select which *statement* will be executed next, using relational operators.
- relational operators: greater than, less than etc...
- data structure: A collection of elementary data types and built-in methods to operate on them. (list.sort etc...).
- array: A finite ordered set of elements. (ordered just means there is first, second etc...).
- subroutine: A named block of code that performs a task within a program.
- block: A block is a section of code containing one or more statements.
- procedural abstraction: Using a procedure to carry out a sequence of steps for achieving a task, e.g. drawing a shape with a library. 
- general abstraction: Abstracting to a simplified version of the data, e.g. map to graph.
- functional abstraction: A mapping from one set of values to another, e.g. sqrt.
- data abstraction: Abstracting how data is actually being represented, e.g. a floats/doubles etc.
- information hiding: Where information is only available through public class methods e.g. Java.
- problem abstraction: Where all the details of the problem are taken away until the problem turns
    into one which has already been solved, i.e. maze to graph traversal.
- checksum: A mathematical formula applied to a block of data to calculate a value which is sent with the block to verify it.
- absolute error: The difference between the number to be represented and the true value of it's binary representation.
- relative error: The absolute error divided by the number to be represented.
- sample rate: The number of times the amplitude of the sound is measured per second.
- resolution (sound): The number of bits used to represent the amplitude of the sound in each sample.
- nyquist's theorem: The minimum sample rate required to sample sound with a max frequency of N hertz is 2N hertz.
- MIDI: Musical Instruments Digital Interface.
- software: All the programs that are written to make computers function.
- hardware: The electrical or electro-mechanical parts of a computer and it's input, output and storage devices.
- system software: The software needed to run the computer's hardware and applications software.
- application software: The software used to perform certain user specific tasks.
- utility software: Software designed to optimise the performance of the computer.
- translators: Programs which translate code written by humans into machine code.
- general purpose software: Software that can be used for many different things, e.g. excel, word.
- special purpose software: Software which performs a single specific task or a set of tasks, e.g. accounting software.
- operating system: A program or set of programs that manages the operations of the computer for the user.
- interrupt: An interrupt is a signal from a peripheral or software program that causes the operating system to stop
    processing it's current list of instructions and think about what to do next
- object code: Object code is another word for machine code.
- byte code: An intermediate language which is used by some modern interpreted languages to improve performance.
- bus: A bus is a set of parallel wires connecting two or more components of a computer.
- system bus: A collective word for the address bus, the data bus and the control bus.
- control bus: The main purpose of the control bus is to transmit command, timing and specific status
  information between system components.
- data bus: Where the data go...
- word: A word is a fixed size number of digits typically 8, 16, 32 or 64 bits which is handled as a unit by the processor.
- interface: An interface is a standardised form of connection defining such things as signals,
    number of connecting pins/sockets ad voltage levels that appear at the interface.
- stored program concept: Machine code instructions are fetched and executed serially by a
    processor that does arithmetic and logic operations.
- Arithmetic Logic Unit: Performs arithmetic($+,-,\times,\div$), shifting($>>,<<$) and logic operations(=,!=,<,>,<=,>=).
- Control Unit: Controls and coordinates the activities of the CPU.
- Dedicated registers: Program Counter, Current Instruction Register, Memory Address Register, Memory Buffer Register, Status Register.
- Word Length: The bits that the CPU can process simultaneously, typically 32/64 bits.
- Interrupt: A signal sent by a software program or hardware device to the CPU.
- Software interrupt: A signal sent by a program to request services from the kernel.
- Hardware interrupt: A signal sent by a hardware device often to notify an event as complete
    or to raise an error such as printer out of paper.
- Addressing Modes: Either direct of immediate addressing. Immediate is the value specified after
    and direct is the memory at index thing after.
- Opcode: Consists of a basic instruction and the addressing mode, operates on the operand.
- Operand: The data/the address of the data to operate on.
- Assembly language: A set of mnemonics used to represent operation codes and addresses.
- CCD: Charge Coupled Device, used in cameras/barcode scanners. Power hungry.
- CMOS: Complementary Metal Oxide Semiconductor, used in camera sensors to detect light. Uses less power than CCD but worse quality.
- Bayer Colour Filter: The coloured grid placed on top of a camera's light sensors so that only light of a red/green or blue hits it.
- RFID: Radio Frequency IDentification, often used to track things, can be read without line of sight and up to
    300m away. Consists of a small microchip transponder and an antenna. Can be passive or active, with active requiring
    a battery but can be read from further away.
- Optical Disk: Consists of pits and lands which can be read by a laser to form a binary data stream.
    Blu-Ray simply uses a smaller wavelength laser capable of reading smaller/more tightly wound pits and lands.
- Solid State Drive (SSD): Composed of millions of NAND flash memory cells and a memory controller.
    Each cell can be read and set by the bit and word lines. If a high enough current is in the word line
    some electrons will be trapped in the floating gate inbetween the other layers. It is these trapped
    electrons which determine the state of the cell, no electrons is 1 some electrons is 0.
- EPOS: Electronic Point of Sales.
- VOIP: Voice Over Internet Protocol.
- crosstalk: Interference between wires in parallel data transfer requiring that certain words be sent again.
- bit rate: the number of bits per second transferred, overall data transfer speed.
- baud rate: The rate at which the signal changes.
- bandwidth: The range of frequencies a transmission medium can carry.
- parity bit: A parity bit can be used to detect data corruption during transport.
- Synchronous Transmission: Data is transferred at regular intervals controlled by a clock signal.
- Asynchronous Transmission: Data is transferred one byte at a time,
    using start and stop bits to indicate the start and end of each byte.
- Protocol: A set of rules on how to communicate between two devices.
- Bus Topology: All computers connected to a single cable terminated at each end. Is cheap.
    Single point of failure. Low security and performance.
- Star Topology: Network has a central node, either a computer or switch which acts as a router
    to transmit messages. Easy fault diagnosis, High performance, no collisions, more secure, easy to add new nodes.
    Expensive and no redundancy in the central node.
- Physical Topology: The actual design layout of the wiring etc.
- Logical Topology: The relationship between computers on the network.
- Media Access Control (MAC) addresses: Every Network Interface Card (NIC) has a unique MAC address
    hard coded into it by the manufacturer. They are 48 bits long. Because they are unique they can be used
    to track you.
- Client Server networking: Everything is controlled by a powerful central server. Expensive but are more
    secure because everything is stored in one place so the server can manage access to the data.
- peer to peer networking: Clients connect to each other to store and download files. Easy to set up and cheap
    however extensively Used in online piracy.
- Wireless Access point (WAP): What you connect to when on WiFi.
- Station: The combination of a computer and an interface controller.
- Service Set IDentification: The name of a wireless network. Must be locally unique.
- Wi-Fi Protected Access (WPA): A set of security protocols for connecting to Wi-Fi securely.
    Passwords can be up to 32 bytes long.
- Carrier Sense Multiple Access / Collision Avoidance (CSMA/CA): A protocol for carrier transmission
    in local wireless area networks. Waits for the Channel to become idle before sending the data.
- CSMA/CA with Request To Send (RTS) / Clear To Send (CTS): The same as CSMA/CA except when the channel
    is clear an RTS message is sent and the WAP sends back a CTS message and the client begins transmission.
    This is to prevent the problem when two clients can see the WAP but not each other.
- Internetworking: The networking between networks (the internet).
- Abstract Data Types: Queues, stacks, trees and graphs.
- Abstract Data Type: A logical description of how data is stored and which methods can be used to act on it.
    (e.g. append to a list, pop from a stack).
- Data abstraction: Providing an interface on top of the data which handles how the data is stored and displayed etc.
- Information hiding: when the details of an implementation are hidden from the user.
- Dynamic Data structures: Data structures which can grow or shrink in size based on what is being stored.
- Static Data structures: Data structures with fixed size.
- Queues are FIFO data structures.
- Linear queue: either all elements are moved up and are stored in a static array or the
    front pointer moves up and space is lost at the front of the array.
- Circular queue: like linear with moving head pointer except it loops around when it reaches the end of the array.
- Priority queue: Same as other queues except that elements can be added to the front or back depending on whether they
    are high or low priority.
- List: basically a variable size array, can be implemented using an array if only a smaller number of items
    are needed and known in advance.
- Stacks are LIFO data structures.
- Call stack: When a function is called the return address is pushed onto the call stack, allowing for recursion etc.
    Call stacks also hold parameters and local variables. Order: locals, ret pointer, params.
- Hash table: A table where the indexes come from the hashes of the keys.
- Collision: When two keys hash to the same value.
- Folding hash method: Sum up the value of the key, take the remainder modulo the size of the list.
- Rehashing: Finding a place for data to go after a hash collision.
- Dictionaries: Abstract data type consisting of pairs of items, a key and a value. Implemented using a hash table.
- Graph: A graph is a set of vertices or nodes connected by edges or arcs.
    Arcs may be one or two way.
- Digraph | Directed graph: A graph in which the edges are all in one direction.
- Adjacency matrix: A 2d array used to store information about the graph: rows and columns represent nodes and the value
    of each cell represents the weight of the connection between the row and column whether a connection exists.
    If a value of 5 is at row i and column j that represents a connection from node i to node j of weight 5.
- Adjacency list: A list of all the nodes and each node points to a list of all the adjacent nodes.
    Often implemented using dictionaries.
    more space efficient than an adjacency matrix.
- Tree: A connected undirected graph with *no cycles*. It is a special case of a connected graph.
- Rooted tree: A tree but it has a root node.
- leaf node: A node with no children.
- Binary tree: A rooted tree with a maximum of two children.
    To construct a binary search tree treat the first element as the root then traverse the tree
    going left if the value is less than that of the current node;
    and right if it isn't, until a node with nothing on the side you need to go down, add the value as a node there.
- Vectors: A vector is a list of numbers often used to represent points in space. 
- Convex combination of two vectors: $c = \alpha u + \beta v, \alpha+\beta \leq 1$ The vector C must lie inside the triangle OUV.
    Where O is the origin.
- Recursive Algorithms: An algorithm is recursive if it is defined in terms of itself, e.g. $f(x) = f(x-1) + f(x-2), f(0) = 1, f(1) = 1$.
    A base case is needed to be reached in a finite number of steps other wise the algorithm will never finish.
- stack frame: When the local variables, return address and parameters are pushed onto the call stack when
    a function is call, this collection of items is called the stack frame
- Pre-order tree traversal: recursively visit the root then the left then the right.
    used to create prefix notation used in functional programming.
- In-order tree traversal: recursively visit the left then the root then the right.
- Post-order tree traversal: recursively visit the left then the right then the root.
    Used to evaluate reverse polish notation.
- Time Complexity: how the time taken to evaluate the algorithm grows with the size of the input.
- linear functions: $Ax + B = O(x)$
- polynomial functions: $Ax^m + Bx + c = O(x^m)$
- exponential functions: $AB^x = O(B^x)$
- logarithmic functions: $A\log_n{x} = O(\log_n{x}$
- linear search: go through the items one by one in order until finding the right one, O(n).
- binary search: requires a sorted list, but is much faster at $O(\log_2{n})$.
    Go to halfway through the sorted items and check whether the item you are searching for is higher or lower,
    if lower split the lower half again and repeat, and vice versa for the higher half.
    Repeating until the item is found or not found.
- divide and conquer algorithms: algorithms which split a task into many smaller but much easier tasks
    and build on the output of each one to solve the original big task, e.g. merge sort.
- merge sort: split the list into sublists of length one, and then merge them into sorted sublists until
    only one remains, this is the sorted list. The merge is done by taking the first element from the left
    sublist and the first from the right, comparing them and then placing the smaller in the new sublist,
    this continues taking elements from each side until the lists are merged.
    $O(n\log_2{n})$.
- space complexity: The amount of space required to store the information required
    to evaluate a function with regard to the size of the input n.
- Depth-first traversal: Go down one route as far as possible before backtracking and going down the next route.
- Breadth-first traversal: Add the first node to the queue, visit that node and add all of it's neighbours to
    the end of the queue. Visit the next node in the queue and add all of it's neighbours to the end of the queue,
    repeat until all nodes have been visited.
- Optimisation problems: Finding the optimum solution to a problem, such as the fastest route between two places on a map.
    Scheduling flights, creating timetables for classes at schools and colleges, and finding the best possible chess move.
- Dijkstra's shortest path algorithm: Starting at the initial node assign each node a weight of $\infty$ and the starting node
    a weight of zero. Place all of the nodes in a priority queue based on the distance from the initial node.
    Dequeue the initial item and visit it, update all the children of that node with their distance from the starting node
    based on the weight of the connection. Then dequeue the next node from the priority queue and repeat updating all of the
    children with the distance from the starting node to the current node plus the weight of the path from the current node
    to that node. Repeat until the desired node is visited meaning that the shortest distance to that node is known.
- Insoluble Problems: These are problems which have a solution which is either impossible to compute.
    Practically Insoluble problems are those which would take an infeasible amount of time to compute e.g. millions of years.
    Such as cracking a 100 character password etc.
- The Traveling Salesman Problem: An optimisation problem asking what the shortest route between a set of towns where the distances
    between each town is known, visiting each town once. This is not the same as the shortest distance between two nodes in a graph.
    It has applications in fields such as planning, logistics, microchip manufacture and DNA sequencing.
- Tractable problems: Problems which have solutions in polynomial time or better.
- Heuristic methods: A perfect or optimum solution is not always needed, if a best guess is acceptable heuristics can be the way to go.
    They can do this in many ways: solving a simpler or cut down version and extending the result to the original problem,
    or simply finding a solution which has a high probability of being correct but uses much less resources to compute.
- The halting problem: Simply it is impossible to prove whether a computer program will halt simply by analysing it.
    This can be proved by assuming such a program exists which can tell whether a program will halt or not,
    then create a new program which runs this program on itself and does the opposite, thus it is impossible for such a
    program to exist.
- Finite State Machine (FSM): An abstract representation or model of computation used in designing computer systems and logic circuits.
    FMSs with no output are also known as Finite State Automata.
- Mealy Machines: A specific case of a FSM with output. Output of a Mealy Machine is determined by both the current state and the input.
    For each state and input only one transition is possible. Mealy machines can be used to represent ciphers, traffic lights, vending machines
    to name some examples.
- Numerical Sets: Empty set: $\varnothing$,
    set of all integers numbers: $\mathbb{Z}$,
    set of all rational numbers: $\mathbb{Q}$,
    set of all real numbers: $\mathbb{R}$.
- cardinality: The number of elements in a set is its cardinality.
- countable sets: Some sets are countable meaning that you can count off the elements against the set or natural numbers,
    whereas some sets are uncountable meaning that you cannot do this. The set of all real numbers is one example.
- proper subset: A proper subset is a set whose elements are entirely contained by another set and they are not the same set.
    {1, 2} is a proper subset of {1, 2, 3}. This is written as $\subset$.
- Set difference: The difference between two sets is all the elements which are in one set but not in the other.
    e.g. $\{x:x \in A\ \cap \not \in B\}$
- regular languages: A language can be called regular if it can be represented by a regular expression.
    It can also be defined as any language which a finite state machine can be programmed to accept.
- The Turing Machine: A Turing machine consists of an infinitely long piece of tape divided into squares.
    It has a read/write head which can read symbols from the tape ad decide what to do based on the contents
    of the cell and the current state. A Turing machine must have a halting or stop state that causes it to halt
    for some inputs. An example instruction might be 1,1,R which means of reading a 1 write a 1 and move right.
    All transitions for a Turing machine can be represented by a transition function $\delta$.
- The Universal Turing Machine: The universal Turing machine U takes in the instructions of any Turing machine and executes
    them on the data following the instructions on the tape. This can essentially be thought of as an interpreter for Turing machine
    programs.
- Backus-Naur Form: A meta language which can be used to succinctly define syntax for programming languages.
    It is written as LHS ::= RHS, with ::= meaning is defined by. | is a meta symbol meaning OR.
    An example for a digit might be <digit> ::= 0|1|2|3|4|5|6|7|8|9. <digit> is called a meta-component or
    syntactic variable, these are always enclosed in angle brackets. The above 0|1|..|9 definition is known as a production.
    BNF productions can also be recursive, for example a rule for a number might be <number> ::= <digit>|<digit><number>, using
    the production for a digit above.
- Reverse Polish Notation: Postfix notation, the operator goes after the operands. Produces an expression which
    can be evaluated using a stack. Unary minus e.g. -3 + 4 is represented by ~.
- Binary expression tree: A binary tree representing an expression, for example 7 + 10 / 5 would be + as the root node
    followed by seven as the left child and / as the right, then 10 and 5 as the left and right children of / respectively.
- Uniform Resource Locator (URL): The URL is the full address of an internet resource, it specifies the location of a resource
    along with the name and usually the filetype so the browser can go and request it from the destination machine.
- Internet Registrar: The people who keep track of all existing website names and the details of those domain names.
    They must be accredited by a governing registry.
- Internet Registries: five global organisations governed by Internet Corporation for Assigned Names and Numbers (ICANN)
    with worldwise databases that hold records of all the domain names.
- Domain Name System (DNS): The system which keeps track of all the domain names and the IP addresses associated with them.
- Top Level Domain (TLD): The last part of a domain name, often country specific such as .uk, .de etc but can be generic such as
    .com, .edu and .org. Note: Domains below the TLD are notated as <number>LD with <number> being the number of levels down from
    the top. For example www.bbc.co.uk, .co is a 2LD and .bbc is a 3LD.
- Fully Qualified Domain Name (FQDN): A fully qualified domain name is one which the host server name for example
    wwww, mail or ftp . websitename.co.uk. with each one directing to a different resource and defining the protocol to use to
    interact with the server to get the address.
- Packet Switching: A method of communicating packets across a network on which other similar communications are also happening
    simultaneously. Many communications share the same cable making it very efficient compared to the old telephone cable switching
    which required one cable per communication hence necessity for a switch board and switch operators.
- Cyclical Redundancy Checksum (CRC): A checksum added to the trailer of Ethernet frames which acts a method
    for detecting packet corruption.
- Router: A router is used to connect at least two networks commonly two LANs or WANs. The act of traversing across a router
    is known as a hop. The job of a router is to receive a packet, determine the destination address and then determine the
    fastest and least congested route to that destination.
- Gateway: The same as a router except where the networks do not share protocols. It strips off the old header and feeds the
    information into a new header of the same format of the new network's protocol and forwards it on.
- Firewalls: Often a separate machine with two NICs traffic passing between the two NICs is analysed against a set of rules.
    It is then accepted or rejected based on the rules.
- Packet Filters: The rules a firewall uses to determine whether to allow a packet through.
- Stateful Inspection: This involves examining the contents of the packet to determine whether to let it through.
- Proxy Servers: A proxy server intercepts all packets entering and leaving the network, hiding the true network addresses
    of the clients. It can also be used to provide a filter blocking inappropriate content as well as loggin user details/activity.
- Digital Signatures: The data to be sent is hashed and then encrypted with the sender's private key such that anyone can then
    decrypt the signature and recalculate the hash value to verify that the data definitely came from the sender as only they
    could have encrypted the signature with their private key.
- Digital Certificates: These are issued by Certificate Authorities (CAs) and verifies the trustworthiness of a message
    sender or website.
- Virus: A class malware which can self replicate to spread itself. Viruses normally require an executable program to be
    run on the host in order to spread.
- Worms: Worms are a subclass of Virus which can replicate itself without any user intervention.
- Trojans: Malware which pretends to be a useful file but is in fact malware.
- Application layer: Sits at the top of the stack and uses protocols relating to the application being used to transit data over
    the network. e.g. HTTP, POP3 and FTP.
- Transport layer: Uses TCP to establish an end to end communication with the recipient computer.
- Network Layer: Adds the source and destination IP addresses
- Link layer: Adds the source and destination MAC addresses.
- Common port numbers: -  20: FTP data
                       -  21: FTP control messages
                       -  22: SSH
                       -  23: Telnet
                       -  25: SMTP
                       -  80: HTTP
                       -  8080: HTTP
                       -  110: POP3
                       -  143: IMAP
                       -  443: HTTPS
- File Transfer Protocol (FTP): Used to transfer files across a network. Users interact with an FTP client which negotiates
    the session and allows the user to issue commands to the FTP server. Most servers require authentication but some are
    anonymous. Some example FTP commands are LIST to list the current directory, PWD to print the working directory,
    CDUP to change directory UP i.e. to parent directory and PASV to enter passive mode.
- Document Object Model (DOM): This is how HTML is rendered, it is broken down into a hierarchy of tags and rendered accordingly.
    CSS also has the CSSOM for rendering CSS.
- IP addressing: IP addressing can be either classful or classless, classful is the class A/B/C traditional subnets and
    classless is what CIDR is for with specifying an arbitrary number of network bits.
- Network Address Translation: You cannot route private IP addresses therefore the router performs NAT to allow you to communicate
    with the server. This is where the router swaps your packet's IP address with it's own and swaps the port number with a unique one
    before storing the relationship between the port number it opened and your IP address and port in a transition table.
    While the connection continues the router will continue to swap between these with incoming packets to that port being routed
    to your machine.
- Port forwarding: Where routers can be instructed to pass all communications with a certain port on to a certain private
    IP address inside your network.
- Application Programming Interface (API): An API is a set of protocols which define how two applications should interact with each
    other. It sets out a format for requests and for responses between the client and the server. This also enables people to use
    the services provided by others by communicating with their API.
- WebSocket: A protocol enabling full duplex connections between a client and a server to increase the data transfer rate between
    them. It works by keeping a single TCP socket open and passing all messages through it, allowing the client and server
    to continuosly communicate without needing to establish a new TCP connection every time.
- CRUD: Create Retrieve Update Delete. HTTP methods: POST GET PUT DELETE.
- Representational State Transfer (REST): A style of system design where database interactions are done via HTTP request methods.
    RESTful APIs will often return JSON or XML as a response containing the data.
- Thin Client Computing: Easy to set up and maintain, software/updates can be installed automatically, more secure because of
    central data storage. However it is reliant on the server which means it must be powerful and therefore expensive. Requires
    a much larger internet bandwidth. Can cause a large drain on mobile applications batteries.
- Thick Client Computing: Reliable/greater uptime, no need for a continuous connection to the server, can run more powerful
    software applications. However it is more expensive, as the clients need to have more processing power and software/updates
    have to be done on a terminal by terminal basis and distributed data is not always up to date because of many copies of the data.
- Entity (databases): An entity is a category of object, person, event or thing of interest to an organisation about which data is
    stored. Each entity in a database has attributes which are written: Entity(attr1, attr2, ...).
    Entities also need to have an identifier which is the primary key of that table.
- Relationships (databases): A relationship is where the entities in two tables share attributes, if one of these attributes
    is the key in another table this is known as a foreign key. Relationships can be one to one, one to many and many to many.
    In the case of many to many relationships linking tables requires an extra table to store the attributes which are linked to both
    tables. This new table will often have a composite primary key, meaning that two or more of the attributes in the entity
    make up the primary key.
- Normalisation (databases): Normalisation is a process to come up with the best possible design for a relational database.
    Tables are organised such that: no data is unnecessarily duplicated, data is consistent throughout the database,
    the structure of each table is flexible enough to allow you to enter as many or as few items, as required.
    The structure should enable complex querys to be made with data gathered from different tables.
- Link Table: A table used to link two attributes which have a many to many relationship with each other.
    e.g. A (many) - (many) B would go to: A (one) - (many) Link (many) - (one) B.
    This will be composed of often two+ foreign keys composing a composite primary key and then any additional needed attributes.
- First Normal Form (1NF): A table is in 1NF if it contains no repeating attribute or groups attributes.
    This can be done using a link table as described earlier.
- Second Normal Form (2NF): A table is in 2NF if it contains no partial key dependencies. A partial key dependency is where
    the primary key is composite and some elements depend only on one of the keys.
    e.g. a table of school sports events might have the year and the eventID as a composite primary key, the name of the event
    might also be stored, however this might introduce a partial key depenency as the event name will only depend on the eventID
    and not the year of the event.
- Third Normal Form (3NF): A table is in third normal form if it has no none-key dependencies.
- Structured Query Language (SQL): Is a declarative language which is used for querying and updating relational databases.
    It can also create tables. Sorting order can be specified using ORDER BY then the name of the fields you want to sort by.
    The sorting will be done firstly on the basis of the first field then on the next field listed etc. For later
    sorts to affect the order of elements they must compare equal under previous sorts.
    data can be extracted from several tables by simply listing multiple tables in the FROM clause.
- Record Locks: Record locking is the technique of preventing simultaneous access to objects in a database,
    in order to prevent records being lost or inconsistencies, however this can result in deadlock where two
    conflicting locks are preventing each other from doing anything.
- Serialisation (databases): Serialisation is a technique which ensures that transactions do not overlap in time
    and can be accomplished using timestamp ordering.
- Timestamp ordering: when a transaction starts it is given a timestamp so that if two transactions affect the same object then earlier
    timestamp should be applied first. Every object in a database has a read and write timestamp which are updated when an object is
    read or written. When a transaction starts it reads the data, when it goes to write the data it will check the read timestamp to see
    if it has changed, this allows it to know if another transaction is going on at the same time. This allows problems involving
    inconsistent data to be avoided.
- Commitment ordering: Another serialisation technique which also uses timestamps but as well takes into consideration the dependencies
    that transactions have on each other, thus deadlock can be avoided by blocking on transaction until the other has finished.
- Agile development: Software development need not be done linearly in terms of each step, as such agile development seeks to do
    the minimum planning and keep development close to the user's requirements with early ad frequent releases allowing for lots of user
    feedback to change the final product.
- Procedural Programming: In this method of programming data is head in separate primitive variables such as int or char,
    and data structures such as arrays. The data can be accessible by all procedures in a program - global - or by only the current
    procudure - local.
- Object Oriented Programming (OOP): Everything is an object, objects hold data and the objects present methods which act on that data.
    Objects all have attributes, state and behaviours. behaviours are the functions which act on the data, attributes define what
    the data stored by the object is, state *is* the data stored by the object. Classes are like the blueprints for how to create
    an object. Instantiation is the creation of an object. Encapsulation is where an object holds both its state and the
    behaviours for acting on the state. Classes can inheirit from other classes and gain there methods.
    Association between classes is where they have a relationship between them e.g. a teacher class might have a relationship
    to a student class but they are seperate classes. Aggregation is where a class is a collection or container of other classes
    for example a team class might be a container for the player class. Composition is a stronger form of association where
    every instance of the composing class dies when the parent dies, for example a room class composing a hotel class.
    Polymorphism refers to a programming language's ability to process object differently based on their class, for example
    and animal class might have an eat method but each animal will eat with a different eat method. Composition is generally
    favoured over inheiritance because it is a weaker relationship and often more representative of the concept being represented.
    Public methods are available to all instances of a class and by reference to a class. Protected methods are only
    available to subclasses or to classes in the same package. Private methods are only available to the defined class.
    Advantages include: forcing a longer design which leads to better designed code, encapsulation leads to easy testing,
    information hiding, easy creation of objects, reusability, easier maintenance due to increased modularity.
- Functional Programming: Everything is a function, functions map the domain (input) to the co-domain (output) and functions
    can be composed ($f(x) -> x^2, g(x) -> 2x, f . g (x) -> (2x)^2$) which is a powerful way of solving problems. 
    Functional languages are often stateless meaning there are no variables and everything is a constant, this eliminates
    accidental side effects. Functions are first class objects. 
- First class objects: any object which may appear in expressions, be assigned to a variable,
    be passed as an argument, be returned in a function call. 
- Types: Sets of values.
- Type Classes: Sets of types.
- Higher order functions: functions which take a function as an argument or returns a function.
- Function application (Haskell): take for example f 1 2 3, it looks like f takes 3 parameters but in fact it takes one parameter
    and returns a function which takes the next parameter, this continues until the final function is returned which will pass on the
    value of f 1 2 3 when put into a variable or onto another function.
- Partial Functions: when a function is called with only one argument it will return a function which will take the remaining arguments
    and apply them as if the original function was called with all the arguments.
- Lists (Functional Programming): lists are represented as a head concatenated to a tail, the head is an element and the tail is a list.
    The cons operator can be used to prepend to a list it works like this: 5:[1,2,3] -> [5,1,2,3]. The concatenate operator is ++.
    It works as so: [1,2,3] ++ [5] -> [1,2,3,5], [5] ++ [1,2,3] -> [5,1,2,3].
- Fact based model (databases): The fact based model is where immutable facts are recorded with timestamps as such it makes it easy
    to track the changes in data over time however this does lead to very large quantities of data as none of it is ever deleted.
- Graph schema (databases): instead of the usual relational schema for databases highly connected databases such as the ones run by
    social networks often use graph based schema which allow querying the graph with tools like graphql. With data being stored as
    nodes and relations in a graph.
- D-type flip flop: used to store one bit and can only be changed at the beginning of a clock cycle because it is a positive edge-
    triggered flip-flop. Meaning that it will hold the value of the input D until the next clock cycle where it will continue to hold
    D if it is unchanged. These can be used as memory.
