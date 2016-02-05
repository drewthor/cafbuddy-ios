/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLQueryMealService.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   mealService/v1.0
// Description:
//   API for dealing with meals
// Classes:
//   GTLQueryMealService (7 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLMealServiceApisMealApiCreateNewMealRequestMessage;
@class GTLMealServiceApisMealApiDeleteUnMatchedMealRequestMessage;
@class GTLMealServiceApisMealApiEditUnMatchedMealRequestMessage;
@class GTLMealServiceApisMealApiGetAllUpcomingMealsRequestMessage;
@class GTLMealServiceApisMealApiGetMatchedMealsInRangeRequestMessage;
@class GTLMealServiceApisMealApiGetUpcomingMatchedMealsRequestMessage;
@class GTLMealServiceApisMealApiGetUpcomingUnMatchedMealsRequestMessage;

@interface GTLQueryMealService : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (nonatomic, copy) NSString *fields;

#pragma mark - Service level methods
// These create a GTLQueryMealService object.

// Method: mealService.createNewMeal
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiCreateNewMealResponseMessage.
+ (instancetype)queryForCreateNewMealWithObject:(GTLMealServiceApisMealApiCreateNewMealRequestMessage *)object;

// Method: mealService.deleteUnMatchedMeal
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiDeleteUnMatchedMealResponseMessage.
+ (instancetype)queryForDeleteUnMatchedMealWithObject:(GTLMealServiceApisMealApiDeleteUnMatchedMealRequestMessage *)object;

// Method: mealService.editUnMatchedMeal
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiEditUnMatchedMealResponseMessage.
+ (instancetype)queryForEditUnMatchedMealWithObject:(GTLMealServiceApisMealApiEditUnMatchedMealRequestMessage *)object;

// Method: mealService.getAllUpcomingMeals
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiGetAllUpcomingMealsResponseMessage.
+ (instancetype)queryForGetAllUpcomingMealsWithObject:(GTLMealServiceApisMealApiGetAllUpcomingMealsRequestMessage *)object;

// Method: mealService.getMatchedMealsInRange
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiGetMatchedMealsInRangeResponseMessage.
+ (instancetype)queryForGetMatchedMealsInRangeWithObject:(GTLMealServiceApisMealApiGetMatchedMealsInRangeRequestMessage *)object;

// Method: mealService.getUpcomingMatchedMeals
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage.
+ (instancetype)queryForGetUpcomingMatchedMealsWithObject:(GTLMealServiceApisMealApiGetUpcomingMatchedMealsRequestMessage *)object;

// Method: mealService.getUpcomingUnMatchedMeals
//  Authorization scope(s):
//   kGTLAuthScopeMealServiceUserinfoEmail
// Fetches a GTLMealServiceApisMealApiGetUpcomingUnMatchedMealsResponseMessage.
+ (instancetype)queryForGetUpcomingUnMatchedMealsWithObject:(GTLMealServiceApisMealApiGetUpcomingUnMatchedMealsRequestMessage *)object;

@end
