while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p--] = nums1[p1--];
        } else {
            nums1[p--] = nums2[p2--];
        }
    }
    
    // If there are remaining elements in nums2
    while (p2 >= 0) {
        nums1[p--] = nums2[p2--];
  }
