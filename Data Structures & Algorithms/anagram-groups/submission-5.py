class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        counts = {}

        for s in strs:
            key = "".join(sorted(s)) 
            #list of letter sorted, then append into a string again.
            if key not in counts:
                counts[key] = []

            counts[key].append(s) 
        
        return list(counts.values())
