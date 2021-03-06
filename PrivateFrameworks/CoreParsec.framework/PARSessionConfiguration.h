/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSessionConfiguration : NSObject <NSSecureCoding> {
    BOOL  _dontPreloadImages;
    BOOL  _enablePersonalizedRanking;
    <PARResultFactory> * _factory;
    NSString * _identifier;
    NSString * _userAgent;
}

@property BOOL dontPreloadImages;
@property BOOL enablePersonalizedRanking;
@property (readonly) <PARResultFactory> *factory;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *userAgent;

+ (id)defaultSessionConfiguration;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (BOOL)dontPreloadImages;
- (BOOL)enablePersonalizedRanking;
- (void)encodeWithCoder:(id)arg1;
- (id)factory;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 userAgent:(id)arg2;
- (id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3;
- (void)setDontPreloadImages:(BOOL)arg1;
- (void)setEnablePersonalizedRanking:(BOOL)arg1;
- (id)userAgent;

@end
