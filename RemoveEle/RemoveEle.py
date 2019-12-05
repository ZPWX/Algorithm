def removeEle(self,nums,val):
	i = 0
	for j in range(0,len(nums)):
		if nums[j] != val:
			nums[i] = nums[j]
			i += 1
	return i
print(removeEle([3,2,2,3],3))