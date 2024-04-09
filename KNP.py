# time O(n+m) n = haystack, m = needle
class Solution:
    def strStr(self, haystack: str, needle : str):
        if needle == "": return 0
        lps = [0] * len(needle);
        # first value for the first alphabet in LPS will always be zero
        # then "i" should starts at 1
        prevLPS , i = 0, 1


        # building lps
        # needle = A A A C A A A A
        # lps =   [0,1,2,0,1,2,3,3]
        while i < len(needle):
            if needle[i] == needle[prevLPS]:
                lps[i] = prevLPS + 1
                prevLPS += 1
                i += 1
            elif prevLPS == 0:
                # needle = AB , LPS = [0,0]
                lps[i] = 0
                i+= 1

            else:
                prevLPS = lps[prevLPS - 1]

        i = 0  # ptr for haystack
        j = 0 # ptr for needle
        while i < len(haystack):
            if haystack[i] == needle[j]:
                i, j = i+1, j+1
            else:
                if j == 0: # if we are at the beginnign of the needle
                    i += 1
                else:
                    j = lps[j - 1]
            if j == len(needle):
                i -= len(needle)
                return i
        return -1
