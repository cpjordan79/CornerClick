/* ClickView */

#import <Cocoa/Cocoa.h>
#import "ClickAction.h"

@interface ClickView : NSView
{
    Clicker *myClicker;
    NSArray *myActions;
	NSArray *actionsGroups;
    NSImage *drawed;
    NSTrackingRectTag trackTag;
    BOOL selected;
    int corner;
}


- (id)initWithFrame:(NSRect)frameRect actions:(NSArray *)actions corner:(int) theCorner clicker:(Clicker *)clicker;

- (void) drawBuf: (NSRect) rect;
- (void) setSelected: (BOOL) selected;
//- (ClickAction *) clickAction;
//- (void) setClickAction: (ClickAction *) action;
- (NSArray *) clickActions;
- (void) setClickActions: (NSArray *) actions;
- (ClickAction *) clickActionForModifierFlags: (unsigned int)modifiers;
- (NSArray *) clickActionsForModifierFlags:(unsigned int) modifiers;
- (NSArray *) clickActionsForModifierFlags:(unsigned int) modifiers
								andTrigger:(int) trigger;

- (NSArray *) hoverActionsForModifierFlags:(unsigned int) modifiers;
- (void) setTrackingRectTag:(NSTrackingRectTag) tag;
- (NSTrackingRectTag) trackingRectTag;
- (NSArray *) actionsGroups;
- (NSArray *) actionsGroupsForModifiers:(int) mods;
@end
