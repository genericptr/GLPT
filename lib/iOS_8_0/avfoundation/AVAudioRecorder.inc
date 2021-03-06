{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioRecorder.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{ Types from AVAudioRecorder }
{$ifdef TYPES}

{$endif}


{ Types from AVAudioRecorderDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioRecorderPtr = ^AVAudioRecorder;
  AVAudioRecorderDelegateProtocolPtr = ^AVAudioRecorderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAudioRecorder = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function initWithURL_settings_error (url: NSURL; settings: NSDictionary; outError: NSErrorPtr): instancetype; message 'initWithURL:settings:error:';
    function prepareToRecord: boolean; message 'prepareToRecord';
    function record_: boolean; message 'record';
    function recordAtTime (time: NSTimeInterval): boolean; message 'recordAtTime:'; { available in 6_0 }
    function recordForDuration (duration: NSTimeInterval): boolean; message 'recordForDuration:';
    function recordAtTime_forDuration (time: NSTimeInterval; duration: NSTimeInterval): boolean; message 'recordAtTime:forDuration:'; { available in 6_0 }
    procedure pause; message 'pause';
    procedure stop; message 'stop';
    function deleteRecording: boolean; message 'deleteRecording';
    function isRecording: boolean; message 'isRecording';
    function url: NSURL; message 'url';
    function settings: NSDictionary; message 'settings';
    procedure setDelegate(newValue: AVAudioRecorderDelegateProtocol); message 'setDelegate:';
    function delegate: AVAudioRecorderDelegateProtocol; message 'delegate';
    function currentTime: NSTimeInterval; message 'currentTime';
    function deviceCurrentTime: NSTimeInterval; message 'deviceCurrentTime';
    procedure setMeteringEnabled(newValue: boolean); message 'setMeteringEnabled:';
    function isMeteringEnabled: boolean; message 'isMeteringEnabled';
    procedure updateMeters; message 'updateMeters';
    function peakPowerForChannel (channelNumber: NSUInteger): single; message 'peakPowerForChannel:';
    function averagePowerForChannel (channelNumber: NSUInteger): single; message 'averagePowerForChannel:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setChannelAssignments(newValue: NSArray); message 'setChannelAssignments:';
    function channelAssignments: NSArray; message 'channelAssignments';
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioRecorderDelegateProtocol = objcprotocol external name 'AVAudioRecorderDelegate' (NSObjectProtocol)
  optional
    procedure audioRecorderDidFinishRecording_successfully (recorder: AVAudioRecorder; flag: boolean); message 'audioRecorderDidFinishRecording:successfully:';
    procedure audioRecorderEncodeErrorDidOccur_error (recorder: AVAudioRecorder; error: NSError); message 'audioRecorderEncodeErrorDidOccur:error:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure audioRecorderBeginInterruption (recorder: AVAudioRecorder); message 'audioRecorderBeginInterruption:'; deprecated 'in 2_2, 8_0';
    procedure audioRecorderEndInterruption_withOptions (recorder: AVAudioRecorder; flags: NSUInteger); message 'audioRecorderEndInterruption:withOptions:'; deprecated 'in 6_0, 8_0';
    procedure audioRecorderEndInterruption_withFlags (recorder: AVAudioRecorder; flags: NSUInteger); message 'audioRecorderEndInterruption:withFlags:'; deprecated 'in 4_0, 6_0';
    procedure audioRecorderEndInterruption (recorder: AVAudioRecorder); message 'audioRecorderEndInterruption:'; deprecated 'in 2_2, 6_0';
    {$endif}
  end;
{$endif}

