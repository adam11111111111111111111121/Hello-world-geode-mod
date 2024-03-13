# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-src"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-build"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src"
  "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
