class main{
	public native void fibonacci();

	public static void main(String args[])
	{
		main a = new main();
		a.fibonacci();
	}

	static{
		System.loadLibrary("fibonacci");
	}
}