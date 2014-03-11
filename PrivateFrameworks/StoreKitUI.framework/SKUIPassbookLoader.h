/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIPassbookLoaderDelegate>, NSOperationQueue, SKUIClientContext;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIPassbookLoaderDelegate> *_delegate;
    int _loadCount;
    NSOperationQueue *_operationQueue;
}

@property <SKUIPassbookLoaderDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;

- (void).cxx_destruct;
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;
- (void)_loadPassWithURL:(id)arg1;
- (void)_sendDidFinishIfFinished;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id)delegate;
- (id)initWithClientContext:(id)arg1;
- (void)loadPassWithURL:(id)arg1;
- (id)operationQueue;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end