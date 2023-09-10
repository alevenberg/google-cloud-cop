cmake -B build -S . -GNinja
cmake -B build --graphviz=graph/build_graph.dot 
dot -Tpng graph/build_graph.dot -o graph/build_graph.png