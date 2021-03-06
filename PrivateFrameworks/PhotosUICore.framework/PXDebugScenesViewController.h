/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugScenesViewController : UITableViewController {
    NSArray * _sceneCollectionItems;
}

@property (nonatomic, retain) NSArray *sceneCollectionItems;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_assetsWithSceneIdentifier:(id)arg1;
- (id)_fetchAssetsWithSceneIdentifier:(id)arg1;
- (void)_fetchScenes;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)sceneCollectionItems;
- (void)setSceneCollectionItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;

@end
