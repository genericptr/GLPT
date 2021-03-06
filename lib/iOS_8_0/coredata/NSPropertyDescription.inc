{ Parsed from CoreData.framework (iPhoneOS8.2) NSPropertyDescription.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSPropertyDescriptionPtr = ^NSPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSPropertyDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
    _versionHashModifier: NSString;
    _underlyingProperty: id;
    _versionHash: NSData;
    _entity: NSEntityDescription;
    _name: NSString;
    _validationPredicates: NSArray;
    _validationWarnings: NSArray;
    __propertyDescriptionFlags: bitpacked record
      case byte of
        0: (_anonBitField___propertyDescriptionFlags0: cuint);
        1: (
          _isReadOnly: 0..1;
          _isTransient: 0..1;
          _isOptional: 0..1;
          _isIndexed: 0..1;
          _skipValidation: 0..1;
          _isIndexedBySpotlight: 0..1;
          _isStoredInExternalRecord: 0..1;
          _extraIvarsAreInDataBlob: 0..1;
          _isOrdered: 0..1;
          _reservedPropertyDescription: 0..((1 shl 23)-1);
        );
      end;
    _extraIvars: pointer;
    _userInfo: NSMutableDictionary;
    _entitysReferenceIDForProperty: clong;
  public
    function entity: NSEntityDescription; message 'entity';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setOptional(newValue: boolean); message 'setOptional:';
    function isOptional: boolean; message 'isOptional';
    procedure setTransient(newValue: boolean); message 'setTransient:';
    function isTransient: boolean; message 'isTransient';
    function validationPredicates: NSArray; message 'validationPredicates';
    function validationWarnings: NSArray; message 'validationWarnings';
    procedure setValidationPredicates_withValidationWarnings (validationPredicates_: NSArray; validationWarnings_: NSArray); message 'setValidationPredicates:withValidationWarnings:';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setIndexed(newValue: boolean); message 'setIndexed:';
    function isIndexed: boolean; message 'isIndexed';
    function versionHash: NSData; message 'versionHash';
    procedure setVersionHashModifier(newValue: NSString); message 'setVersionHashModifier:';
    function versionHashModifier: NSString; message 'versionHashModifier';
    procedure setIndexedBySpotlight(newValue: boolean); message 'setIndexedBySpotlight:';
    function isIndexedBySpotlight: boolean; message 'isIndexedBySpotlight';
    procedure setStoredInExternalRecord(newValue: boolean); message 'setStoredInExternalRecord:';
    function isStoredInExternalRecord: boolean; message 'isStoredInExternalRecord';
    procedure setRenamingIdentifier(newValue: NSString); message 'setRenamingIdentifier:';
    function renamingIdentifier: NSString; message 'renamingIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

