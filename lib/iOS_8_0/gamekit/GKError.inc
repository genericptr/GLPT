{ Parsed from GameKit.framework (iPhoneOS8.2) GKError.h }
{ Created on Fri Mar 20 2:10:56 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  GKErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  GKErrorCode = NSInteger;
  GKErrorCodePtr = ^GKErrorCode;

const
  GKErrorUnknown = 1;
  GKErrorCancelled = 2;
  GKErrorCommunicationsFailure = 3;
  GKErrorUserDenied = 4;
  GKErrorInvalidCredentials = 5;
  GKErrorNotAuthenticated = 6;
  GKErrorAuthenticationInProgress = 7;
  GKErrorInvalidPlayer = 8;
  GKErrorScoreNotSet = 9;
  GKErrorParentalControlsBlocked = 10;
  GKErrorPlayerStatusExceedsMaximumLength = 11;
  GKErrorPlayerStatusInvalid = 12;
  GKErrorMatchRequestInvalid = 13;
  GKErrorUnderage = 14;
  GKErrorGameUnrecognized = 15;
  GKErrorNotSupported = 16;
  GKErrorInvalidParameter = 17;
  GKErrorUnexpectedConnection = 18;
  GKErrorChallengeInvalid = 19;
  GKErrorTurnBasedMatchDataTooLarge = 20;
  GKErrorTurnBasedTooManySessions = 21;
  GKErrorTurnBasedInvalidParticipant = 22;
  GKErrorTurnBasedInvalidTurn = 23;
  GKErrorTurnBasedInvalidState = 24;
  GKErrorInvitationsDisabled = 25;
  GKErrorPlayerPhotoFailure = 26;
  GKErrorUbiquityContainerUnavailable = 27;
{$endif}

