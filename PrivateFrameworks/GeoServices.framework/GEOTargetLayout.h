/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTargetLayout : PBCodable <NSCopying> {
    struct { 
        unsigned int layoutInfo : 1; 
        unsigned int layoutStyle : 1; 
        unsigned int uiTarget : 1; 
    }  _has;
    int  _layoutInfo;
    int  _layoutStyle;
    int  _uiTarget;
}

@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int layoutInfo;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int uiTarget;

- (int)StringAsLayoutInfo:(id)arg1;
- (int)StringAsLayoutStyle:(id)arg1;
- (int)StringAsUiTarget:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLayoutInfo;
- (BOOL)hasLayoutStyle;
- (BOOL)hasUiTarget;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)layoutInfo;
- (id)layoutInfoAsString:(int)arg1;
- (int)layoutStyle;
- (id)layoutStyleAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLayoutInfo:(BOOL)arg1;
- (void)setHasLayoutStyle:(BOOL)arg1;
- (void)setHasUiTarget:(BOOL)arg1;
- (void)setLayoutInfo:(int)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setUiTarget:(int)arg1;
- (int)uiTarget;
- (id)uiTargetAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
