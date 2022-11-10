int main() {
	void* vp;
	char c;
	int i;
	float f;
	double d;
	vp = &c;
	vp = &i;
	vp = &f;
	vp = &d;//void指针可以被任意类型间接引用，但在引用后会丢失类型信息
}