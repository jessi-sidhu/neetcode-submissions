class Solution {
    public boolean isPalindrome(String s) {

        String string = "";

        for (char c: s.toCharArray()) {
            if (Character.isDigit(c) || Character.isLetter(c)) {
                string += c;
            }
        }

        string = string.toLowerCase();

        int left = 0;
        int right = string.length() - 1;

        while (left <= right) {
            if (string.charAt(right) != string.charAt(left)) {
                return false;
            }

            left++;
            right--;
        }

        return true;


    }
}
