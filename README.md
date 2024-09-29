<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>Minitalk: A Client-Server Communication Project</h1>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#project-instructions">Project Instructions</a></li>
    <li><a href="#mandatory-part">Mandatory Part</a></li>
    <li><a href="#functions">Functions</a></li>
    <li><a href="#bonus-part">Bonus Part</a></li>
    <li><a href="#makefile">Makefile</a></li>
    <li><a href="#conclusion">Conclusion</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
<p>
    This project involves creating a client-server communication system using UNIX signals. The aim is to send messages from a client to a server, ensuring robust error handling and efficient processing.
</p>

<h2 id="project-instructions">Project Instructions</h2>
<ul>
    <li><strong>Executable Files:</strong> Name your executable files <code>client</code> and <code>server</code>.</li>
    <li><strong>Makefile:</strong> You must turn in a <code>Makefile</code> that compiles your source files. It must not relink.</li>
    <li><strong>Libft Usage:</strong> You can definitely use your <code>libft</code>.</li>
    <li><strong>Error Handling:</strong> Handle errors thoroughly; your program should not quit unexpectedly (e.g., segmentation fault, bus error, double free).</li>
    <li><strong>Memory Leaks:</strong> Your program must not have memory leaks.</li>
    <li><strong>Global Variables:</strong> You can have one global variable per program (one for the client and one for the server), but you will have to justify their use.</li>
</ul>
<p>
    To complete the mandatory part, you are allowed to use the following functions:
</p>
<ul>
    <li><code>write</code></li>
    <li><code>ft_printf</code> and any equivalent you coded</li>
    <li><code>signal</code></li>
    <li><code>sigemptyset</code></li>
    <li><code>sigaddset</code></li>
    <li><code>sigaction</code></li>
    <li><code>kill</code></li>
    <li><code>getpid</code></li>
    <li><code>malloc</code></li>
    <li><code>free</code></li>
    <li><code>pause</code></li>
    <li><code>sleep</code></li>
    <li><code>usleep</code></li>
    <li><code>exit</code></li>
</ul>

<h2 id="mandatory-part">Mandatory Part</h2>
<p>
    You must create a communication program in the form of a client and a server.
</p>
<ul>
    <li>The server must be started first and print its PID after launch.</li>
    <li>The client takes two parameters:
        <ul>
            <li>The server PID.</li>
            <li>The string to send.</li>
        </ul>
    </li>
    <li>The client must send the string passed as a parameter to the server. Once received, the server must print the string.</li>
    <li>The server should display the string quickly; displaying 100 characters in 1 second is too slow!</li>
    <li>Your server should be able to receive strings from several clients in a row without needing to restart.</li>
    <li>Communication must be done using UNIX signals only, specifically <code>SIGUSR1</code> and <code>SIGUSR2</code>.</li>
    <li>Note: Linux does NOT queue signals when you already have pending signals of this type!</li>
</ul>

<h2 id="functions">Functions</h2>
<p>
    Make sure to implement robust error handling and memory management throughout your client and server code.
</p>

<h2 id="bonus-part">Bonus Part</h2>
<p>
    Completing the bonus part is optional and will only be assessed if the mandatory part is perfect. The bonus list includes:
</p>
<ul>
    <li>The server acknowledges every message received by sending back a signal to the client.</li>
    <li>Support for Unicode characters!</li>
</ul>
<p>
    The bonus part will only be evaluated if the mandatory part has been integrally completed and functions correctly without malfunctions.
</p>

<h2 id="makefile">Makefile</h2>
<p>
    Ensure your <code>Makefile</code> includes the necessary rules to compile both the client and server, while avoiding unnecessary relinking.
</p>

<h2 id="conclusion">Conclusion</h2>
<p>
    The client-server communication project provides a practical exercise in handling signals and inter-process communication. By adhering to the specified requirements, you will gain valuable experience in C programming, error handling, and memory management.
</p>

</body>
</html>
