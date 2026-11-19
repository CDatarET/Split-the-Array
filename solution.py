class Solution:
    def isPossibleToSplit(self, nums: List[int]) -> bool:
        d = {}
        for n in nums:
            if n in d:
                d[n] += 1
            else:
                d[n] = 1
            
            if d[n] == 3:
                return False
        
        return True
