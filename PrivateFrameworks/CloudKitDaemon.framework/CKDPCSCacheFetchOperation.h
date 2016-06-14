/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation {
    CKDPCSCache * _cache;
    bool  _didFetchData;
    NSError * _fetchError;
    NSObject<OS_dispatch_group> * _fetchGroup;
    unsigned long long  _fetchOptions;
    <CKSQLiteItem> * _itemID;
    int  _numRetries;
    CKDRecordPCSData * _parentPCSData;
    CKDPCSData * _pcsData;
    bool  _shouldRetry;
    bool  _wasFetchedFromCache;
}

@property (nonatomic, retain) CKDPCSCache *cache;
@property (nonatomic) bool didFetchData;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic, retain) <CKSQLiteItem> *itemID;
@property (nonatomic, readonly) NSString *itemTypeName;
@property (nonatomic) int numRetries;
@property (nonatomic, retain) CKDRecordPCSData *parentPCSData;
@property (nonatomic, retain) CKDPCSData *pcsData;
@property (nonatomic) bool shouldRetry;
@property (nonatomic) bool wasFetchedFromCache;

- (void).cxx_destruct;
- (bool)_createParentPCS;
- (bool)_decryptPCS;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (bool)_fetchParentPCS;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (bool)_savePCSDataToCache;
- (id)cache;
- (bool)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)dataWasFetched:(id)arg1 withError:(id)arg2 forItemID:(id)arg3;
- (bool)didFetchData;
- (id)fetchError;
- (id)fetchGroup;
- (unsigned long long)fetchOptions;
- (bool)hasAllPCSData;
- (id)initWithItemID:(id)arg1 parentOperation:(id)arg2 cache:(id)arg3 options:(unsigned long long)arg4;
- (id)itemID;
- (id)itemTypeName;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (int)numRetries;
- (id)parentPCSData;
- (id)pcsData;
- (void)setCache:(id)arg1;
- (void)setDidFetchData:(bool)arg1;
- (void)setFetchError:(id)arg1;
- (void)setFetchOptions:(unsigned long long)arg1;
- (void)setItemID:(id)arg1;
- (void)setNumRetries:(int)arg1;
- (void)setParentPCSData:(id)arg1;
- (void)setPcsData:(id)arg1;
- (void)setShouldRetry:(bool)arg1;
- (void)setWasFetchedFromCache:(bool)arg1;
- (bool)shouldRetry;
- (bool)wasFetchedFromCache;

@end