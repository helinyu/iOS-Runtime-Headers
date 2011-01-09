/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSKeyValueUnnestedProperty;



@interface NSKeyValueNestedProperty : NSKeyValueProperty 
{
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}


- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(NSUInteger)arg3 propertiesBeingInitialized:(struct __CFSet { }*)arg4;
- (void)dealloc;
- (id)description;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (void)_addDependentValueKey:(id)arg1;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; }*)arg4;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; })arg4;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end