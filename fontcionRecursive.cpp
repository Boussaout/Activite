int produitRecursif(int n1, int n2){
	return (n1 == 0 || n2 == 0) ? 0 : produitRecursif(n1, n2 - 1) + n1;
}
