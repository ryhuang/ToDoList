//
//  ItemList.m
//  ToDoList
//
//  Created by Richard Huang on 10/16/13.
//  Copyright (c) 2013 Huang Corp. All rights reserved.
//

#import "ItemList.h"

@interface ItemList()

@property (strong, nonatomic) NSMutableArray *items;
@end

@implementation ItemList

- (NSMutableArray *)items
{
    if (!_items) _items = [[NSMutableArray alloc] init];
    return _items;
}

- (EditableCell *)addItem{
    EditableCell *item = [[EditableCell alloc] init];
    [self.items insertObject:item atIndex:0];
    return item;
}

- (void)deleteItem:(NSUInteger)index {
    [self.items removeObjectAtIndex:index];
}

- (NSInteger)count {
    return [self.items count];
}

@end
