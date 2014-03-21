//
//  RBSMultiProductViewController.h
//  MultiProductViewer
//
//  Created by JN on 2014-3-19.
//  Copyright (c) 2014 Rebisoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>

@protocol RBSMultiProductViewControllerDelegate;

@interface RBSMultiProductViewController : UICollectionViewController

@property (copy, nonatomic) NSArray *productClusters;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id <RBSMultiProductViewControllerDelegate> delegate;

+ (void)runWithTitle:(NSString *)title
     productClusters:(NSArray *)clusters
            delegate:(id <RBSMultiProductViewControllerDelegate>)delegate;

@end

@protocol RBSMultiProductViewControllerDelegate <SKStoreProductViewControllerDelegate>

// Sent if the user requests that the page be dismissed
- (void)multiProductViewControllerDidFinish:(RBSMultiProductViewController *)viewController;

@end