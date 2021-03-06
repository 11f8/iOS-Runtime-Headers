/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerClientState : NSObject {
    BOOL  _allowsBackgroundVideo;
    NSDictionary * _assetStoreFrontOverrides;
    int  _backgroundPlaybackAccess;
    NSDictionary * _endTimeModifications;
    MPMediaItem * _firstItem;
    MPMediaPlaylist * _geniusMixPlaylist;
    BOOL  _hasAudioBackgroundMode;
    MPMediaQuery * _query;
    MPRadioStation * _radioStation;
    int  _repeatMode;
    BOOL  _seeking;
    int  _shuffleMode;
    NSString * _startItemID;
    NSDictionary * _startTimeModifications;
    NSArray * _storeIDs;
    BOOL  _useApplicationSpecificQueue;
    BOOL  _videoPlaybackEnabled;
}

@property (nonatomic) BOOL allowsBackgroundVideo;
@property (nonatomic, copy) NSDictionary *assetStoreFrontOverrides;
@property (nonatomic) int backgroundPlaybackAccess;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, retain) MPMediaItem *firstItem;
@property (nonatomic, retain) MPMediaPlaylist *geniusMixPlaylist;
@property (nonatomic) BOOL hasAudioBackgroundMode;
@property (nonatomic, retain) MPMediaQuery *query;
@property (nonatomic, retain) MPRadioStation *radioStation;
@property (nonatomic) int repeatMode;
@property (nonatomic) BOOL seeking;
@property (nonatomic) int shuffleMode;
@property (nonatomic, copy) NSString *startItemID;
@property (nonatomic, copy) NSDictionary *startTimeModifications;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic) BOOL useApplicationSpecificQueue;
@property (nonatomic) BOOL videoPlaybackEnabled;

- (void).cxx_destruct;
- (BOOL)allowsBackgroundVideo;
- (id)assetStoreFrontOverrides;
- (int)backgroundPlaybackAccess;
- (id)endTimeModifications;
- (id)firstItem;
- (id)geniusMixPlaylist;
- (BOOL)hasAudioBackgroundMode;
- (id)query;
- (id)radioStation;
- (int)repeatMode;
- (BOOL)seeking;
- (void)setAllowsBackgroundVideo:(BOOL)arg1;
- (void)setAssetStoreFrontOverrides:(id)arg1;
- (void)setBackgroundPlaybackAccess:(int)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setFirstItem:(id)arg1;
- (void)setGeniusMixPlaylist:(id)arg1;
- (void)setHasAudioBackgroundMode:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setSeeking:(BOOL)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setStartItemID:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (int)shuffleMode;
- (id)startItemID;
- (id)startTimeModifications;
- (id)storeIDs;
- (BOOL)useApplicationSpecificQueue;
- (BOOL)videoPlaybackEnabled;

@end
