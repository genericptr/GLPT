{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesFoundation;
interface

type
  NSArray = objcclass external;
  NSAssertionHandler = objcclass external;
  NSAttributedString = objcclass external;
  NSAutoreleasePool = objcclass external;
  NSBlockOperation = objcclass external;
  NSBundle = objcclass external;
  NSByteCountFormatter = objcclass external;
  NSCache = objcclass external;
  NSCachedURLResponse = objcclass external;
  NSCalendar = objcclass external;
  NSCharacterSet = objcclass external;
  NSCoder = objcclass external;
  NSComparisonPredicate = objcclass external;
  NSCompoundPredicate = objcclass external;
  NSCondition = objcclass external;
  NSConditionLock = objcclass external;
  NSConstantString = objcclass external;
  NSCountedSet = objcclass external;
  NSData = objcclass external;
  NSDataDetector = objcclass external;
  NSDate = objcclass external;
  NSDateComponents = objcclass external;
  NSDateComponentsFormatter = objcclass external;
  NSDateFormatter = objcclass external;
  NSDateIntervalFormatter = objcclass external;
  NSDecimalNumber = objcclass external;
  NSDecimalNumberHandler = objcclass external;
  NSDictionary = objcclass external;
  NSDirectoryEnumerator = objcclass external;
  NSEnergyFormatter = objcclass external;
  NSEnumerator = objcclass external;
  NSError = objcclass external;
  NSException = objcclass external;
  NSExpression = objcclass external;
  NSFileAccessIntent = objcclass external;
  NSFileCoordinator = objcclass external;
  NSFileHandle = objcclass external;
  NSFileManager = objcclass external;
  NSFileVersion = objcclass external;
  NSFileWrapper = objcclass external;
  NSFormatter = objcclass external;
  NSHTTPCookie = objcclass external;
  NSHTTPCookieStorage = objcclass external;
  NSHTTPURLResponse = objcclass external;
  NSHashTable = objcclass external;
  NSIndexPath = objcclass external;
  NSIndexSet = objcclass external;
  NSInputStream = objcclass external;
  NSInvocation = objcclass external;
  NSInvocationOperation = objcclass external;
  NSItemProvider = objcclass external;
  NSJSONSerialization = objcclass external;
  NSKeyedArchiver = objcclass external;
  NSKeyedUnarchiver = objcclass external;
  NSLengthFormatter = objcclass external;
  NSLinguisticTagger = objcclass external;
  NSLocale = objcclass external;
  NSLock = objcclass external;
  NSMachPort = objcclass external;
  NSMapTable = objcclass external;
  NSMassFormatter = objcclass external;
  NSMessagePort = objcclass external;
  NSMetadataItem = objcclass external;
  NSMetadataQuery = objcclass external;
  NSMetadataQueryAttributeValueTuple = objcclass external;
  NSMetadataQueryResultGroup = objcclass external;
  NSMethodSignature = objcclass external;
  NSMutableArray = objcclass external;
  NSMutableAttributedString = objcclass external;
  NSMutableCharacterSet = objcclass external;
  NSMutableData = objcclass external;
  NSMutableDictionary = objcclass external;
  NSMutableIndexSet = objcclass external;
  NSMutableOrderedSet = objcclass external;
  NSMutableSet = objcclass external;
  NSMutableString = objcclass external;
  NSMutableURLRequest = objcclass external;
  NSNetService = objcclass external;
  NSNetServiceBrowser = objcclass external;
  NSNotification = objcclass external;
  NSNotificationCenter = objcclass external;
  NSNotificationQueue = objcclass external;
  NSNull = objcclass external;
  NSNumber = objcclass external;
  NSNumberFormatter = objcclass external;
  NSOperation = objcclass external;
  NSOperationQueue = objcclass external;
  NSOrderedSet = objcclass external;
  NSOrthography = objcclass external;
  NSOutputStream = objcclass external;
  NSPipe = objcclass external;
  NSPointerArray = objcclass external;
  NSPointerFunctions = objcclass external;
  NSPort = objcclass external;
  NSPredicate = objcclass external;
  NSProcessInfo = objcclass external;
  NSProgress = objcclass external;
  NSPropertyListSerialization = objcclass external;
  NSProxy = objcclass external;
  NSPurgeableData = objcclass external;
  NSRecursiveLock = objcclass external;
  NSRegularExpression = objcclass external;
  NSRunLoop = objcclass external;
  NSScanner = objcclass external;
  NSSet = objcclass external;
  NSSimpleCString = objcclass external;
  NSSocketPort = objcclass external;
  NSSortDescriptor = objcclass external;
  NSStream = objcclass external;
  NSString = objcclass external;
  NSTextCheckingResult = objcclass external;
  NSThread = objcclass external;
  NSTimeZone = objcclass external;
  NSTimer = objcclass external;
  NSURL = objcclass external;
  NSURLAuthenticationChallenge = objcclass external;
  NSURLCache = objcclass external;
  NSURLComponents = objcclass external;
  NSURLConnection = objcclass external;
  NSURLCredential = objcclass external;
  NSURLCredentialStorage = objcclass external;
  NSURLProtectionSpace = objcclass external;
  NSURLProtocol = objcclass external;
  NSURLQueryItem = objcclass external;
  NSURLRequest = objcclass external;
  NSURLResponse = objcclass external;
  NSURLSession = objcclass external;
  NSURLSessionConfiguration = objcclass external;
  NSURLSessionDataTask = objcclass external;
  NSURLSessionDownloadTask = objcclass external;
  NSURLSessionTask = objcclass external;
  NSURLSessionUploadTask = objcclass external;
  NSUUID = objcclass external;
  NSUbiquitousKeyValueStore = objcclass external;
  NSUndoManager = objcclass external;
  NSUserActivity = objcclass external;
  NSUserDefaults = objcclass external;
  NSValue = objcclass external;
  NSValueTransformer = objcclass external;
  NSXMLParser = objcclass external;
  NSCacheDelegateProtocol = objcprotocol external name 'NSCacheDelegate';
  NSCodingProtocol = objcprotocol external name 'NSCoding';
  NSCopyingProtocol = objcprotocol external name 'NSCopying';
  NSDecimalNumberBehaviorsProtocol = objcprotocol external name 'NSDecimalNumberBehaviors';
  NSDiscardableContentProtocol = objcprotocol external name 'NSDiscardableContent';
  NSExtensionRequestHandlingProtocol = objcprotocol external name 'NSExtensionRequestHandling';
  NSFastEnumerationProtocol = objcprotocol external name 'NSFastEnumeration';
  NSFileManagerDelegateProtocol = objcprotocol external name 'NSFileManagerDelegate';
  NSFilePresenterProtocol = objcprotocol external name 'NSFilePresenter';
  NSKeyedArchiverDelegateProtocol = objcprotocol external name 'NSKeyedArchiverDelegate';
  NSKeyedUnarchiverDelegateProtocol = objcprotocol external name 'NSKeyedUnarchiverDelegate';
  NSLockingProtocol = objcprotocol external name 'NSLocking';
  NSMachPortDelegateProtocol = objcprotocol external name 'NSMachPortDelegate';
  NSMetadataQueryDelegateProtocol = objcprotocol external name 'NSMetadataQueryDelegate';
  NSMutableCopyingProtocol = objcprotocol external name 'NSMutableCopying';
  NSNetServiceBrowserDelegateProtocol = objcprotocol external name 'NSNetServiceBrowserDelegate';
  NSNetServiceDelegateProtocol = objcprotocol external name 'NSNetServiceDelegate';
  NSPortDelegateProtocol = objcprotocol external name 'NSPortDelegate';
  NSSecureCodingProtocol = objcprotocol external name 'NSSecureCoding';
  NSStreamDelegateProtocol = objcprotocol external name 'NSStreamDelegate';
  NSURLAuthenticationChallengeSenderProtocol = objcprotocol external name 'NSURLAuthenticationChallengeSender';
  NSURLConnectionDataDelegateProtocol = objcprotocol external name 'NSURLConnectionDataDelegate';
  NSURLConnectionDelegateProtocol = objcprotocol external name 'NSURLConnectionDelegate';
  NSURLConnectionDownloadDelegateProtocol = objcprotocol external name 'NSURLConnectionDownloadDelegate';
  NSURLProtocolClientProtocol = objcprotocol external name 'NSURLProtocolClient';
  NSURLSessionDataDelegateProtocol = objcprotocol external name 'NSURLSessionDataDelegate';
  NSURLSessionDelegateProtocol = objcprotocol external name 'NSURLSessionDelegate';
  NSURLSessionDownloadDelegateProtocol = objcprotocol external name 'NSURLSessionDownloadDelegate';
  NSURLSessionTaskDelegateProtocol = objcprotocol external name 'NSURLSessionTaskDelegate';
  NSUserActivityDelegateProtocol = objcprotocol external name 'NSUserActivityDelegate';
  NSXMLParserDelegateProtocol = objcprotocol external name 'NSXMLParserDelegate';

type
  NSCachedURLResponseInternal = objcclass external;
  NSConnection = objcclass external;
  NSExtensionContext = objcclass external;
  NSHTTPCookieInternal = objcclass external;
  NSHTTPCookieStorageInternal = objcclass external;
  NSHTTPURLResponseInternal = objcclass external;
  NSHost = objcclass external;
  NSPortMessage = objcclass external;
  NSPredicateOperator = objcclass external;
  NSURLAuthenticationChallengeInternal = objcclass external;
  NSURLCacheInternal = objcclass external;
  NSURLConnectionInternal = objcclass external;
  NSURLCredentialInternal = objcclass external;
  NSURLCredentialStorageInternal = objcclass external;
  NSURLProtectionSpaceInternal = objcclass external;
  NSURLProtocolInternal = objcclass external;
  NSURLRequestInternal = objcclass external;
  NSURLResponseInternal = objcclass external;
  NSXPCConnection = objcclass external;
  Protocol = objcclass external;

implementation
end.
