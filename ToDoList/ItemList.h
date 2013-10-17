//
//  ItemList.h
//  ToDoList
//
//  Created by Richard Huang on 10/16/13.
//  Copyright (c) 2013 Huang Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EditableCell.h"

@interface ItemList : NSObject

- (EditableCell *)addItem;
- (void)deleteItem:(NSUInteger)index;
- (NSInteger)count;

@end
