/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
    bool  _acknowledged;
    NSURL * _action;
    NSString * _alarmID;
    bool  _allDay;
    NSUserActivity * _appLink;
    NSString * _dismissalID;
    NSDate * _endDate;
    NSURL * _entityID;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    NSString * _externalID;
    NSDate * _fireDate;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _geoLocationCoordinates;
    bool  _hasDisplayedLeaveByMessage;
    bool  _hasDisplayedLeaveNowMessage;
    bool  _hasDisplayedRunningLateMessage;
    bool  _hasGeoLocationCoordinates;
    bool  _hasOrganizerThatIsNotCurrentUser;
    bool  _isOffsetFromTravelTimeStart;
    bool  _isPseudoEvent;
    NSDate * _lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate * _lastTimeBulletinAdded;
    EKTravelEngineHypothesis * _latestHypothesis;
    NSString * _location;
    NSString * _locationAddress;
    NSData * _mapKitHandle;
    NSString * _organizerEmailAddress;
    long long  _proximity;
    NSString * _publisherBulletinID;
    bool  _refiring;
    NSString * _startLocationRouting;
    bool  _tentative;
    NSString * _title;
}

@property (nonatomic, readonly) bool acknowledged;
@property (nonatomic, readonly) NSURL *action;
@property (nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) NSUserActivity *appLink;
@property (nonatomic, readonly) NSString *dismissalID;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSURL *entityID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, retain) NSDate *fireDate;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } geoLocationCoordinates;
@property (nonatomic) bool hasDisplayedLeaveByMessage;
@property (nonatomic) bool hasDisplayedLeaveNowMessage;
@property (nonatomic) bool hasDisplayedRunningLateMessage;
@property (nonatomic) bool hasGeoLocationCoordinates;
@property (nonatomic) bool hasOrganizerThatIsNotCurrentUser;
@property (nonatomic, readonly) bool isOffsetFromTravelTimeStart;
@property (nonatomic, readonly) bool isPseudoEvent;
@property (nonatomic, readonly) bool isPurelyATimeToLeaveAlert;
@property (nonatomic, retain) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (nonatomic, retain) NSDate *lastTimeBulletinAdded;
@property (nonatomic, retain) EKTravelEngineHypothesis *latestHypothesis;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, retain) NSString *locationAddress;
@property (nonatomic, retain) NSData *mapKitHandle;
@property (nonatomic, retain) NSString *organizerEmailAddress;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *publisherBulletinID;
@property (nonatomic, readonly) NSString *recordID;
@property (nonatomic, readonly) bool refiring;
@property (nonatomic, retain) NSString *startLocationRouting;
@property (nonatomic, readonly) bool tentative;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)acknowledged;
- (id)action;
- (id)alarmID;
- (bool)allDay;
- (id)appLink;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dismissalID;
- (id)endDate;
- (id)entityID;
- (id)eventDate;
- (id)eventTimeZone;
- (id)externalID;
- (id)fireDate;
- (struct CLLocationCoordinate2D { double x1; double x2; })geoLocationCoordinates;
- (bool)hasDisplayedLeaveByMessage;
- (bool)hasDisplayedLeaveNowMessage;
- (bool)hasDisplayedRunningLateMessage;
- (bool)hasGeoLocationCoordinates;
- (bool)hasOrganizerThatIsNotCurrentUser;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(bool)arg6 tentative:(bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 appLink:(id)arg10 action:(id)arg11 proximity:(long long)arg12 externalID:(id)arg13 acknowledged:(bool)arg14 dismissalID:(id)arg15 alarmID:(id)arg16 isOffsetFromTravelTimeStart:(bool)arg17 refiring:(bool)arg18 pseudoEvent:(bool)arg19;
- (bool)isEqual:(id)arg1;
- (bool)isOffsetFromTravelTimeStart;
- (bool)isPseudoEvent;
- (bool)isPurelyATimeToLeaveAlert;
- (id)lastFireTimeOfAlertOffsetFromTravelTime;
- (id)lastTimeBulletinAdded;
- (id)latestHypothesis;
- (id)location;
- (id)locationAddress;
- (id)mapKitHandle;
- (id)organizerEmailAddress;
- (long long)proximity;
- (id)publisherBulletinID;
- (id)recordID;
- (bool)refiring;
- (void)resetTimeToLeaveDisplayState;
- (void)setFireDate:(id)arg1;
- (void)setGeoLocationCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setHasDisplayedLeaveByMessage:(bool)arg1;
- (void)setHasDisplayedLeaveNowMessage:(bool)arg1;
- (void)setHasDisplayedRunningLateMessage:(bool)arg1;
- (void)setHasGeoLocationCoordinates:(bool)arg1;
- (void)setHasOrganizerThatIsNotCurrentUser:(bool)arg1;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)arg1;
- (void)setLastTimeBulletinAdded:(id)arg1;
- (void)setLatestHypothesis:(id)arg1;
- (void)setLocationAddress:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setOrganizerEmailAddress:(id)arg1;
- (void)setStartLocationRouting:(id)arg1;
- (id)startLocationRouting;
- (bool)tentative;
- (id)title;

@end