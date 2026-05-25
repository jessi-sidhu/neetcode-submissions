class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, ArrayList<String>> groups = new HashMap<>(); // arraylist for dynamic length

        for (String s: strs) {
            char[] chars = s.toCharArray(); // convert string into array of chars
            Arrays.sort(chars); // sorts array in alphabetical order
            String key = new String(chars); // convert into string

            ArrayList<String> values = groups.getOrDefault(key, new ArrayList<>());
            values.add(s);

            groups.put(key, values);
        }

        return new ArrayList<>(groups.values()); // create array of collection of values

    }
}
