//
//  ToDoItem.h
//  ToDoList
//
//  Created by Jia Yang on 1/21/14.
//
//

#import <Foundation/Foundation.h>



@interface ToDoItem : NSObject


@property NSString  *itemName;
@property BOOL  completed;
@property (readonly)NSDate *creationDate;

@end
