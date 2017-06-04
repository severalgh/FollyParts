# Why?

Folly's scope guard is usefull, but I don't want to deal with whole library when I only need this one module.
 
# What is diffrent

Building is simplify to just 'make'. 
Some headers are merged or removed in order to minimaze files number.

# What I didn't change

Unit tests. Module needs to keep exact same mechanics as in folly library, 
so I make sure, that unit tests in unchanged form, passes.

# Build

Linux only. You need: 
* g++ with c++14 support
* ar to pack library.

````
$ git clone https://github.com/severalgh/FollyScopeGuard.git
$ cd FollyScopeGuard
$ make
````

Build result under dist/release.

For debug:

````
$ git clone https://github.com/severalgh/FollyScopeGuard.git
$ cd FollyScopeGuard
$ make debug
````

Build result under dist/debug.

Run unit tests:

````
$ cd FollyScopeGuard
$ make && make test
````


