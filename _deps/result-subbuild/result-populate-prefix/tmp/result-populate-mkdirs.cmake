# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/user/Mygeode-sdk/helloworld/_deps/result-src"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-build"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/tmp"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/src"
  "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/user/Mygeode-sdk/helloworld/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
