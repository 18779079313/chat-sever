FILE(REMOVE_RECURSE
  "CMakeFiles/MyProject.dir/main.cpp.o"
  "MyProject.pdb"
  "MyProject"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/MyProject.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
