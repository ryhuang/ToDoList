//
//  EditableCell.h
//  ToDoList
//
//  Created by Richard Huang on 10/15/13.
//  Copyright (c) 2013 Huang Corp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditableCell : UITableViewCell

@property (nonatomic) BOOL showsReorderControl;
@property (nonatomic, weak) IBOutlet UITextField *itemTextField;

@end
