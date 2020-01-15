/*
* Copyright 2018, Oath Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
 * Standard User Property: Preferred Currency.
 * Standard User Property: Currency Preference.
 * Follow ISO 4217: https://en.wikipedia.org/wiki/ISO_4217
 * E.g., "USD", "EUR", "JPY", "CNY", ... 
 */

extern NSString * _Nonnull const FlurryPropertyCurrencyPreference;

/*
 * Standard User Property: Purchaser.
 * E.g., "true" or "false"
 */
extern NSString * _Nonnull  const FlurryPropertyPurchaser;

/*
 * Standard User Property: Registered user.
 * E.g., "true" or "false"
 */
extern NSString * _Nonnull const FlurryPropertyRegisteredUser;

/*
 * Standard User Property: Subscriber.
 * E.g., "true" or "false"
 */
extern NSString * _Nonnull const FlurryPropertySubscriber;


@interface FlurryUserProperties : NSObject

/*!
 *@brief Exactly set or replace any state for the property.
 *  An empty NSArray clears the property state.
 *   @since 10.0.0
 *
 *
 * @param propertyName   property name
 * @param propertyValues list of property values
 */

+ (void) set:(nonnull NSString*) propertyName values:(nonnull NSArray*) propertyValues;

/*!
 *@brief Exactly set or replace any state for the property.
 *  This api allows passing in a single NSString value.
 *  @since 10.0.0
 *
 *
 * @param propertyName  property name
 * @param propertyValue single property value
 */
+ (void) set:(nonnull NSString*) propertyName value:(nonnull NSString*) propertyValue;

/*!
 * @brief Extend or create a property
 * Adding values already included in the state has no effect and does not error.
 *  @since 10.0.0
 *
 *
 * @param propertyName   property name
 * @param propertyValues list of property values
 */
+ (void) add:(nonnull NSString*) propertyName values:(nonnull NSArray*) propertyValues;

/*!
 * @brief Extend or create a property
 * Adding values already included in the state has no effect and does not error.
 *  @since 10.0.0
 *
 *
 * @param propertyName  property name
 * @param propertyValue single property value
 */
+ (void) add:(nonnull NSString*) propertyName value:(nonnull NSString*) propertyValue;

/*!
 * @brief Reduce any property.
 * Removing values not already included in the state has no effect and does not error
 *  @since 10.0.0
 *
 *
 * @param propertyName   property name
 * @param propertyValues list of property values
 */
+ (void) remove:(nonnull NSString*) propertyName values:(nonnull NSArray*) propertyValues;

/*!
 * @brief Reduce any property.
 * Removing values not already included in the state has no effect and does not error
 *  @since 10.0.0
 *
 *
 * @param propertyName  property name
 * @param propertyValue single property value
 */
+ (void) remove:(nonnull NSString*) propertyName value:(nonnull NSString*) propertyValue;

/*!
 * @brief Removes all property values for the property
 *  @since 10.0.0
 *
 *
 * @param propertyName property name
 */
+ (void) remove:(nonnull NSString*) propertyName;

/*!
 * @brief Exactly set, or replace if any previously exists, any state for the property to a single true state.
 * Implies that value is boolean and should only be flagged or removed.
 *  @since 10.0.0
 *
 *
 * @param propertyName property name
 */
+ (void) flag:(nonnull NSString*) propertyName;

@end
