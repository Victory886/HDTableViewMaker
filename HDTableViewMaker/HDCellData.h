//
//  HDCellData.h
//  CBTableViewDataSourceDemo
//
//  Created by 洪东 on 7/15/16.
//  Copyright © 2016 Cocbin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HDCellRegisterType) {
    HDCellRegisterTypeClass          = 0,
    HDCellRegisterTypeXib     = 1,
};

typedef CGFloat (^RowHeightBlock)(NSIndexPath *indexPath);
typedef void (^CellAdapterBlock)(__kindof UITableViewCell *cell,id data,NSIndexPath *indexPath);
typedef void (^CellEventBlock)(UITableView *tableView, NSIndexPath *indexPath,id data);

@interface HDCellData : NSObject

@property(nonatomic, weak) UITableView * tableView;


@property (nonatomic, assign) id data;

@property (nonatomic, copy)  RowHeightBlock rowHeightBlock;

@property (nonatomic, assign) CGFloat rowHeight;

@property (nonatomic, assign) HDCellRegisterType cellRegisterType;

@property(nonatomic, strong) Class cell;
@property (nonatomic, strong) NSString *cellIdentifier;
@property(nonatomic, copy) CellAdapterBlock adapter;
@property(nonatomic, copy) CellEventBlock event;

@property (nonatomic, strong) NSIndexPath *indexPath;

@property(nonatomic, assign) BOOL isAutoHeight;

-(UITableViewCell *)getReturnCell;

@end
