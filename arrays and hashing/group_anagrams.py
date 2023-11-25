class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        freq = defaultdict(list)
        for ele in strs:
            srtd = ''.join(sorted(ele))
            freq[srtd].append(ele)
        return list(freq.values())