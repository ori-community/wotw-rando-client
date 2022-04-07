namespace app {
struct WellKnownServiceTypeEntry {
  struct WellKnownServiceTypeEntry__Class *klass;
  struct MonitorData *monitor;
  struct WellKnownServiceTypeEntry__Fields fields;
};
struct WellKnownServiceTypeEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WellKnownServiceTypeEntry__StaticFields {
};
struct WellKnownServiceTypeEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WellKnownServiceTypeEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WellKnownServiceTypeEntry__VTable vtable;
};

struct __declspec(align(8)) ChannelData__Fields {
  struct String * Ref;
  struct String * Type;
  struct String * Id;
  struct String * DelayLoadAsClientChannel;
  struct ArrayList * _serverProviders;
  struct ArrayList * _clientProviders;
  struct Hashtable * _customProperties;
};
struct ChannelData {
  struct ChannelData__Class *klass;
  struct MonitorData *monitor;
  struct ChannelData__Fields fields;
};
struct ChannelData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChannelData__StaticFields {
};
struct ChannelData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChannelData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChannelData__VTable vtable;
};

struct __declspec(align(8)) ProviderData__Fields {
  struct String * Ref;
  struct String * Type;
  struct String * Id;
  struct Hashtable * CustomProperties;
  struct IList * CustomData;
};
struct ProviderData {
  struct ProviderData__Class *klass;
  struct MonitorData *monitor;
  struct ProviderData__Fields fields;
};
struct ProviderData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ProviderData__StaticFields {
};
struct ProviderData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProviderData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProviderData__VTable vtable;
};

struct __declspec(align(8)) ConfigHandler__Fields {
  struct ArrayList * typeEntries;
  struct ArrayList * channelInstances;
  struct ChannelData * currentChannel;
  struct Stack * currentProviderData;
  struct String * currentClientUrl;
  struct String * appName;
  struct String * currentXmlPath;
  bool onlyDelayedChannels;
};
struct ConfigHandler {
  struct ConfigHandler__Class *klass;
  struct MonitorData *monitor;
  struct ConfigHandler__Fields fields;
};
struct ConfigHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartParsing;
  VirtualInvokeData OnEndParsing;
  VirtualInvokeData OnStartElement;
  VirtualInvokeData OnEndElement;
  VirtualInvokeData OnProcessingInstruction;
  VirtualInvokeData OnChars;
  VirtualInvokeData OnIgnorableWhitespace;
};
struct ConfigHandler__StaticFields {
};
struct ConfigHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfigHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfigHandler__VTable vtable;
};

struct FormatterData__Fields {
  struct ProviderData__Fields _;
};
struct FormatterData {
  struct FormatterData__Class *klass;
  struct MonitorData *monitor;
  struct FormatterData__Fields fields;
};
struct FormatterData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FormatterData__StaticFields {
};
struct FormatterData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FormatterData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FormatterData__VTable vtable;
};

struct RemotingException__Fields {
  struct SystemException__Fields _;
};
struct RemotingException {
  struct RemotingException__Class *klass;
  struct MonitorData *monitor;
  struct RemotingException__Fields fields;
};
struct RemotingException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct RemotingException__StaticFields {
};
struct RemotingException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemotingException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemotingException__VTable vtable;
};

struct IMethodReturnMessage {
  struct IMethodReturnMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IMethodCallMessage {
  struct IMethodCallMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IMethodReturnMessage__VTable {
  VirtualInvokeData get_Exception;
  VirtualInvokeData get_OutArgs;
  VirtualInvokeData get_ReturnValue;
};
struct IMethodReturnMessage__StaticFields {
};
struct IMethodReturnMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMethodReturnMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMethodReturnMessage__VTable vtable;
};
struct IMethodCallMessage__VTable {
};
struct IMethodCallMessage__StaticFields {
};
struct IMethodCallMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMethodCallMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMethodCallMessage__VTable vtable;
};

struct __declspec(align(8)) RealProxy__Fields {
  struct Type * class_to_proxy;
  struct Context * _targetContext;
  struct MarshalByRefObject * _server;
  int32_t _targetDomainId;
  struct String * _targetUri;
  struct Identity * _objectIdentity;
  struct Object * _objTP;
  struct Object * _stubData;
};
struct RealProxy {
  struct RealProxy__Class *klass;
  struct MonitorData *monitor;
  struct RealProxy__Fields fields;
};
struct RemotingProxy__Fields {
  struct RealProxy__Fields _;
  struct IMessageSink * _sink;
  bool _hasEnvoySink;
  struct ConstructionCall * _ctorCall;
};
struct RemotingProxy {
  struct RemotingProxy__Class *klass;
  struct MonitorData *monitor;
  struct RemotingProxy__Fields fields;
};
struct __declspec(align(8)) MethodCall__Fields {
  struct String * _uri;
  struct String * _typeName;
  struct String * _methodName;
  struct Object__Array * _args;
  struct Type__Array * _methodSignature;
  struct MethodBase * _methodBase;
  struct LogicalCallContext * _callContext;
  struct Identity * _targetIdentity;
  struct Type__Array * _genericArguments;
  struct IDictionary * ExternalProperties;
  struct IDictionary * InternalProperties;
};
struct MethodCall {
  struct MethodCall__Class *klass;
  struct MonitorData *monitor;
  struct MethodCall__Fields fields;
};
struct ConstructionCall__Fields {
  struct MethodCall__Fields _;
  struct IActivator * _activator;
  struct Object__Array * _activationAttributes;
  struct IList * _contextProperties;
  struct Type * _activationType;
  struct String * _activationTypeName;
  bool _isContextOk;
  struct RemotingProxy * _sourceProxy;
};
struct ConstructionCall {
  struct ConstructionCall__Class *klass;
  struct MonitorData *monitor;
  struct ConstructionCall__Fields fields;
};
struct IActivator {
  struct IActivator__Class *klass;
  struct MonitorData *monitor;
};
struct MethodCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ArgCount;
  VirtualInvokeData get_Args;
  VirtualInvokeData get_LogicalCallContext;
  VirtualInvokeData get_MethodBase;
  VirtualInvokeData get_MethodName;
  VirtualInvokeData get_MethodSignature;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData get_Uri;
  VirtualInvokeData GetArg;
  VirtualInvokeData get_Properties;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri;
  VirtualInvokeData InitMethodProperty;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData get_Properties_1;
  VirtualInvokeData InitDictionary;
  VirtualInvokeData Init;
};
struct MethodCall__StaticFields {
};
struct MethodCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MethodCall__VTable vtable;
};
struct IActivator__VTable {
  VirtualInvokeData get_NextActivator;
  VirtualInvokeData Activate;
};
struct IActivator__StaticFields {
};
struct IActivator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IActivator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IActivator__VTable vtable;
};
struct ConstructionCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ArgCount;
  VirtualInvokeData get_Args;
  VirtualInvokeData get_LogicalCallContext;
  VirtualInvokeData get_MethodBase;
  VirtualInvokeData get_MethodName;
  VirtualInvokeData get_MethodSignature;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData get_Uri;
  VirtualInvokeData GetArg;
  VirtualInvokeData get_Properties;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri;
  VirtualInvokeData InitMethodProperty;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData get_Properties_1;
  VirtualInvokeData InitDictionary;
  VirtualInvokeData Init;
  VirtualInvokeData get_ActivationType;
  VirtualInvokeData get_ActivationTypeName;
  VirtualInvokeData get_Activator;
  VirtualInvokeData set_Activator;
  VirtualInvokeData get_CallSiteActivationAttributes;
  VirtualInvokeData get_ContextProperties;
};
struct ConstructionCall__StaticFields {
};
struct ConstructionCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstructionCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstructionCall__VTable vtable;
};
struct RemotingProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Invoke;
  VirtualInvokeData InternalGetTransparentProxy;
  VirtualInvokeData GetTransparentProxy;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData CanCastTo;
};
struct RemotingProxy__StaticFields {
  struct MethodInfo_1 * _cache_GetTypeMethod;
  struct MethodInfo_1 * _cache_GetHashCodeMethod;
};
struct RemotingProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemotingProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemotingProxy__VTable vtable;
};
struct RealProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData __unknown;
  VirtualInvokeData InternalGetTransparentProxy;
  VirtualInvokeData GetTransparentProxy;
};
struct RealProxy__StaticFields {
};
struct RealProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RealProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RealProxy__VTable vtable;
};

struct IMethodMessage {
  struct IMethodMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IMethodMessage__VTable {
  VirtualInvokeData get_ArgCount;
  VirtualInvokeData get_Args;
  VirtualInvokeData get_LogicalCallContext;
  VirtualInvokeData get_MethodBase;
  VirtualInvokeData get_MethodName;
  VirtualInvokeData get_MethodSignature;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData get_Uri;
  VirtualInvokeData GetArg;
};
struct IMethodMessage__StaticFields {
};
struct IMethodMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMethodMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMethodMessage__VTable vtable;
};

struct __declspec(align(8)) RemotingServices_CACD__Fields {
  struct Object * d;
  struct Object * c;
};
struct RemotingServices_CACD {
  struct RemotingServices_CACD__Class *klass;
  struct MonitorData *monitor;
  struct RemotingServices_CACD__Fields fields;
};
struct RemotingServices_CACD__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemotingServices_CACD__StaticFields {
};
struct RemotingServices_CACD__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemotingServices_CACD__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemotingServices_CACD__VTable vtable;
};

struct SingletonIdentity__Fields {
  struct ServerIdentity__Fields _;
};
struct SingletonIdentity {
  struct SingletonIdentity__Class *klass;
  struct MonitorData *monitor;
  struct SingletonIdentity__Fields fields;
};
struct SingletonIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData OnLifetimeExpired;
  VirtualInvokeData SyncObjectProcessMessage;
  VirtualInvokeData AsyncObjectProcessMessage;
};
struct SingletonIdentity__StaticFields {
};
struct SingletonIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SingletonIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SingletonIdentity__VTable vtable;
};

struct SingleCallIdentity__Fields {
  struct ServerIdentity__Fields _;
};
struct SingleCallIdentity {
  struct SingleCallIdentity__Class *klass;
  struct MonitorData *monitor;
  struct SingleCallIdentity__Fields fields;
};
struct SingleCallIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData OnLifetimeExpired;
  VirtualInvokeData SyncObjectProcessMessage;
  VirtualInvokeData AsyncObjectProcessMessage;
};
struct SingleCallIdentity__StaticFields {
};
struct SingleCallIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SingleCallIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SingleCallIdentity__VTable vtable;
};

struct __declspec(align(8)) DisposerReplySink__Fields {
  struct IMessageSink * _next;
  struct IDisposable * _disposable;
};
struct DisposerReplySink {
  struct DisposerReplySink__Class *klass;
  struct MonitorData *monitor;
  struct DisposerReplySink__Fields fields;
};
struct IDisposable {
  struct IDisposable__Class *klass;
  struct MonitorData *monitor;
};
struct IDisposable__VTable {
  VirtualInvokeData Dispose;
};
struct IDisposable__StaticFields {
};
struct IDisposable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDisposable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDisposable__VTable vtable;
};
struct DisposerReplySink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct DisposerReplySink__StaticFields {
};
struct DisposerReplySink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisposerReplySink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisposerReplySink__VTable vtable;
};

struct __declspec(align(8)) SoapServices_TypeInfo__Fields {
  struct Hashtable * Attributes;
  struct Hashtable * Elements;
};
struct SoapServices_TypeInfo {
  struct SoapServices_TypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct SoapServices_TypeInfo__Fields fields;
};
struct SoapServices_TypeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoapServices_TypeInfo__StaticFields {
};
struct SoapServices_TypeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoapServices_TypeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoapServices_TypeInfo__VTable vtable;
};

struct __declspec(align(8)) TypeInfo_1__Fields {
  struct String * serverType;
  struct String__Array * serverHierarchy;
  struct String__Array * interfacesImplemented;
};
struct TypeInfo_1 {
  struct TypeInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct TypeInfo_1__Fields fields;
};
struct TypeInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData CanCastTo;
};
struct TypeInfo_1__StaticFields {
};
struct TypeInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeInfo_1__VTable vtable;
};

struct ProxyAttribute {
  struct ProxyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct IConstructionCallMessage {
  struct IConstructionCallMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IConstructionCallMessage__VTable {
  VirtualInvokeData get_ActivationType;
  VirtualInvokeData get_ActivationTypeName;
  VirtualInvokeData get_Activator;
  VirtualInvokeData set_Activator;
  VirtualInvokeData get_CallSiteActivationAttributes;
  VirtualInvokeData get_ContextProperties;
};
struct IConstructionCallMessage__StaticFields {
};
struct IConstructionCallMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IConstructionCallMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IConstructionCallMessage__VTable vtable;
};
struct ProxyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData GetPropertiesForNewContext;
  VirtualInvokeData IsContextOK;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData CreateProxy;
};
struct ProxyAttribute__StaticFields {
};
struct ProxyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProxyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProxyAttribute__VTable vtable;
};

struct __declspec(align(8)) TransparentProxy__Fields {
  struct RealProxy * _rp;
  struct RuntimeRemoteClassHandle _class;
  bool _custom_type_info;
};
struct TransparentProxy {
  struct TransparentProxy__Class *klass;
  struct MonitorData *monitor;
  struct TransparentProxy__Fields fields;
};
struct TransparentProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransparentProxy__StaticFields {
};
struct TransparentProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransparentProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransparentProxy__VTable vtable;
};

enum CallType__Enum : int32_t {
  CallType__Enum_Sync = 0,
  CallType__Enum_BeginInvoke = 1,
  CallType__Enum_EndInvoke = 2,
  CallType__Enum_OneWay = 3,
};
struct CallType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CallType__Enum value;
};
struct __declspec(align(8)) MonoMethodMessage__Fields {
  struct MonoMethod * method;
  struct Object__Array * args;
  struct String__Array * names;
  struct Byte__Array * arg_types;
  struct LogicalCallContext * ctx;
  struct Object * rval;
  struct Exception * exc;
  struct AsyncResult * asyncResult;
  enum CallType__Enum call_type;
  struct String * uri;
  struct MCMDictionary * properties;
  struct Type__Array * methodSignature;
  struct Identity * identity;
};
struct MonoMethodMessage {
  struct MonoMethodMessage__Class *klass;
  struct MonitorData *monitor;
  struct MonoMethodMessage__Fields fields;
};
struct __declspec(align(8)) AsyncResult__Fields {
  struct Object * async_state;
  struct WaitHandle * handle;
  struct Object * async_delegate;
  void * data;
  struct Object * object_data;
  bool sync_completed;
  bool completed;
  bool endinvoke_called;
  struct Object * async_callback;
  struct ExecutionContext * current;
  struct ExecutionContext * original;
  int64_t add_time;
  struct MonoMethodMessage * call_message;
  struct IMessageCtrl * message_ctrl;
  struct IMessage * reply_message;
  struct WaitCallback * orig_cb;
};
struct AsyncResult {
  struct AsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct AsyncResult__Fields fields;
};
struct __declspec(align(8)) MessageDictionary__Fields {
  struct IDictionary * _internalProperties;
  struct IMethodMessage * _message;
  struct String__Array * _methodKeys;
  bool _ownProperties;
};
struct MessageDictionary {
  struct MessageDictionary__Class *klass;
  struct MonitorData *monitor;
  struct MessageDictionary__Fields fields;
};
struct MCMDictionary__Fields {
  struct MessageDictionary__Fields _;
};
struct MCMDictionary {
  struct MCMDictionary__Class *klass;
  struct MonitorData *monitor;
  struct MCMDictionary__Fields fields;
};
struct AsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_AsyncState_1;
  VirtualInvokeData get_AsyncWaitHandle_1;
  VirtualInvokeData get_CompletedSynchronously_1;
  VirtualInvokeData get_IsCompleted_1;
  VirtualInvokeData get_AsyncDelegate;
  VirtualInvokeData get_NextSink;
  VirtualInvokeData AsyncProcessMessage_1;
  VirtualInvokeData GetReplyMessage;
  VirtualInvokeData SetMessageCtrl;
  VirtualInvokeData SyncProcessMessage_1;
};
struct AsyncResult__StaticFields {
  struct ContextCallback * ccb;
};
struct AsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncResult__VTable vtable;
};
struct MessageDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData Contains;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Remove;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData AllocInternalProperties;
  VirtualInvokeData GetMethodProperty;
  VirtualInvokeData SetMethodProperty;
};
struct MessageDictionary__StaticFields {
};
struct MessageDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MessageDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MessageDictionary__VTable vtable;
};
struct MCMDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData Contains;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Remove;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData AllocInternalProperties;
  VirtualInvokeData GetMethodProperty;
  VirtualInvokeData SetMethodProperty;
};
struct MCMDictionary__StaticFields {
  struct String__Array * InternalKeys;
};
struct MCMDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MCMDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MCMDictionary__VTable vtable;
};
struct MonoMethodMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ArgCount;
  VirtualInvokeData get_Args;
  VirtualInvokeData get_LogicalCallContext;
  VirtualInvokeData get_MethodBase;
  VirtualInvokeData get_MethodName;
  VirtualInvokeData get_MethodSignature;
  VirtualInvokeData get_TypeName;
  VirtualInvokeData get_Uri;
  VirtualInvokeData GetArg;
  VirtualInvokeData get_Properties;
  VirtualInvokeData get_Exception;
  VirtualInvokeData get_OutArgs;
  VirtualInvokeData get_ReturnValue;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity;
  VirtualInvokeData get_Uri_1;
  VirtualInvokeData set_Uri;
  VirtualInvokeData get_OutArgCount;
};
struct MonoMethodMessage__StaticFields {
  struct String * CallContextKey;
  struct String * UriKey;
};
struct MonoMethodMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoMethodMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoMethodMessage__VTable vtable;
};

struct __declspec(align(8)) LeaseManager__Fields {
  struct ArrayList * _objects;
  struct Timer * _timer;
};
struct LeaseManager {
  struct LeaseManager__Class *klass;
  struct MonitorData *monitor;
  struct LeaseManager__Fields fields;
};
struct LeaseManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaseManager__StaticFields {
};
struct LeaseManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaseManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaseManager__VTable vtable;
};

struct __declspec(align(8)) LeaseSink__Fields {
  struct IMessageSink * _nextSink;
};
struct LeaseSink {
  struct LeaseSink__Class *klass;
  struct MonitorData *monitor;
  struct LeaseSink__Fields fields;
};
struct LeaseSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct LeaseSink__StaticFields {
};
struct LeaseSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaseSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaseSink__VTable vtable;
};

struct IDynamicProperty {
  struct IDynamicProperty__Class *klass;
  struct MonitorData *monitor;
};
struct IDynamicProperty__VTable {
  VirtualInvokeData get_Name;
};
struct IDynamicProperty__StaticFields {
};
struct IDynamicProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDynamicProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDynamicProperty__VTable vtable;
};

struct CrossContextDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct CrossContextDelegate {
  struct CrossContextDelegate__Class *klass;
  struct MonitorData *monitor;
  struct CrossContextDelegate__Fields fields;
};
struct CrossContextDelegate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};}