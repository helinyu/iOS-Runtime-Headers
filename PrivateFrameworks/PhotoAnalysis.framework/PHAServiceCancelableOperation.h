/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceCancelableOperation : NSObject {
    int  _canceled;
    id /* block */  _cancellationBlock;
    NSLock * _mutex;
    id /* block */  _operationBlock;
    int  _operationId;
}

+ (id)operationNotFoundError:(int)arg1;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)description;
- (id)initWithLock:(id)arg1 operationId:(int)arg2;
- (BOOL)isCancelled;
- (id)operationCanceledError:(BOOL)arg1;
- (int)operationId;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setOperationBlock:(id /* block */)arg1;
- (void)start;

@end