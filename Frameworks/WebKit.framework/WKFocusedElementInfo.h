/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {
    bool  _isUserInitiated;
    long long  _type;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly, copy) NSString *value;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAssistedNodeInformation:(const struct AssistedNodeInformation { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; double x3; double x4; double x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; int x13; int x14; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_15_1_1; } x15; struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16> { struct OptionItem {} *x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; } x16; int x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; double x19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_20_1_1; } x20; int x21; }*)arg1 isUserInitiated:(bool)arg2;
- (bool)isUserInitiated;
- (long long)type;
- (id)value;

@end
