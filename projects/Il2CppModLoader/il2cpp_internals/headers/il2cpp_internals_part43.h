namespace app {
struct CrossContextDelegate__StaticFields {
};
struct CrossContextDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossContextDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossContextDelegate__VTable vtable;
};

struct __declspec(align(8)) DynamicPropertyCollection_DynamicPropertyReg__Fields {
  struct IDynamicProperty * Property;
  struct IDynamicMessageSink * Sink;
};
struct DynamicPropertyCollection_DynamicPropertyReg {
  struct DynamicPropertyCollection_DynamicPropertyReg__Class *klass;
  struct MonitorData *monitor;
  struct DynamicPropertyCollection_DynamicPropertyReg__Fields fields;
};
struct IDynamicMessageSink {
  struct IDynamicMessageSink__Class *klass;
  struct MonitorData *monitor;
};
struct IDynamicMessageSink__VTable {
  VirtualInvokeData ProcessMessageFinish;
  VirtualInvokeData ProcessMessageStart;
};
struct IDynamicMessageSink__StaticFields {
};
struct IDynamicMessageSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDynamicMessageSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDynamicMessageSink__VTable vtable;
};
struct DynamicPropertyCollection_DynamicPropertyReg__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DynamicPropertyCollection_DynamicPropertyReg__StaticFields {
};
struct DynamicPropertyCollection_DynamicPropertyReg__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicPropertyCollection_DynamicPropertyReg__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicPropertyCollection_DynamicPropertyReg__VTable vtable;
};

struct CrossContextChannel {
  struct CrossContextChannel__Class *klass;
  struct MonitorData *monitor;
};
struct CrossContextChannel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct CrossContextChannel__StaticFields {
};
struct CrossContextChannel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossContextChannel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossContextChannel__VTable vtable;
};

struct __declspec(align(8)) CrossContextChannel_ContextRestoreSink__Fields {
  struct IMessageSink * _next;
  struct Context * _context;
  struct IMessage * _call;
};
struct CrossContextChannel_ContextRestoreSink {
  struct CrossContextChannel_ContextRestoreSink__Class *klass;
  struct MonitorData *monitor;
  struct CrossContextChannel_ContextRestoreSink__Fields fields;
};
struct CrossContextChannel_ContextRestoreSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct CrossContextChannel_ContextRestoreSink__StaticFields {
};
struct CrossContextChannel_ContextRestoreSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossContextChannel_ContextRestoreSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossContextChannel_ContextRestoreSink__VTable vtable;
};

struct IChannelSender {
  struct IChannelSender__Class *klass;
  struct MonitorData *monitor;
};
struct IChannelSender__VTable {
  VirtualInvokeData CreateMessageSink;
};
struct IChannelSender__StaticFields {
};
struct IChannelSender__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IChannelSender__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IChannelSender__VTable vtable;
};

struct IChannel {
  struct IChannel__Class *klass;
  struct MonitorData *monitor;
};
struct IChannel__VTable {
  VirtualInvokeData get_ChannelName;
  VirtualInvokeData get_ChannelPriority;
};
struct IChannel__StaticFields {
};
struct IChannel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IChannel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IChannel__VTable vtable;
};

struct __declspec(align(8)) ReturnMessage__Fields {
  struct Object__Array * _outArgs;
  struct Object__Array * _args;
  struct LogicalCallContext * _callCtx;
  struct Object * _returnValue;
  struct String * _uri;
  struct Exception * _exception;
  struct MethodBase * _methodBase;
  struct String * _methodName;
  struct Type__Array * _methodSignature;
  struct String * _typeName;
  struct MethodReturnDictionary * _properties;
  struct Identity * _targetIdentity;
  struct ArgInfo * _inArgInfo;
};
struct ReturnMessage {
  struct ReturnMessage__Class *klass;
  struct MonitorData *monitor;
  struct ReturnMessage__Fields fields;
};
struct MethodReturnDictionary__Fields {
  struct MessageDictionary__Fields _;
};
struct MethodReturnDictionary {
  struct MethodReturnDictionary__Class *klass;
  struct MonitorData *monitor;
  struct MethodReturnDictionary__Fields fields;
};
struct __declspec(align(8)) ArgInfo__Fields {
  struct Int32__Array * _paramMap;
  int32_t _inoutArgCount;
  struct MethodBase * _method;
};
struct ArgInfo {
  struct ArgInfo__Class *klass;
  struct MonitorData *monitor;
  struct ArgInfo__Fields fields;
};
struct MethodReturnDictionary__VTable {
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
struct MethodReturnDictionary__StaticFields {
  struct String__Array * InternalReturnKeys;
  struct String__Array * InternalExceptionKeys;
};
struct MethodReturnDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodReturnDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MethodReturnDictionary__VTable vtable;
};
struct ArgInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArgInfo__StaticFields {
};
struct ArgInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArgInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArgInfo__VTable vtable;
};
struct ReturnMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Exception;
  VirtualInvokeData get_OutArgs;
  VirtualInvokeData get_ReturnValue;
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
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri;
  VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri;
  VirtualInvokeData get_Properties_1;
  VirtualInvokeData get_ReturnValue_1;
};
struct ReturnMessage__StaticFields {
};
struct ReturnMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReturnMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReturnMessage__VTable vtable;
};

struct __declspec(align(8)) CrossAppDomainData__Fields {
  struct Object * _ContextID;
  int32_t _DomainID;
  struct String * _processGuid;
};
struct CrossAppDomainData {
  struct CrossAppDomainData__Class *klass;
  struct MonitorData *monitor;
  struct CrossAppDomainData__Fields fields;
};
struct CrossAppDomainData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossAppDomainData__StaticFields {
};
struct CrossAppDomainData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossAppDomainData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossAppDomainData__VTable vtable;
};

struct CrossAppDomainChannel {
  struct CrossAppDomainChannel__Class *klass;
  struct MonitorData *monitor;
};
struct CrossAppDomainChannel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ChannelName;
  VirtualInvokeData get_ChannelPriority;
  VirtualInvokeData CreateMessageSink;
  VirtualInvokeData get_ChannelData;
  VirtualInvokeData StartListening;
  VirtualInvokeData get_ChannelName_1;
  VirtualInvokeData get_ChannelPriority_1;
  VirtualInvokeData get_ChannelData_1;
  VirtualInvokeData StartListening_1;
  VirtualInvokeData CreateMessageSink_1;
};
struct CrossAppDomainChannel__StaticFields {
  struct Object * s_lock;
};
struct CrossAppDomainChannel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossAppDomainChannel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossAppDomainChannel__VTable vtable;
};

struct __declspec(align(8)) CrossAppDomainSink__Fields {
  int32_t _domainID;
};
struct CrossAppDomainSink {
  struct CrossAppDomainSink__Class *klass;
  struct MonitorData *monitor;
  struct CrossAppDomainSink__Fields fields;
};
struct CrossAppDomainSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
  VirtualInvokeData SyncProcessMessage_1;
  VirtualInvokeData AsyncProcessMessage_1;
};
struct CrossAppDomainSink__StaticFields {
  struct Hashtable * s_sinks;
  struct MethodInfo_1 * processMessageMethod;
};
struct CrossAppDomainSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossAppDomainSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossAppDomainSink__VTable vtable;
};

struct CrossAppDomainSink_ProcessMessageRes {
  struct Byte__Array * arrResponse;
  struct CADMethodReturnMessage * cadMrm;
};
struct CrossAppDomainSink_ProcessMessageRes__Boxed {
  struct CrossAppDomainSink_ProcessMessageRes__Class *klass;
  struct MonitorData *monitor;
  struct CrossAppDomainSink_ProcessMessageRes fields;
};
struct CrossAppDomainSink_ProcessMessageRes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossAppDomainSink_ProcessMessageRes__StaticFields {
};
struct CrossAppDomainSink_ProcessMessageRes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossAppDomainSink_ProcessMessageRes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossAppDomainSink_ProcessMessageRes__VTable vtable;
};

struct __declspec(align(8)) AsyncRequest__Fields {
  struct IMessageSink * ReplySink;
  struct IMessage * MsgRequest;
};
struct AsyncRequest {
  struct AsyncRequest__Class *klass;
  struct MonitorData *monitor;
  struct AsyncRequest__Fields fields;
};
struct AsyncRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncRequest__StaticFields {
};
struct AsyncRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncRequest__VTable vtable;
};

struct __declspec(align(8)) SinkProviderData__Fields {
  struct String * sinkName;
  struct ArrayList * children;
  struct Hashtable * properties;
};
struct SinkProviderData {
  struct SinkProviderData__Class *klass;
  struct MonitorData *monitor;
  struct SinkProviderData__Fields fields;
};
struct SinkProviderData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SinkProviderData__StaticFields {
};
struct SinkProviderData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SinkProviderData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SinkProviderData__VTable vtable;
};

struct __declspec(align(8)) AppDomainLevelActivator__Fields {
  struct String * _activationUrl;
  struct IActivator * _next;
};
struct AppDomainLevelActivator {
  struct AppDomainLevelActivator__Class *klass;
  struct MonitorData *monitor;
  struct AppDomainLevelActivator__Fields fields;
};
struct IConstructionReturnMessage {
  struct IConstructionReturnMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IConstructionReturnMessage__VTable {
};
struct IConstructionReturnMessage__StaticFields {
};
struct IConstructionReturnMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IConstructionReturnMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IConstructionReturnMessage__VTable vtable;
};
struct AppDomainLevelActivator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_NextActivator;
  VirtualInvokeData Activate;
};
struct AppDomainLevelActivator__StaticFields {
};
struct AppDomainLevelActivator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AppDomainLevelActivator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AppDomainLevelActivator__VTable vtable;
};

struct ConstructionLevelActivator {
  struct ConstructionLevelActivator__Class *klass;
  struct MonitorData *monitor;
};
struct ConstructionLevelActivator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_NextActivator;
  VirtualInvokeData Activate;
};
struct ConstructionLevelActivator__StaticFields {
};
struct ConstructionLevelActivator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstructionLevelActivator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstructionLevelActivator__VTable vtable;
};

struct __declspec(align(8)) ContextLevelActivator__Fields {
  struct IActivator * m_NextActivator;
};
struct ContextLevelActivator {
  struct ContextLevelActivator__Class *klass;
  struct MonitorData *monitor;
  struct ContextLevelActivator__Fields fields;
};
struct ContextLevelActivator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_NextActivator;
  VirtualInvokeData Activate;
};
struct ContextLevelActivator__StaticFields {
};
struct ContextLevelActivator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContextLevelActivator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContextLevelActivator__VTable vtable;
};

struct __declspec(align(8)) RemoteActivationAttribute__Fields {
  struct IList * _contextProperties;
};
struct RemoteActivationAttribute {
  struct RemoteActivationAttribute__Class *klass;
  struct MonitorData *monitor;
  struct RemoteActivationAttribute__Fields fields;
};
struct RemoteActivationAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData GetPropertiesForNewContext;
  VirtualInvokeData IsContextOK;
};
struct RemoteActivationAttribute__StaticFields {
};
struct RemoteActivationAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteActivationAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteActivationAttribute__VTable vtable;
};

struct RemoteActivator__Fields {
  struct MarshalByRefObject__Fields _;
};
struct RemoteActivator {
  struct RemoteActivator__Class *klass;
  struct MonitorData *monitor;
  struct RemoteActivator__Fields fields;
};
struct RemoteActivator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_NextActivator;
  VirtualInvokeData Activate;
};
struct RemoteActivator__StaticFields {
};
struct RemoteActivator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteActivator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteActivator__VTable vtable;
};

struct SoapFieldAttribute__Fields {
  struct SoapAttribute__Fields _;
  struct String * _elementName;
  bool _isElement;
};
struct SoapFieldAttribute {
  struct SoapFieldAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SoapFieldAttribute__Fields fields;
};
struct SoapFieldAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_UseAttribute;
  VirtualInvokeData get_XmlNamespace;
  VirtualInvokeData SetReflectionObject;
};
struct SoapFieldAttribute__StaticFields {
};
struct SoapFieldAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoapFieldAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoapFieldAttribute__VTable vtable;
};

struct SoapMethodAttribute__Fields {
  struct SoapAttribute__Fields _;
  struct String * _responseElement;
  struct String * _responseNamespace;
  struct String * _returnElement;
  struct String * _soapAction;
  bool _useAttribute;
  struct String * _namespace;
};
struct SoapMethodAttribute {
  struct SoapMethodAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SoapMethodAttribute__Fields fields;
};
struct SoapMethodAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_UseAttribute;
  VirtualInvokeData get_XmlNamespace;
  VirtualInvokeData SetReflectionObject;
};
struct SoapMethodAttribute__StaticFields {
};
struct SoapMethodAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoapMethodAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoapMethodAttribute__VTable vtable;
};

struct SoapParameterAttribute__Fields {
  struct SoapAttribute__Fields _;
};
struct SoapParameterAttribute {
  struct SoapParameterAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SoapParameterAttribute__Fields fields;
};
struct SoapParameterAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_UseAttribute;
  VirtualInvokeData get_XmlNamespace;
  VirtualInvokeData SetReflectionObject;
};
struct SoapParameterAttribute__StaticFields {
};
struct SoapParameterAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoapParameterAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoapParameterAttribute__VTable vtable;
};

struct SoapTypeAttribute__Fields {
  struct SoapAttribute__Fields _;
  bool _useAttribute;
  struct String * _xmlElementName;
  struct String * _xmlNamespace;
  struct String * _xmlTypeName;
  struct String * _xmlTypeNamespace;
  bool _isType;
  bool _isElement;
};
struct SoapTypeAttribute {
  struct SoapTypeAttribute__Class *klass;
  struct MonitorData *monitor;
  struct SoapTypeAttribute__Fields fields;
};
struct SoapTypeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_UseAttribute;
  VirtualInvokeData get_XmlNamespace;
  VirtualInvokeData SetReflectionObject;
};
struct SoapTypeAttribute__StaticFields {
};
struct SoapTypeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoapTypeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoapTypeAttribute__VTable vtable;
};

struct CallContext {
  struct CallContext__Class *klass;
  struct MonitorData *monitor;
};
struct CallContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CallContext__StaticFields {
};
struct CallContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CallContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CallContext__VTable vtable;
};

enum ArgInfoType__Enum : uint8_t {
  ArgInfoType__Enum_In = 0,
  ArgInfoType__Enum_Out = 1,
};
struct ArgInfoType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ArgInfoType__Enum value;
};

struct __declspec(align(8)) CADObjRef__Fields {
  struct ObjRef * objref;
  int32_t SourceDomain;
  struct Byte__Array * TypeInfo;
};
struct CADObjRef {
  struct CADObjRef__Class *klass;
  struct MonitorData *monitor;
  struct CADObjRef__Fields fields;
};
struct CADObjRef__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADObjRef__StaticFields {
};
struct CADObjRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADObjRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADObjRef__VTable vtable;
};

struct __declspec(align(8)) CADMethodRef__Fields {
  bool ctor;
  struct String * typeName;
  struct String * methodName;
  struct String__Array * param_names;
  struct String__Array * generic_arg_names;
};
struct CADMethodRef {
  struct CADMethodRef__Class *klass;
  struct MonitorData *monitor;
  struct CADMethodRef__Fields fields;
};
struct CADMethodRef__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADMethodRef__StaticFields {
};
struct CADMethodRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADMethodRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADMethodRef__VTable vtable;
};

struct __declspec(align(8)) ClientContextTerminatorSink__Fields {
  struct Context * _context;
};
struct ClientContextTerminatorSink {
  struct ClientContextTerminatorSink__Class *klass;
  struct MonitorData *monitor;
  struct ClientContextTerminatorSink__Fields fields;
};
struct ClientContextTerminatorSink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct ClientContextTerminatorSink__StaticFields {
};
struct ClientContextTerminatorSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientContextTerminatorSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientContextTerminatorSink__VTable vtable;
};

struct __declspec(align(8)) ClientContextReplySink__Fields {
  struct IMessageSink * _replySink;
  struct Context * _context;
};
struct ClientContextReplySink {
  struct ClientContextReplySink__Class *klass;
  struct MonitorData *monitor;
  struct ClientContextReplySink__Fields fields;
};
struct ClientContextReplySink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct ClientContextReplySink__StaticFields {
};
struct ClientContextReplySink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientContextReplySink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientContextReplySink__VTable vtable;
};

struct ConstructionCallDictionary__Fields {
  struct MessageDictionary__Fields _;
};
struct ConstructionCallDictionary {
  struct ConstructionCallDictionary__Class *klass;
  struct MonitorData *monitor;
  struct ConstructionCallDictionary__Fields fields;
};
struct ConstructionCallDictionary__VTable {
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
struct ConstructionCallDictionary__StaticFields {
  struct String__Array * InternalKeys;
};
struct ConstructionCallDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstructionCallDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstructionCallDictionary__VTable vtable;
};

struct __declspec(align(8)) MethodResponse__Fields {
  struct String * _methodName;
  struct String * _uri;
  struct String * _typeName;
  struct MethodBase * _methodBase;
  struct Object * _returnValue;
  struct Exception * _exception;
  struct Type__Array * _methodSignature;
  struct ArgInfo * _inArgInfo;
  struct Object__Array * _args;
  struct Object__Array * _outArgs;
  struct IMethodCallMessage * _callMsg;
  struct LogicalCallContext * _callContext;
  struct Identity * _targetIdentity;
  struct IDictionary * ExternalProperties;
  struct IDictionary * InternalProperties;
};
struct MethodResponse {
  struct MethodResponse__Class *klass;
  struct MonitorData *monitor;
  struct MethodResponse__Fields fields;
};
struct ConstructionResponse__Fields {
  struct MethodResponse__Fields _;
};
struct ConstructionResponse {
  struct ConstructionResponse__Class *klass;
  struct MonitorData *monitor;
  struct ConstructionResponse__Fields fields;
};
struct MethodResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Exception;
  VirtualInvokeData get_OutArgs;
  VirtualInvokeData get_ReturnValue;
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
  VirtualInvokeData get_Properties_1;
  VirtualInvokeData GetObjectData_1;
};
struct MethodResponse__StaticFields {
};
struct MethodResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MethodResponse__VTable vtable;
};
struct ConstructionResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Exception;
  VirtualInvokeData get_OutArgs;
  VirtualInvokeData get_ReturnValue;
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
  VirtualInvokeData get_Properties_1;
  VirtualInvokeData GetObjectData_1;
};}