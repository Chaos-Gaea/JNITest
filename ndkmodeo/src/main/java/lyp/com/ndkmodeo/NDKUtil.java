package lyp.com.ndkmodeo;

/**
 * Created by lyp on 2019/3/8.
 */

public class NDKUtil {
    public native String SaySometing();

    static {
        System.loadLibrary("NDKdemo");
    }
}
