class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counts = {}

        for i in range(len(nums)):
            counts[nums[i]] = 1 + counts.get(nums[i], 0)
            
        return sorted(counts, key=counts.get, reverse=True)[:k]