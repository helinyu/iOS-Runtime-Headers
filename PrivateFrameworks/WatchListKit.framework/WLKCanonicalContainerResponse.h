/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKCanonicalContainerResponse : NSObject {
    NSString * _canonicalID;
    NSArray * _channels;
    unsigned int  _contentType;
    WLKBasicEpisodeMetadata * _currentEpisode;
    NSDictionary * _defaultSeason;
    NSDictionary * _dictionary;
    BOOL  _watchListable;
    BOOL  _watchListed;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSArray *channels;
@property (nonatomic, readonly) unsigned int contentType;
@property (nonatomic, readonly, copy) WLKBasicEpisodeMetadata *currentEpisode;
@property (nonatomic, readonly, copy) NSDictionary *defaultSeason;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (getter=isWatchListable, nonatomic, readonly) BOOL watchListable;
@property (getter=isWatchListed, nonatomic, readonly) BOOL watchListed;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)channels;
- (unsigned int)contentType;
- (id)currentEpisode;
- (id)defaultSeason;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isWatchListable;
- (BOOL)isWatchListed;

@end
