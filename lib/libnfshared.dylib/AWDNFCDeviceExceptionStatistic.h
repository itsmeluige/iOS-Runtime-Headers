/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCDeviceExceptionStatistic : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hwCount : 1; 
        unsigned int mwCount : 1; 
        unsigned int pllUnlock : 1; 
        unsigned int pllUnlockDuringPMICPowerCycle : 1; 
        unsigned int readerModeConnectErrorCount : 1; 
        unsigned int readerModeDisconnectErrorCount : 1; 
        unsigned int readerModeTransceiveErrorCount : 1; 
        unsigned int restrictedModeCount : 1; 
        unsigned int seRemovedEvt0Count : 1; 
        unsigned int seRemovedEvt1Count : 1; 
        unsigned int seRemovedEvt2Count : 1; 
        unsigned int seRemovedEvt3Count : 1; 
        unsigned int seRemovedEvt4Count : 1; 
        unsigned int seRemovedEvt5Count : 1; 
        unsigned int seosRemovedCount : 1; 
        unsigned int seosRestrictedModeCount : 1; 
    }  _has;
    unsigned int  _hwCount;
    unsigned int  _mwCount;
    unsigned int  _pllUnlock;
    unsigned int  _pllUnlockDuringPMICPowerCycle;
    unsigned int  _readerModeConnectErrorCount;
    unsigned int  _readerModeDisconnectErrorCount;
    unsigned int  _readerModeTransceiveErrorCount;
    unsigned int  _restrictedModeCount;
    unsigned int  _seRemovedEvt0Count;
    unsigned int  _seRemovedEvt1Count;
    unsigned int  _seRemovedEvt2Count;
    unsigned int  _seRemovedEvt3Count;
    unsigned int  _seRemovedEvt4Count;
    unsigned int  _seRemovedEvt5Count;
    unsigned int  _seosRemovedCount;
    unsigned int  _seosRestrictedModeCount;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) BOOL hasHwCount;
@property (nonatomic) BOOL hasMwCount;
@property (nonatomic) BOOL hasPllUnlock;
@property (nonatomic) BOOL hasPllUnlockDuringPMICPowerCycle;
@property (nonatomic) BOOL hasReaderModeConnectErrorCount;
@property (nonatomic) BOOL hasReaderModeDisconnectErrorCount;
@property (nonatomic) BOOL hasReaderModeTransceiveErrorCount;
@property (nonatomic) BOOL hasRestrictedModeCount;
@property (nonatomic) BOOL hasSeRemovedEvt0Count;
@property (nonatomic) BOOL hasSeRemovedEvt1Count;
@property (nonatomic) BOOL hasSeRemovedEvt2Count;
@property (nonatomic) BOOL hasSeRemovedEvt3Count;
@property (nonatomic) BOOL hasSeRemovedEvt4Count;
@property (nonatomic) BOOL hasSeRemovedEvt5Count;
@property (nonatomic) BOOL hasSeosRemovedCount;
@property (nonatomic) BOOL hasSeosRestrictedModeCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned int hwCount;
@property (nonatomic) unsigned int mwCount;
@property (nonatomic) unsigned int pllUnlock;
@property (nonatomic) unsigned int pllUnlockDuringPMICPowerCycle;
@property (nonatomic) unsigned int readerModeConnectErrorCount;
@property (nonatomic) unsigned int readerModeDisconnectErrorCount;
@property (nonatomic) unsigned int readerModeTransceiveErrorCount;
@property (nonatomic) unsigned int restrictedModeCount;
@property (nonatomic) unsigned int seRemovedEvt0Count;
@property (nonatomic) unsigned int seRemovedEvt1Count;
@property (nonatomic) unsigned int seRemovedEvt2Count;
@property (nonatomic) unsigned int seRemovedEvt3Count;
@property (nonatomic) unsigned int seRemovedEvt4Count;
@property (nonatomic) unsigned int seRemovedEvt5Count;
@property (nonatomic) unsigned int seosRemovedCount;
@property (nonatomic) unsigned int seosRestrictedModeCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHwCount;
- (BOOL)hasMwCount;
- (BOOL)hasPllUnlock;
- (BOOL)hasPllUnlockDuringPMICPowerCycle;
- (BOOL)hasReaderModeConnectErrorCount;
- (BOOL)hasReaderModeDisconnectErrorCount;
- (BOOL)hasReaderModeTransceiveErrorCount;
- (BOOL)hasRestrictedModeCount;
- (BOOL)hasSeRemovedEvt0Count;
- (BOOL)hasSeRemovedEvt1Count;
- (BOOL)hasSeRemovedEvt2Count;
- (BOOL)hasSeRemovedEvt3Count;
- (BOOL)hasSeRemovedEvt4Count;
- (BOOL)hasSeRemovedEvt5Count;
- (BOOL)hasSeosRemovedCount;
- (BOOL)hasSeosRestrictedModeCount;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (unsigned int)hwCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mwCount;
- (unsigned int)pllUnlock;
- (unsigned int)pllUnlockDuringPMICPowerCycle;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)readerModeConnectErrorCount;
- (unsigned int)readerModeDisconnectErrorCount;
- (unsigned int)readerModeTransceiveErrorCount;
- (unsigned int)restrictedModeCount;
- (unsigned int)seRemovedEvt0Count;
- (unsigned int)seRemovedEvt1Count;
- (unsigned int)seRemovedEvt2Count;
- (unsigned int)seRemovedEvt3Count;
- (unsigned int)seRemovedEvt4Count;
- (unsigned int)seRemovedEvt5Count;
- (unsigned int)seosRemovedCount;
- (unsigned int)seosRestrictedModeCount;
- (void)setHasHwCount:(BOOL)arg1;
- (void)setHasMwCount:(BOOL)arg1;
- (void)setHasPllUnlock:(BOOL)arg1;
- (void)setHasPllUnlockDuringPMICPowerCycle:(BOOL)arg1;
- (void)setHasReaderModeConnectErrorCount:(BOOL)arg1;
- (void)setHasReaderModeDisconnectErrorCount:(BOOL)arg1;
- (void)setHasReaderModeTransceiveErrorCount:(BOOL)arg1;
- (void)setHasRestrictedModeCount:(BOOL)arg1;
- (void)setHasSeRemovedEvt0Count:(BOOL)arg1;
- (void)setHasSeRemovedEvt1Count:(BOOL)arg1;
- (void)setHasSeRemovedEvt2Count:(BOOL)arg1;
- (void)setHasSeRemovedEvt3Count:(BOOL)arg1;
- (void)setHasSeRemovedEvt4Count:(BOOL)arg1;
- (void)setHasSeRemovedEvt5Count:(BOOL)arg1;
- (void)setHasSeosRemovedCount:(BOOL)arg1;
- (void)setHasSeosRestrictedModeCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHwCount:(unsigned int)arg1;
- (void)setMwCount:(unsigned int)arg1;
- (void)setPllUnlock:(unsigned int)arg1;
- (void)setPllUnlockDuringPMICPowerCycle:(unsigned int)arg1;
- (void)setReaderModeConnectErrorCount:(unsigned int)arg1;
- (void)setReaderModeDisconnectErrorCount:(unsigned int)arg1;
- (void)setReaderModeTransceiveErrorCount:(unsigned int)arg1;
- (void)setRestrictedModeCount:(unsigned int)arg1;
- (void)setSeRemovedEvt0Count:(unsigned int)arg1;
- (void)setSeRemovedEvt1Count:(unsigned int)arg1;
- (void)setSeRemovedEvt2Count:(unsigned int)arg1;
- (void)setSeRemovedEvt3Count:(unsigned int)arg1;
- (void)setSeRemovedEvt4Count:(unsigned int)arg1;
- (void)setSeRemovedEvt5Count:(unsigned int)arg1;
- (void)setSeosRemovedCount:(unsigned int)arg1;
- (void)setSeosRestrictedModeCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
