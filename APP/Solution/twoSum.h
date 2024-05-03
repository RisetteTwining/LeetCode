/*-----------------------------------------------------------------------------------------
**
** Copyright: Juliana, 2024~
**
** Filename: twoSum.h
**
** Description: This File is used to solve LeetCode No.1
**
** Design Annotation:
**
** Author:
**		Juliana, start writing this file in May 2024
**
** Modification History:
**		May 3rd 2024, create this file
**		$Revision$
**		$Date$
**		$Author$
**		$Log$
**
**-----------------------------------------------------------------------------------------
*/
#ifndef _TWOSUM_H_
#define _TWOSUM_H_

/*-----------------------------------------------------------------------------------------
**										  Include
**-----------------------------------------------------------------------------------------
*/
#include "global.h"

/*-----------------------------------------------------------------------------------------
**									Question Description
**-----------------------------------------------------------------------------------------
*/
/*-----------------------------------------------------------------------------------------
**
** Given an array of integer nums and an integer target, return indices of the two numbers
** such that they add up to the target.You can return the answer in any order.
** 
** Example 1:
** Input: nums = [2, 7, 11, 15], target = 9
** Output: [0, 1]
** Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
**
** Example 2:
** Input: nums = [3, 2, 4], target = 6
** Output: [1, 2]
** 
** Example 3:
** Input: nums = [3, 3], target = 6
** Output: [0, 1]
** 
**-----------------------------------------------------------------------------------------
*/

namespace TwoSum
{
	/*-----------------------------------------------------------------------------------------
	**								      Class Definition
	**-----------------------------------------------------------------------------------------
	*/
	class Solution
	{
	public:
		/*-----------------------------------------------------------------------------------------
		**									Function Definition
		**-----------------------------------------------------------------------------------------
		*/
		/*.BH--------------------------------------------------------------------------------------
		**
		** Function Name: twoSum
		**
		** Description: This function is used to solve LeetCode No.1
		**
		** Input Parameter:
		**		nums, vector<int>
		**		target, int
		**
		** Output Parameter:
		**
		** Return Value:
		**		ans, vector<int>
		**
		** Design Annotation:
		**
		** Modification History:
		**		May 3rd 2024, create this function
		**
		**.EH--------------------------------------------------------------------------------------
		*/
		static vector<int> twoSum(vector<int>& nums, int target)
		{
			map<int, int> nums_map;
			vector<int> ans;

			for (int index = 0; index < (int)nums.size(); ++index)
			{
				if (nums_map.count(target - nums[index]) == 0)
				{
					nums_map[nums[index]] = index;
				}
				else
				{
					ans.push_back(nums_map[target - nums[index]]);
					ans.push_back(index);
				}
			}

			return ans;
		}
		/* END of twoSum */

		/*.BH--------------------------------------------------------------------------------------
		**
		** Function Name: test
		**
		** Description: This function is used to test solution
		**
		** Input Parameter:
		**
		** Output Parameter:
		**
		** Return Value:
		**
		** Design Annotation:
		**
		** Modification History:
		**		May 3rd 2024, create this function
		**
		**.EH--------------------------------------------------------------------------------------
		*/
		static void test()
		{
			vector<int> nums1 = { 2, 7, 11, 15 }; int target1 = 9;
			vector<int> nums2 = { 3, 2, 4 }; int target2 = 6;
			vector<int> nums3 = { 3, 3 }; int target3 = 6;
			vector<int> output1, output2, output3;

			output1 = twoSum(nums1, target1);
			output2 = twoSum(nums2, target2);
			output3 = twoSum(nums3, target3);

			outputVector(output1);
			outputVector(output2);
			outputVector(output3);
		}
		/* END of test */
	};
}

#endif // _TWOSUM_H_
