/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   mealService/v1.0
// Description:
//   API for dealing with meals
// Classes:
//   GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage (0 custom class methods, 3 custom properties)

#import "GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage.h"

#import "GTLMealServiceApisMealApiMatchedMealMessage.h"

// ----------------------------------------------------------------------------
//
//   GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage
//

@implementation GTLMealServiceApisMealApiGetUpcomingMatchedMealsResponseMessage
@dynamic errorMessage, errorNumber, matchedMeals;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"matchedMeals" : [GTLMealServiceApisMealApiMatchedMealMessage class]
  };
  return map;
}

@end
