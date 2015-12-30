/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLUserServiceApisUserApiValidateUserResponseMessage.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   userService/v1.011
// Description:
//   API for working with a User
// Classes:
//   GTLUserServiceApisUserApiValidateUserResponseMessage (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLUserServiceApisUserApiValidateUserResponseMessage
//

@interface GTLUserServiceApisUserApiValidateUserResponseMessage : GTLObject
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic, retain) NSNumber *errorNumber;  // longLongValue
@end
