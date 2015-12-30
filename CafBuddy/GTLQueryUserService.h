/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLQueryUserService.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   userService/v1.011
// Description:
//   API for working with a User
// Classes:
//   GTLQueryUserService (5 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLUserServiceApisUserApiLogInUserRequestMessage;
@class GTLUserServiceApisUserApiLogOutUserRequestMessage;
@class GTLUserServiceApisUserApiSendNewEmailVerificationRequestMessage;
@class GTLUserServiceApisUserApiSignUpUserRequestMessage;
@class GTLUserServiceApisUserApiValidateUserRequestMessage;

@interface GTLQueryUserService : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (nonatomic, copy) NSString *fields;

#pragma mark - Service level methods
// These create a GTLQueryUserService object.

// Method: userService.loginUser
//  Authorization scope(s):
//   kGTLAuthScopeUserServiceUserinfoEmail
// Fetches a GTLUserServiceApisUserApiLogInUserResponseMessage.
+ (instancetype)queryForLoginUserWithObject:(GTLUserServiceApisUserApiLogInUserRequestMessage *)object;

// Method: userService.logoutUser
//  Authorization scope(s):
//   kGTLAuthScopeUserServiceUserinfoEmail
// Fetches a GTLUserServiceApisUserApiLogOutUserResponseMessage.
+ (instancetype)queryForLogoutUserWithObject:(GTLUserServiceApisUserApiLogOutUserRequestMessage *)object;

// Method: userService.sendNewEmailVerification
//  Authorization scope(s):
//   kGTLAuthScopeUserServiceUserinfoEmail
// Fetches a GTLUserServiceApisUserApiSendNewEmailVerificationResponseMessage.
+ (instancetype)queryForSendNewEmailVerificationWithObject:(GTLUserServiceApisUserApiSendNewEmailVerificationRequestMessage *)object;

// Method: userService.signupUser
//  Authorization scope(s):
//   kGTLAuthScopeUserServiceUserinfoEmail
// Fetches a GTLUserServiceApisUserApiSignUpUserResponseMessage.
+ (instancetype)queryForSignupUserWithObject:(GTLUserServiceApisUserApiSignUpUserRequestMessage *)object;

// Method: userService.validateUser
//  Authorization scope(s):
//   kGTLAuthScopeUserServiceUserinfoEmail
// Fetches a GTLUserServiceApisUserApiValidateUserResponseMessage.
+ (instancetype)queryForValidateUserWithObject:(GTLUserServiceApisUserApiValidateUserRequestMessage *)object;

@end
