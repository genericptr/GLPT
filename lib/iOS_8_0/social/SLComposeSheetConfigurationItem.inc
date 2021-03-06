{ Parsed from Social.framework (iPhoneOS8.2) SLComposeSheetConfigurationItem.h }
{ Created on Fri Mar 20 2:11:34 2015 }


{$ifdef TYPES}
type
  SLComposeSheetConfigurationItemPtr = ^SLComposeSheetConfigurationItem;
{$endif}

{$ifdef TYPES}
type
  SLComposeSheetConfigurationItemTapHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  SLComposeSheetConfigurationItem = objcclass external (NSObject)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setValue(newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    procedure setValuePending(newValue: boolean); message 'setValuePending:';
    function valuePending: boolean; message 'valuePending';
    procedure setTapHandler(newValue: SLComposeSheetConfigurationItemTapHandler); message 'setTapHandler:';
    function tapHandler: SLComposeSheetConfigurationItemTapHandler; message 'tapHandler';
  end;
{$endif}

