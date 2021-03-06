/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation {
    VSStoreRequestOperation * _requestOperation;
    VSFailable * _result;
}

@property (nonatomic, retain) VSStoreRequestOperation *requestOperation;
@property (nonatomic, retain) VSFailable *result;

- (void).cxx_destruct;
- (void)_handleResult:(id)arg1;
- (void)cancel;
- (void)executionDidBegin;
- (id)requestOperation;
- (id)result;
- (void)setRequestOperation:(id)arg1;
- (void)setResult:(id)arg1;

@end
