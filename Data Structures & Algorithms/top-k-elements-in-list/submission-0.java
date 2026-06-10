class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> freqmap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int key = nums[i];
            freqmap.merge(key, 1, Integer::sum);
        }

        PriorityQueue<int[]> heap = new PriorityQueue<>((a, b) -> a[1] - b[1]);

        for (Map.Entry<Integer, Integer> entry : freqmap.entrySet()) {
            heap.add(new int[]{entry.getKey(), entry.getValue()});
            if (heap.size() > k) heap.poll();
        }

        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = heap.poll()[0];
        }
        return result;
    }
}
