
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library content.
INCLUDE_DIRECTORIES(${Content_SOURCE_DIR}/include)

# Add binary called "testcontent" that is built from the source file "MiniDuckSimulator.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testcontent MiniDuckSimulator)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testcontent
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library content.
TARGET_LINK_LIBRARIES(testcontent content)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testcontent duck duckadapter mallardduck turkey turkeyadapter wildturkey)

