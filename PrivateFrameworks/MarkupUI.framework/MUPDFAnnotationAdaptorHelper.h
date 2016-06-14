/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFAnnotationAdaptorHelper : NSObject

+ (id)_colorFromAppearanceTokens:(id)arg1;
+ (id)_colorFromPDFArray:(struct CGPDFArray { }*)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPageRotation:(unsigned long long)arg1;
+ (id)_fontNameFromAppearanceTokens:(id)arg1;
+ (id)_getColorFromAppearanceString:(struct CGPDFString { }*)arg1;
+ (id)_getFontFromAppearanceString:(struct CGPDFString { }*)arg1 ofPDFPage:(struct CGPDFPage { }*)arg2;
+ (double)_pointSizeFromAppearanceTokens:(id)arg1;
+ (bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg2;
+ (id)_tokenizeAppearanceString:(id)arg1;
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary { }*)arg2;
+ (void)addAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addBoundsOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;
+ (void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (id)getRGBColorForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2;
+ (id)getTextStringForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2;
+ (void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2 ofPDFPage:(struct CGPDFPage { }*)arg3;
+ (void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2 ofPDFPage:(struct CGPDFPage { }*)arg3;
+ (void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2 ofPDFPage:(struct CGPDFPage { }*)arg3;
+ (void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary { }*)arg2 ofPDFPage:(struct CGPDFPage { }*)arg3;
+ (void)migrateAppearanceStreamFromCGPDFAnnotationDict:(struct CGPDFDictionary { }*)arg1 toAKAnnotation:(id)arg2 compensatingForPageRotation:(unsigned long long)arg3;
+ (id)newAKAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1;

@end