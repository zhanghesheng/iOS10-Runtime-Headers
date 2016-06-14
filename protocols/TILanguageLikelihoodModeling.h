/* Generated by RuntimeBrowser.
 */

@protocol TILanguageLikelihoodModeling <NSObject>

@required

- (void)addEvidence:(NSString *)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(NSString *)arg4 app:(NSString *)arg5 language:(NSString *)arg6;
- (double)lastOfflineAdaptationTimeForApp:(NSString *)arg1;
- (void)priorProbabilityForLanguages:(void *)arg1 recipient:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 10: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, float, bool*, void*
- (NSArray *)rankedLanguagesForRecipient:(NSString *)arg1;

@end