/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriLanguage : NSObject {
    <AFUISiriLanguageDelegate> * _delegate;
    BOOL  _setupAssistantHasCompletedInitialRunAvailable;
    BOOL  _setupAssistantHasCompletedInitialRunChecked;
    NSString * _spokenLanguageCode;
}

@property (getter=_delegate, nonatomic, readonly) <AFUISiriLanguageDelegate> *delegate;
@property (getter=_setupAssistantHasCompletedInitialRunAvailable, nonatomic) BOOL setupAssistantHasCompletedInitialRunAvailable;
@property (nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;
@property (setter=_setSpokenLanguageCode:, nonatomic, copy) NSString *spokenLanguageCode;

- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_delegate;
- (void)_setSpokenLanguageCode:(id)arg1;
- (BOOL)_setupAssistantHasCompletedInitialRunAvailable;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateSpokenLanguageCode;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setSetupAssistantHasCompletedInitialRunAvailable:(BOOL)arg1;
- (void)setSetupAssistantHasCompletedInitialRunChecked:(BOOL)arg1;
- (BOOL)setupAssistantHasCompletedInitialRunChecked;
- (id)spokenLanguageCode;

@end
