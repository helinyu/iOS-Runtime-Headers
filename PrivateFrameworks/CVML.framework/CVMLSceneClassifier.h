/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLSceneClassifier : CVMLDetector {
    NSSet * mBlacklistedTerms;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { 
        struct ImageClassifierAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mClassifier;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mDescriptorProcessor;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { 
        struct ImageClassifier_HierarchicalModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mHierarchicalClassifier;
}

+ (BOOL)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getLabels;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
