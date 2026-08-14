public class StringOperations {
    public static void main(String[] args) {
        String s1 = "Java Programming";
        String s2 = "Language";
        System.out.println("Original String 1: " + s1);
        System.out.println("Original String 2: " + s2);
        System.out.println("\nLength: " + s1.length());
        System.out.println("Concatenation: " + s1.concat(" " + s2));
        System.out.println("CompareTo: " + s1.compareTo(s2));
        System.out.println("Equals: " + s1.equals(s2));
        System.out.println("Equals Ignore Case: " + s1.equalsIgnoreCase("java programming"));
        System.out.println("Uppercase: " + s1.toUpperCase());
        System.out.println("Lowercase: " + s1.toLowerCase());
        System.out.println("Character at Index 5: " + s1.charAt(5));
        System.out.println("Substring (5): " + s1.substring(5));
        System.out.println("Substring (0,4): " + s1.substring(0,4));
        System.out.println("Replace: " + s1.replace('a', '@'));
        System.out.println("StartsWith Java: " + s1.startsWith("Java"));
        System.out.println("EndsWith ming: " + s1.endsWith("ming"));
        System.out.println("Index of 'P': " + s1.indexOf('P'));
        System.out.println("Last Index of 'a': " + s1.lastIndexOf('a'));
        System.out.println("Contains 'Program': " + s1.contains("Program"));
        String s3 = "   Hello Java   ";
        System.out.println("Before Trim: '" + s3 + "'");
        System.out.println("After Trim: '" + s3.trim() + "'");
        String[] words = s1.split(" ");
        System.out.println("\nSplit Words:");
        for(String word : words){
            System.out.println(word);
        }
        String reverse = "";
        for(int i = s1.length()-1; i>=0; i--){
            reverse += s1.charAt(i);
        }
        System.out.println("\nReversed String: " + reverse);
    }
}