/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerItem : ISObservable {
    ISCrossfadeItem * __crossfadeItem;
    int  __crossfadeItemRequestID;
    BOOL  __loadingCancelled;
    int  __numberOfCrossfadeLoadingAttempts;
    double  __photoTime;
    AVPlayerItem * __videoPlayerItem;
    int  __videoPlayerItemRequestID;
    BOOL  _aggressivelyCacheVideoFrames;
    ISAsset * _asset;
    NSError * _error;
    struct { 
        BOOL videoPlayerItem; 
        BOOL crossfadeItem; 
    }  _isLoaded;
    struct { 
        BOOL status; 
        BOOL content; 
    }  _isValid;
    int  _loadingTarget;
    NSHashTable * _observers;
    ISPlayerContent * _playerContent;
    BOOL  _preparesForVitalityOnLoad;
    BOOL  _reversesMoreVideoFramesInMemory;
    BOOL  _shouldLoadCrossfadeContent;
    NSObject<OS_dispatch_queue> * _stateQueue;
    int  _status;
    struct CGSize { 
        float width; 
        float height; 
    }  _targetSize;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _trimmedTimeRange;
    AVVideoComposition * _videoComposition;
    float  _videoCropFactor;
}

@property (setter=_setCrossfadeItem:, nonatomic, retain) ISCrossfadeItem *_crossfadeItem;
@property (setter=_setCrossfadeItemRequestID:, nonatomic) int _crossfadeItemRequestID;
@property (getter=_isLoadingCancelled, setter=_setLoadingCancelled:, nonatomic) BOOL _loadingCancelled;
@property (setter=_setNumberOfCrossfadeLoadingAttempts:, nonatomic) int _numberOfCrossfadeLoadingAttempts;
@property (nonatomic, readonly) double _photoTime;
@property (setter=_setVideoPlayerItem:, nonatomic, retain) AVPlayerItem *_videoPlayerItem;
@property (setter=_setVideoPlayerItemRequestID:, nonatomic) int _videoPlayerItemRequestID;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (readonly) ISAsset *asset;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property int loadingTarget;
@property (setter=_setPlayerContent:, nonatomic, retain) ISPlayerContent *playerContent;
@property (nonatomic) BOOL preparesForVitalityOnLoad;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic) BOOL shouldLoadCrossfadeContent;
@property (setter=_setStatus:, nonatomic) int status;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } targetSize;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimmedTimeRange;
@property (copy) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) float videoCropFactor;

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;

- (void).cxx_destruct;
- (void)_cancelLoading;
- (id)_crossfadeItem;
- (int)_crossfadeItemRequestID;
- (void)_handleCrossfadeLoadingResultWithSuccess:(BOOL)arg1 crossfadeItem:(id)arg2 error:(id)arg3;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoCropFactor:(float)arg3 error:(id)arg4;
- (void)_invalidatePlayerContent;
- (void)_invalidateStatus;
- (BOOL)_isLoadingCancelled;
- (void)_loadCrossfadeItemIfNeeded;
- (void)_loadNextResourceIfNeeded;
- (void)_loadVideoPlayerItemIfNeeded;
- (BOOL)_needsToLoadContent;
- (BOOL)_needsUpdate;
- (int)_numberOfCrossfadeLoadingAttempts;
- (double)_photoTime;
- (void)_reloadAllContent;
- (void)_resetAVObjects;
- (void)_setCrossfadeItem:(id)arg1;
- (void)_setCrossfadeItemRequestID:(int)arg1;
- (void)_setError:(id)arg1;
- (void)_setLoadingCancelled:(BOOL)arg1;
- (void)_setLoadingTarget:(int)arg1;
- (void)_setNumberOfCrossfadeLoadingAttempts:(int)arg1;
- (void)_setPlayerContent:(id)arg1;
- (void)_setStatus:(int)arg1;
- (void)_setVideoComposition:(id)arg1;
- (void)_setVideoPlayerItem:(id)arg1;
- (void)_setVideoPlayerItem:(id)arg1 cropFactor:(float)arg2;
- (void)_setVideoPlayerItemRequestID:(int)arg1;
- (void)_updateIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updateStatusIfNeeded;
- (id)_videoPlayerItem;
- (int)_videoPlayerItemRequestID;
- (BOOL)aggressivelyCacheVideoFrames;
- (id)asset;
- (void)cancelLoading;
- (void)dealloc;
- (void)didPerformChanges;
- (void)discardContentBelowLoadingTarget;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (int)loadingTarget;
- (id)mutableChangeObject;
- (id)playerContent;
- (BOOL)preparesForVitalityOnLoad;
- (void)resetAVObjects;
- (BOOL)reversesMoreVideoFramesInMemory;
- (void)setAggressivelyCacheVideoFrames:(BOOL)arg1;
- (void)setLoadingTarget:(int)arg1;
- (void)setPreparesForVitalityOnLoad:(BOOL)arg1;
- (void)setReversesMoreVideoFramesInMemory:(BOOL)arg1;
- (void)setShouldLoadCrossfadeContent:(BOOL)arg1;
- (void)setVideoComposition:(id)arg1;
- (BOOL)shouldLoadCrossfadeContent;
- (int)status;
- (struct CGSize { float x1; float x2; })targetSize;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimmedTimeRange;
- (id)videoComposition;
- (float)videoCropFactor;

@end
