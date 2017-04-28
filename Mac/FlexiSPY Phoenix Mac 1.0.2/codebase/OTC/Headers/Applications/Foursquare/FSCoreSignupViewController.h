/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "FSCoreViewController.h"
//#import "UITextFieldDelegate.h"
//#import "UIActionSheetDelegate.h"
//#import "Foursquare-Structs.h"
//#import "UIImagePickerControllerDelegate.h"
//#import "UIPickerViewDelegate.h"
//#import "PhotoActionSheetDelegate.h"
//#import "UIPickerViewDataSource.h"
//#import "UINavigationControllerDelegate.h"

@class UIScrollView, UIDatePicker, NSDateFormatter, UIToolbar, UIPickerView, UITextField, UISegmentedControl, FSDisplayableAPIParameter, UIView, NSDictionary, UIImage, NSDate, NSString;

@interface FSCoreSignupViewController : NSObject { //FSCoreViewController <PhotoActionSheetDelegate, UIActionSheetDelegate, UIPickerViewDelegate, UITextFieldDelegate, UIPickerViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
	NSString* _signupSource;
	NSDictionary* _facebookInfo;
	UIDatePicker* _datePicker;
	UIView* _lastFormView;
	UIScrollView* _containerView;
	UIImage* _selectedPhoto;
	NSString* _fbToken;
	id _onSignupAuthToken;
	id _onSignupSuccess;
	UITextField* _firstName;
	UITextField* _lastName;
	UITextField* _emailAddress;
	UITextField* _password;
	UITextField* _birthdateField;
	UITextField* _gender;
	UITextField* _phoneNumber;
	id _firstResponder;
	NSDate* _birthDate;
	NSDateFormatter* _dateFormatter;
	UIPickerView* _genderPicker;
	FSDisplayableAPIParameter* _selectedGender;
	UIToolbar* _inputAccessoryToolbar;
	UISegmentedControl* _segmentedControl;
}
@property(retain, nonatomic) UISegmentedControl* segmentedControl;
@property(retain, nonatomic) UIToolbar* inputAccessoryToolbar;
@property(retain, nonatomic) FSDisplayableAPIParameter* selectedGender;
@property(retain, nonatomic) UIPickerView* genderPicker;
@property(retain, nonatomic) NSDateFormatter* dateFormatter;
@property(retain, nonatomic) NSDate* birthDate;
@property(assign, nonatomic) __weak id firstResponder;
@property(retain, nonatomic) UITextField* phoneNumber;
@property(retain, nonatomic) UITextField* gender;
@property(retain, nonatomic) UITextField* birthdateField;
@property(retain, nonatomic) UITextField* password;
@property(retain, nonatomic) UITextField* emailAddress;
@property(retain, nonatomic) UITextField* lastName;
@property(retain, nonatomic) UITextField* firstName;
@property(copy, nonatomic) id onSignupSuccess;
@property(copy, nonatomic) id onSignupAuthToken;
@property(retain, nonatomic) NSString* fbToken;
@property(retain, nonatomic) UIImage* selectedPhoto;
@property(retain, nonatomic) UIScrollView* containerView;
@property(retain, nonatomic) UIView* lastFormView;
@property(retain, nonatomic) UIDatePicker* datePicker;
@property(retain, nonatomic) NSDictionary* facebookInfo;
@property(retain, nonatomic) NSString* signupSource;
+(id)flattenedOrder;
+(id)fieldOrder;
+(id)fieldMapping;
//-(void).cxx_destruct;
-(void)dealloc;
-(void)addUserTransactionSucceeded;
-(void)fetchWithConsent:(id)consent;
-(id)addUserTransactionWithConsent:(id)consent;

-(void)doneButtonTapped:(id)tapped;

-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)presentImagePicker:(int)picker;
-(void)photoActionSheet:(id)sheet didSelectSource:(int)source;
-(void)photoActionSheet:(id)sheet didSelectImage:(id)image;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)addPhoto:(id)photo;
-(void)textFieldDidEndEditing:(id)textField textFieldType:(id)type;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)selectGenderAtIndex:(int)index;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)dateChanged:(id)changed;
-(void)checkForCompleteness;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setDefaults;
-(void)tabForwardWithField:(id)field;
-(void)tabBackWithField:(id)field;
-(void)doneEditing:(id)editing;
-(void)segmentPressed:(id)pressed;
-(void)styleTextField:(id)field forKey:(id)key;
-(void)layoutFormFieldsWithTop:(float)top;
-(void)createBasicTextFields;
-(void)createPickers;
-(int)genderSegmentForFBGender:(id)fbgender;
-(void)displayFbData;
-(void)setupInputToolbar;
-(id)textFieldFont;
-(void)setCompleteness:(BOOL)completeness;
-(id)inputAccessoryColor;
-(id)fieldBackgroundColor;
-(id)placeholderColor;
-(id)textColor;
-(void)viewDidLoad;
-(id)viewToResizeOnKeyboardStateChange;
-(BOOL)observesKeyboard;
@end
