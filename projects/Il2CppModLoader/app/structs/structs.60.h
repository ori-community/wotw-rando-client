namespace app {
    struct ArgInfoType__Enum__StaticFields {
    };

    struct ArgInfoType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ArgInfoType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ArgInfoType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) CADObjRef__Fields {
        struct ObjRef* objref;
        int32_t SourceDomain;
        struct Byte__Array* TypeInfo;
    };

    struct CADObjRef {
        struct CADObjRef__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CADObjRef__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CADObjRef__VTable vtable;
    };

    struct __declspec(align(8)) CADMethodRef__Fields {
        bool ctor;
        struct String* typeName;
        struct String* methodName;
        struct String__Array* param_names;
        struct String__Array* generic_arg_names;
    };

    struct CADMethodRef {
        struct CADMethodRef__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CADMethodRef__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CADMethodRef__VTable vtable;
    };

    struct ArrayList___VTable {
    };

    struct ArrayList___StaticFields {
    };

    struct ArrayList___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ArrayList___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ArrayList___VTable vtable;
    };

    struct __declspec(align(8)) ClientContextTerminatorSink__Fields {
        struct Context* _context;
    };

    struct ClientContextTerminatorSink {
        struct ClientContextTerminatorSink__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClientContextTerminatorSink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClientContextTerminatorSink__VTable vtable;
    };

    struct __declspec(align(8)) ClientContextReplySink__Fields {
        struct IMessageSink* _replySink;
        struct Context* _context;
    };

    struct ClientContextReplySink {
        struct ClientContextReplySink__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClientContextReplySink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClientContextReplySink__VTable vtable;
    };

    struct ConstructionCallDictionary__Fields {
        struct MessageDictionary__Fields _;
    };

    struct ConstructionCallDictionary {
        struct ConstructionCallDictionary__Class* klass;
        MonitorData* monitor;
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
        struct String__Array* InternalKeys;
    };

    struct ConstructionCallDictionary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstructionCallDictionary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstructionCallDictionary__VTable vtable;
    };

    struct __declspec(align(8)) MethodResponse__Fields {
        struct String* _methodName;
        struct String* _uri;
        struct String* _typeName;
        struct MethodBase* _methodBase;
        struct Object* _returnValue;
        struct Exception* _exception;
        struct Type__Array* _methodSignature;
        struct ArgInfo* _inArgInfo;
        struct Object__Array* _args;
        struct Object__Array* _outArgs;
        struct IMethodCallMessage* _callMsg;
        struct LogicalCallContext* _callContext;
        struct Identity* _targetIdentity;
        struct IDictionary* ExternalProperties;
        struct IDictionary* InternalProperties;
    };

    struct MethodResponse {
        struct MethodResponse__Class* klass;
        MonitorData* monitor;
        struct MethodResponse__Fields fields;
    };

    struct ConstructionResponse__Fields {
        struct MethodResponse__Fields _;
    };

    struct ConstructionResponse {
        struct ConstructionResponse__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MethodResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
    };

    struct ConstructionResponse__StaticFields {
    };

    struct ConstructionResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstructionResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstructionResponse__VTable vtable;
    };

    struct EnvoyTerminatorSink {
        struct EnvoyTerminatorSink__Class* klass;
        MonitorData* monitor;
    };

    struct EnvoyTerminatorSink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SyncProcessMessage;
        VirtualInvokeData AsyncProcessMessage;
    };

    struct EnvoyTerminatorSink__StaticFields {
        struct EnvoyTerminatorSink* Instance;
    };

    struct EnvoyTerminatorSink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnvoyTerminatorSink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnvoyTerminatorSink__VTable vtable;
    };

    struct __declspec(align(8)) ErrorMessage__Fields {
        struct String* _uri;
    };

    struct ErrorMessage {
        struct ErrorMessage__Class* klass;
        MonitorData* monitor;
        struct ErrorMessage__Fields fields;
    };

    struct ErrorMessage__VTable {
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
        VirtualInvokeData get_Properties_1;
    };

    struct ErrorMessage__StaticFields {
    };

    struct ErrorMessage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ErrorMessage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ErrorMessage__VTable vtable;
    };

    struct __declspec(align(8)) MessageDictionary_DictionaryEnumerator__Fields {
        struct MessageDictionary* _methodDictionary;
        struct IDictionaryEnumerator* _hashtableEnum;
        int32_t _posMethod;
    };

    struct MessageDictionary_DictionaryEnumerator {
        struct MessageDictionary_DictionaryEnumerator__Class* klass;
        MonitorData* monitor;
        struct MessageDictionary_DictionaryEnumerator__Fields fields;
    };

    struct MessageDictionary_DictionaryEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Key;
        VirtualInvokeData get_Value;
        VirtualInvokeData get_Entry;
        VirtualInvokeData MoveNext;
        VirtualInvokeData get_Current;
        VirtualInvokeData Reset;
    };

    struct MessageDictionary_DictionaryEnumerator__StaticFields {
    };

    struct MessageDictionary_DictionaryEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageDictionary_DictionaryEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageDictionary_DictionaryEnumerator__VTable vtable;
    };

    struct RemotingSurrogate {
        struct RemotingSurrogate__Class* klass;
        MonitorData* monitor;
    };

    struct RemotingSurrogate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData SetObjectData;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData SetObjectData_1;
    };

    struct RemotingSurrogate__StaticFields {
    };

    struct RemotingSurrogate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RemotingSurrogate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RemotingSurrogate__VTable vtable;
    };

    struct ObjRefSurrogate {
        struct ObjRefSurrogate__Class* klass;
        MonitorData* monitor;
    };

    struct ObjRefSurrogate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData SetObjectData;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData SetObjectData_1;
    };

    struct ObjRefSurrogate__StaticFields {
    };

    struct ObjRefSurrogate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ObjRefSurrogate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ObjRefSurrogate__VTable vtable;
    };

    struct __declspec(align(8)) RemotingSurrogateSelector__Fields {
        struct ISurrogateSelector* _next;
    };

    struct RemotingSurrogateSelector {
        struct RemotingSurrogateSelector__Class* klass;
        MonitorData* monitor;
        struct RemotingSurrogateSelector__Fields fields;
    };

    struct ISurrogateSelector___VTable {
    };

    struct ISurrogateSelector___StaticFields {
    };

    struct ISurrogateSelector___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISurrogateSelector___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISurrogateSelector___VTable vtable;
    };

    struct RemotingSurrogateSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetSurrogate;
        VirtualInvokeData GetSurrogate_1;
    };

    struct RemotingSurrogateSelector__StaticFields {
        struct Type* s_cachedTypeObjRef;
        struct ObjRefSurrogate* _objRefSurrogate;
        struct RemotingSurrogate* _objRemotingSurrogate;
    };

    struct RemotingSurrogateSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RemotingSurrogateSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RemotingSurrogateSelector__VTable vtable;
    };

    struct ServerContextTerminatorSink {
        struct ServerContextTerminatorSink__Class* klass;
        MonitorData* monitor;
    };

    struct ServerContextTerminatorSink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SyncProcessMessage;
        VirtualInvokeData AsyncProcessMessage;
    };

    struct ServerContextTerminatorSink__StaticFields {
    };

    struct ServerContextTerminatorSink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerContextTerminatorSink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerContextTerminatorSink__VTable vtable;
    };

    struct __declspec(align(8)) ServerObjectTerminatorSink__Fields {
        struct IMessageSink* _nextSink;
    };

    struct ServerObjectTerminatorSink {
        struct ServerObjectTerminatorSink__Class* klass;
        MonitorData* monitor;
        struct ServerObjectTerminatorSink__Fields fields;
    };

    struct ServerObjectTerminatorSink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SyncProcessMessage;
        VirtualInvokeData AsyncProcessMessage;
    };

    struct ServerObjectTerminatorSink__StaticFields {
    };

    struct ServerObjectTerminatorSink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerObjectTerminatorSink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerObjectTerminatorSink__VTable vtable;
    };

    struct __declspec(align(8)) ServerObjectReplySink__Fields {
        struct IMessageSink* _replySink;
        struct ServerIdentity* _identity;
    };

    struct ServerObjectReplySink {
        struct ServerObjectReplySink__Class* klass;
        MonitorData* monitor;
        struct ServerObjectReplySink__Fields fields;
    };

    struct ServerObjectReplySink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SyncProcessMessage;
        VirtualInvokeData AsyncProcessMessage;
    };

    struct ServerObjectReplySink__StaticFields {
    };

    struct ServerObjectReplySink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerObjectReplySink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerObjectReplySink__VTable vtable;
    };

    struct __declspec(align(8)) StackBuilderSink__Fields {
        struct MarshalByRefObject* _target;
        struct RealProxy* _rp;
    };

    struct StackBuilderSink {
        struct StackBuilderSink__Class* klass;
        MonitorData* monitor;
        struct StackBuilderSink__Fields fields;
    };

    struct StackBuilderSink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SyncProcessMessage;
        VirtualInvokeData AsyncProcessMessage;
    };

    struct StackBuilderSink__StaticFields {
    };

    struct StackBuilderSink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StackBuilderSink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StackBuilderSink__VTable vtable;
    };

    struct HandleProcessCorruptedStateExceptionsAttribute {
        struct HandleProcessCorruptedStateExceptionsAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct HandleProcessCorruptedStateExceptionsAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct HandleProcessCorruptedStateExceptionsAttribute__StaticFields {
    };

    struct HandleProcessCorruptedStateExceptionsAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HandleProcessCorruptedStateExceptionsAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HandleProcessCorruptedStateExceptionsAttribute__VTable vtable;
    };

    enum class Consistency__Enum : int32_t {
        MayCorruptProcess = 0x00000000,
        MayCorruptAppDomain = 0x00000001,
        MayCorruptInstance = 0x00000002,
        WillNotCorruptState = 0x00000003,
    };

    struct Consistency__Enum__Boxed {
        struct Consistency__Enum__Class* klass;
        MonitorData* monitor;
        Consistency__Enum value;
    };

    enum class Cer__Enum : int32_t {
        None = 0x00000000,
        MayFail = 0x00000001,
        Success = 0x00000002,
    };

    struct Cer__Enum__Boxed {
        struct Cer__Enum__Class* klass;
        MonitorData* monitor;
        Cer__Enum value;
    };

    struct __declspec(align(8)) ReliabilityContractAttribute__Fields {
        Consistency__Enum _consistency;

        Cer__Enum _cer;
    };

    struct ReliabilityContractAttribute {
        struct ReliabilityContractAttribute__Class* klass;
        MonitorData* monitor;
        struct ReliabilityContractAttribute__Fields fields;
    };

    struct Consistency__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct Consistency__Enum__StaticFields {
    };

    struct Consistency__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Consistency__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Consistency__Enum__VTable vtable;
    };

    struct Cer__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct Cer__Enum__StaticFields {
    };

    struct Cer__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Cer__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Cer__Enum__VTable vtable;
    };

    struct ReliabilityContractAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ReliabilityContractAttribute__StaticFields {
    };

    struct ReliabilityContractAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReliabilityContractAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReliabilityContractAttribute__VTable vtable;
    };

    struct IsByRefLikeAttribute {
        struct IsByRefLikeAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct IsByRefLikeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct IsByRefLikeAttribute__StaticFields {
    };

    struct IsByRefLikeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsByRefLikeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsByRefLikeAttribute__VTable vtable;
    };

    struct IsReadOnlyAttribute {
        struct IsReadOnlyAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct IsReadOnlyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct IsReadOnlyAttribute__StaticFields {
    };

    struct IsReadOnlyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsReadOnlyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsReadOnlyAttribute__VTable vtable;
    };

    struct __declspec(align(8)) TupleElementNamesAttribute__Fields {
        struct String__Array* _transformNames;
    };

    struct TupleElementNamesAttribute {
        struct TupleElementNamesAttribute__Class* klass;
        MonitorData* monitor;
        struct TupleElementNamesAttribute__Fields fields;
    };

    struct TupleElementNamesAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct TupleElementNamesAttribute__StaticFields {
    };

    struct TupleElementNamesAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TupleElementNamesAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TupleElementNamesAttribute__VTable vtable;
    };

    struct AsyncVoidMethodBuilder {
        struct SynchronizationContext* m_synchronizationContext;
        struct AsyncMethodBuilderCore m_coreState;
        struct Task* m_task;
    };

    struct AsyncVoidMethodBuilder__Boxed {
        struct AsyncVoidMethodBuilder__Class* klass;
        MonitorData* monitor;
        struct AsyncVoidMethodBuilder fields;
    };

    struct AsyncVoidMethodBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncVoidMethodBuilder__StaticFields {
    };

    struct AsyncVoidMethodBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncVoidMethodBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncVoidMethodBuilder__VTable vtable;
    };

    struct Task_1_System_Int32___Array {
        struct Task_1_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Task_1_System_Int32_* vector[32];
    };

    struct Task_1_System_Int32___Array__VTable {
    };

    struct Task_1_System_Int32___Array__StaticFields {
    };

    struct Task_1_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_System_Int32___Array__VTable vtable;
    };

    struct __declspec(align(8)) AsyncMethodBuilderCore_MoveNextRunner__Fields {
        struct ExecutionContext* m_context;
        struct IAsyncStateMachine* m_stateMachine;
    };

    struct AsyncMethodBuilderCore_MoveNextRunner {
        struct AsyncMethodBuilderCore_MoveNextRunner__Class* klass;
        MonitorData* monitor;
        struct AsyncMethodBuilderCore_MoveNextRunner__Fields fields;
    };

    struct AsyncMethodBuilderCore_MoveNextRunner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncMethodBuilderCore_MoveNextRunner__StaticFields {
        struct ContextCallback* s_invokeMoveNext;
    };

    struct AsyncMethodBuilderCore_MoveNextRunner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncMethodBuilderCore_MoveNextRunner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncMethodBuilderCore_MoveNextRunner__VTable vtable;
    };

    struct AsyncMethodBuilderCore_MoveNextRunner___VTable {
    };

    struct AsyncMethodBuilderCore_MoveNextRunner___StaticFields {
    };

    struct AsyncMethodBuilderCore_MoveNextRunner___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncMethodBuilderCore_MoveNextRunner___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncMethodBuilderCore_MoveNextRunner___VTable vtable;
    };

    struct __declspec(align(8)) AsyncMethodBuilderCore_ContinuationWrapper__Fields {
        struct Action* m_continuation;
        struct Action* m_invokeAction;
        struct Task* m_innerTask;
    };

} // namespace app
