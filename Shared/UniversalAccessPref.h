//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PreferencePanes/PreferencePanes.h>


@class UniversalAccessPref, UAPOptionsViewController, NSPreference, NSPrefPanesCenter;

// @interface UniversalAccessPref : NSPreference <NSTabViewDelegate, NSTableViewDataSource>
@interface UniversalAccessPref : NSPreferencePane <NSTabViewDelegate, NSTableViewDataSource>
{
    NSTableView *_featureTable;
    NSView *_optionsViewHolder;
    NSView *_boxView;
    NSButton *_showUAMenuExtraCheckbox;
    NSLayoutConstraint *_sidebarLeading;
    NSLayoutConstraint *_sidebarWidth;
    NSLayoutConstraint *_sidebarOptionsViewHolderSpacing;
    NSLayoutConstraint *_optionsViewHolderWidth;
    NSLayoutConstraint *_optionsViewHolderTrailing;
    NSMutableArray *_featureTableContents;
    NSMutableDictionary *_paneControllers;
    UAPOptionsViewController *_currentController;
    NSDictionary *_searchTermToFeature;
    NSDictionary *_featureToHelpAnchor;
    NSPrefPanesCenter *_prefPanesCenter;
    BOOL _didAwakeFromNib;
}

- (void)dealloc;
- (void)finalize;
- (void)showUAMenuExtra:(id)arg1;
- (id)_menuExtraBundle;
- (BOOL)_menuExtraActive;
- (void)_menuExtraUpdateStatus;
- (void)_cleanupBeforeDeallocUniversalAccessPref;
- (void)showHelp:(id)arg1;
- (void)revealElementForKey:(id)arg1;
- (void)handleOpenParameter:(const struct AEDesc *)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (id)preferenceManager;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)_viewControllerForEntity:(id)arg1;
- (void)applyMacManagerSettings;
- (void)_applyMCXSettings:(id)arg1;
- (void)mainViewDidLoad;
- (void)willUnselect;
- (void)willSelect;
- (void)_sortViews;
- (void)_updateTree;
- (void)awakeFromNib;
- (long long)_columnWidth;
- (void)_initializeLookupTables;
- (void)_selectRowForFeatureID:(int)arg1;
- (void)_createTableModel;
- (id)_iconForPrefPaneBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

//@property (strong) NSMutableDictionary *_paneControllers;
//@property (strong) UAPOptionsViewController *_currentController;

@end


@interface UAPOptionsViewController : NSViewController
{
    NSString *_notificationOfInterest;
    UniversalAccessPref *_universalAccessPref;
}

@property(nonatomic) __weak UniversalAccessPref *universalAccessPref; // @synthesize universalAccessPref=_universalAccessPref;
- (void)launchBinaryWithIdentifier:(struct __CFString *)arg1;
- (void)launchBinaryWithURL:(struct __CFURL *)arg1;
- (id)fieldEditorForObject:(id)arg1;
- (id)view;
- (void)loadView;
- (void)switchToPanel:(id)arg1;
- (id)preferenceManager;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)readPreferences:(id)arg1;
- (void)finalize;
- (id)helpAnchorForCurrentState;
- (void)updateLockedUI;
- (void)validateControls;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUAPref:(id)arg1;

@end


@interface UAPDisplayViewController : UAPOptionsViewController
{
    NSButton *_reduceTransparencyCheckbox;
    NSButton *_increaseContrastCheckbox;
    NSButton *_differentiateWithoutColorCheckbox;
    NSButton *_invertColorCheckbox;
    NSButton *_grayscaleCheckbox;
    NSSlider *_enhanceContrastSlider;
    NSSlider *_cursorSizeSlider;
    NSNumber *_oldReduceTransparencyValue;
}

@property(retain, nonatomic) NSNumber *oldReduceTransparencyValue; // @synthesize oldReduceTransparencyValue=_oldReduceTransparencyValue;
- (void)dealloc;
- (void)validateControls;
- (void)readPreferences:(id)arg1;
- (void)pressOpenDisplayPreferences:(id)arg1;
- (void)adjustCursorSize:(id)arg1;
- (void)adjustContrast:(id)arg1;
- (void)grayscale:(id)arg1;
- (void)invertColors:(id)arg1;
- (void)increaseContrast:(id)arg1;
- (void)reduceTransparency:(id)arg1;
- (void)differentiateWithoutColor:(id)arg1;
- (void)_didChangeScreenParameters:(id)arg1;
- (void)_contrastDidChange:(id)arg1;
- (void)loadView;
- (id)init;

@end