/*-----------------------------------------------------------------------------------------
**
** Copyright: Juliana, 2024~
**
** Filename: global.h
**
** Description: This File defines some global functions
** 
** Design Annotation:
**
** Author:
**		Juliana, start writing this file in May 2024
** 
** Modification History:
**		May 2nd 2024, create this file
**		$Revision$	
**		$Date$
**		$Author$
**		$Log$
** 
**-----------------------------------------------------------------------------------------
*/
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

/*-----------------------------------------------------------------------------------------
**										  Include 
**-----------------------------------------------------------------------------------------
*/
#include <map>
#include <queue>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*-----------------------------------------------------------------------------------------
**									Function Definition
**-----------------------------------------------------------------------------------------
*/
/*.BH--------------------------------------------------------------------------------------
**
** Function Name: outputVector
**
** Description: This function is used to output integer vector
**
** Input Parameter:
**		nums, vector<int>
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
void outputVector(vector<int> nums)
{
	cout << "[";
	for (int index = 0; index < (int)nums.size(); ++index)
	{
		cout << nums[index];
		if (index < (int)nums.size() - 1)
		{
			cout << ",";
		}
	}
	cout << "]" << endl;
}
/* END of outputVector */

#endif // _GLOBAL_H_