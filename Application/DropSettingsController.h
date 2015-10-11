/*
 Copyright (c) 2003-2015, Sveinbjorn Thordarson <sveinbjornt@gmail.com>
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 2. Redistributions in binary form must reproduce the above copyright notice, this
 list of conditions and the following disclaimer in the documentation and/or other
 materials provided with the distribution.
 
 3. Neither the name of the copyright holder nor the names of its contributors may
 be used to endorse or promote products derived from this software without specific
 prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
 */

#import <Cocoa/Cocoa.h>
#import "SuffixListController.h"
#import "PlatypusUtility.h"
#import "UniformTypeListController.h"

@interface DropSettingsController : NSObject <NSTableViewDelegate>
{
    IBOutlet NSButton *addSuffixButton;
    IBOutlet NSButton *removeSuffixButton;
    IBOutlet NSTableView *suffixListTableView;
    IBOutlet NSTextField *suffixTextField;

    IBOutlet NSButton *addUTIButton;
    IBOutlet NSButton *removeUTIButton;
    IBOutlet NSTableView *uniformTypeListTableView;
    IBOutlet NSTextField *uniformTypeTextField;

    IBOutlet NSButton *promptForFileOnLaunchCheckbox;
    
    IBOutlet NSWindow *dropSettingsWindow;
    IBOutlet NSWindow *window;
    IBOutlet NSTextField *typesErrorTextField;
    IBOutlet NSButton *droppableEnabledCheckbox;
    
    IBOutlet NSButton *acceptDroppedTextCheckbox;
    IBOutlet NSButton *acceptDroppedFilesCheckbox;
    IBOutlet NSButton *declareServiceCheckbox;
    IBOutlet NSImageView *docIconImageView;
    
    IBOutlet id droppedFilesSettingsBox;
    IBOutlet NSButton *selectDocumentIconButton;
    
    NSString *docIconPath;
    SuffixListController *suffixListController;
    UniformTypeListController *uniformTypeListController;
}
- (IBAction)addSuffix:(id)sender;
- (IBAction)removeSuffix:(id)sender;

- (IBAction)addUTI:(id)sender;
- (IBAction)removeUTI:(id)sender;

- (IBAction)openDropSettingsSheet:(id)sender;
- (IBAction)closeDropSettingsSheet:(id)sender;
- (IBAction)selectDocIcon:(id)sender;
- (IBAction)setToDefaults:(id)sender;
- (IBAction)acceptsFilesChanged:(id)sender;
- (IBAction)acceptsTextChanged:(id)sender;

- (SuffixListController *)suffixListController;
- (UniformTypeListController *)uniformTypesListController;
- (UInt64)docIconSize;

// getter/setters
- (NSString *)docIconPath;
- (void)setDocIconPath:(NSString *)path;

- (BOOL)acceptsText;
- (void)setAcceptsText:(BOOL)b;

- (BOOL)acceptsFiles;
- (void)setAcceptsFiles:(BOOL)b;

- (BOOL)declareService;
- (void)setDeclareService:(BOOL)b;

- (BOOL)promptsForFileOnLaunch;
- (void)setPromptsForFileOnLaunch:(BOOL)b;

- (IBAction)showHelp:(id)sender;

@end
