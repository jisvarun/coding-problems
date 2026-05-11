class RemoveVowels{
  public static void main(String[] args){
    String text = "Hello Java";
    String result = text.replaceAll("[aeiouAEIO]", "");

    System.out.println(result);
  }
}