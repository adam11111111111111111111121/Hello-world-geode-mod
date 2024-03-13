# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-src"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-build"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
