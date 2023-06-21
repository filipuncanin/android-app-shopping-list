package filip.uncanin.shoppinglist;

public class JNIExample {
    static {
        System.loadLibrary("MyLibrary");
    }

    public native boolean increment(String x);
}
