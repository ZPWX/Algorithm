### Maximum Subarray Array
>暴力法
  * 直接求解A[1...j]的值；
  * 依次循环0 < i < n 
  * 循环 i < j < n
  * i, i+1....,j-1,j 的最大长度为n
  * 复杂度：O(n^3)
  
  
 >分治法
  * 二分数组为两子数组
  * 若最大连续子数组落在左右数组上，使用递归算法解决
  * 若最大连续子数组落在跨立在分界点上
  * 左数组的最大后缀和右数组的最大前缀的和。因此从分界点向前扫，或者向后扫即可。
  
  >动态规划
   * 待解决