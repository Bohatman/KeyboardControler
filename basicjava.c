#include <Keyboard.h> 
/*
 * Developer @root_haxor !
 */

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad");

  delay(500);
  typeKey(KEY_RETURN);
  delay(750);

  Keyboard.print("public class uoioooowewe{");
  Keyboard.print("public static void main(String args[]){");
  Keyboard.print("System.out.println(\"Hello\");");
  Keyboard.print("}");
  Keyboard.print("}");
  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(115);
  Keyboard.releaseAll();
  delay(500);
  for(int i = 0;i<7;i++){
  typeKey(KEY_TAB);
  delay(50);
  }
  typeKey(KEY_RETURN);
  Keyboard.print("c:");
  typeKey(KEY_RETURN);
  for(int i = 0;i<2;i++){
  typeKey(KEY_TAB);
  delay(50);
  }
  delay(500);
  typeKey(KEY_RIGHT_ARROW);
  Keyboard.print(" "); 
  delay(500);
  Keyboard.print("hirops24"); 
  typeKey(KEY_RETURN);
  delay(500);
  typeKey(KEY_RETURN);
  
  for(int i = 0;i<2;i++){
  typeKey(KEY_TAB);
  delay(50);
  }
  Keyboard.print("uoioooowewe.java");
  typeKey(KEY_RETURN);
  
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);
  

  
  Keyboard.print("cmd");
  delay(500);
  typeKey(KEY_RETURN);
  delay(750);
  
  Keyboard.print("cd /");
  typeKey(KEY_RETURN);
  delay(150);
  Keyboard.print("cd hirops24");
  typeKey(KEY_RETURN);
  delay(150);
  Keyboard.print("javac uoioooowewe.java");
  typeKey(KEY_RETURN);
  delay(700);
  Keyboard.print("java -cp . uoioooowewe");
  typeKey(KEY_RETURN);
  delay(150);
  
  Keyboard.print("cd ..");
  typeKey(KEY_RETURN);
  delay(150);
  
  Keyboard.print("del hirops24");
  typeKey(KEY_RETURN);
  delay(150);
  delay(550);
  Keyboard.print("y");
  typeKey(KEY_RETURN);
  delay(150);
  
  Keyboard.print("rmdir hirops24");
  typeKey(KEY_RETURN);
  delay(150);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(500);
  
  }
void callCmd(){
    
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd");
  delay(500);
  typeKey(KEY_RETURN);
  delay(750);
  }
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
