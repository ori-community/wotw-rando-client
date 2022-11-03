namespace app {
    struct __declspec(align(8)) Identity__Fields {
        struct String* _objectUri;
        struct IMessageSink* _channelSink;
        struct IMessageSink* _envoySink;
        struct DynamicPropertyCollection* _clientDynamicProperties;
        struct DynamicPropertyCollection* _serverDynamicProperties;
        struct ObjRef* _objRef;
        bool _disposed;
    };

    struct Identity {
        struct Identity__Class* klass;
        MonitorData* monitor;
        struct Identity__Fields fields;
    };

    struct ServerIdentity__Fields {
        struct Identity__Fields _;
        struct Type* _objectType;
        struct MarshalByRefObject* _serverObject;
        struct IMessageSink* _serverSink;
        struct Context* _context;
        struct Lease* _lease;
    };

    struct ServerIdentity {
        struct ServerIdentity__Class* klass;
        MonitorData* monitor;
        struct ServerIdentity__Fields fields;
    };

    struct ClientIdentity__Fields {
        struct Identity__Fields _;
        struct WeakReference* _proxyReference;
    };

    struct ClientIdentity {
        struct ClientIdentity__Class* klass;
        MonitorData* monitor;
        struct ClientIdentity__Fields fields;
    };

    struct GCHandle {
        int32_t handle;
    };

    struct GCHandle__Boxed {
        struct GCHandle__Class* klass;
        MonitorData* monitor;
        struct GCHandle fields;
    };

    struct __declspec(align(8)) WeakReference__Fields {
        bool isLongReference;
        struct GCHandle gcHandle;
    };

    struct WeakReference {
        struct WeakReference__Class* klass;
        MonitorData* monitor;
        struct WeakReference__Fields fields;
    };

    enum class LeaseState__Enum : int32_t {
        Null = 0x00000000,
        Initial = 0x00000001,
        Active = 0x00000002,
        Renewing = 0x00000003,
        Expired = 0x00000004,
    };

    struct LeaseState__Enum__Boxed {
        struct LeaseState__Enum__Class* klass;
        MonitorData* monitor;
        LeaseState__Enum value;
    };

    struct Lease__Fields {
        struct MarshalByRefObject__Fields _;
        struct DateTime _leaseExpireTime;
        LeaseState__Enum _currentState;

        struct TimeSpan _initialLeaseTime;
        struct TimeSpan _renewOnCallTime;
        struct TimeSpan _sponsorshipTimeout;
        struct ArrayList* _sponsors;
        struct Queue* _renewingSponsors;
        struct Lease_RenewalDelegate* _renewalDelegate;
    };

    struct Lease {
        struct Lease__Class* klass;
        MonitorData* monitor;
        struct Lease__Fields fields;
    };

    struct __declspec(align(8)) Queue__Fields {
        struct Object__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _growFactor;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue {
        struct Queue__Class* klass;
        MonitorData* monitor;
        struct Queue__Fields fields;
    };

    struct Lease_RenewalDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Lease_RenewalDelegate {
        struct Lease_RenewalDelegate__Class* klass;
        MonitorData* monitor;
        struct Lease_RenewalDelegate__Fields fields;
    };

    struct ILease {
        struct ILease__Class* klass;
        MonitorData* monitor;
    };

    struct ISponsor {
        struct ISponsor__Class* klass;
        MonitorData* monitor;
    };

    struct ClientActivatedIdentity__Fields {
        struct ServerIdentity__Fields _;
        struct MarshalByRefObject* _targetThis;
    };

    struct ClientActivatedIdentity {
        struct ClientActivatedIdentity__Class* klass;
        MonitorData* monitor;
        struct ClientActivatedIdentity__Fields fields;
    };

    struct IMessage {
        struct IMessage__Class* klass;
        MonitorData* monitor;
    };

    struct IMessageCtrl {
        struct IMessageCtrl__Class* klass;
        MonitorData* monitor;
    };

    struct GCHandle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GCHandle__StaticFields {
    };

    struct GCHandle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GCHandle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GCHandle__VTable vtable;
    };

    struct WeakReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_IsAlive;
        VirtualInvokeData get_Target;
        VirtualInvokeData set_Target;
        VirtualInvokeData get_TrackResurrection;
        VirtualInvokeData GetObjectData_1;
    };

    struct WeakReference__StaticFields {
    };

    struct WeakReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeakReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeakReference__VTable vtable;
    };

    struct ClientIdentity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
    };

    struct ClientIdentity__StaticFields {
    };

    struct ClientIdentity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClientIdentity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClientIdentity__VTable vtable;
    };

    struct Identity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct Identity__StaticFields {
    };

    struct Identity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Identity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Identity__VTable vtable;
    };

    struct LeaseState__Enum__VTable {
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

    struct LeaseState__Enum__StaticFields {
    };

    struct LeaseState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaseState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaseState__Enum__VTable vtable;
    };

    struct Queue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData Clone;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData Clone_1;
        VirtualInvokeData get_IsSynchronized_1;
        VirtualInvokeData get_SyncRoot_1;
        VirtualInvokeData Clear;
        VirtualInvokeData CopyTo_1;
        VirtualInvokeData Enqueue;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData Dequeue;
        VirtualInvokeData Peek;
        VirtualInvokeData ToArray;
    };

    struct Queue__StaticFields {
    };

    struct Queue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue__VTable vtable;
    };

    struct ILease__VTable {
        VirtualInvokeData get_CurrentLeaseTime;
        VirtualInvokeData get_CurrentState;
        VirtualInvokeData set_InitialLeaseTime;
        VirtualInvokeData get_RenewOnCallTime;
        VirtualInvokeData set_RenewOnCallTime;
        VirtualInvokeData set_SponsorshipTimeout;
        VirtualInvokeData Renew;
    };

    struct ILease__StaticFields {
    };

    struct ILease__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILease__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILease__VTable vtable;
    };

    struct Lease_RenewalDelegate__VTable {
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
    };

    struct Lease_RenewalDelegate__StaticFields {
    };

    struct Lease_RenewalDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lease_RenewalDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lease_RenewalDelegate__VTable vtable;
    };

    struct ISponsor__VTable {
        VirtualInvokeData Renewal;
    };

    struct ISponsor__StaticFields {
    };

    struct ISponsor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISponsor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISponsor__VTable vtable;
    };

    struct Lease__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData get_CurrentLeaseTime;
        VirtualInvokeData get_CurrentState;
        VirtualInvokeData set_InitialLeaseTime;
        VirtualInvokeData get_RenewOnCallTime;
        VirtualInvokeData set_RenewOnCallTime;
        VirtualInvokeData set_SponsorshipTimeout;
        VirtualInvokeData Renew;
        VirtualInvokeData Unregister;
    };

    struct Lease__StaticFields {
    };

    struct Lease__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lease__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lease__VTable vtable;
    };

    struct IMessage__VTable {
        VirtualInvokeData get_Properties;
    };

    struct IMessage__StaticFields {
    };

    struct IMessage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMessage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMessage__VTable vtable;
    };

    struct IMessageCtrl__VTable {
    };

    struct IMessageCtrl__StaticFields {
    };

    struct IMessageCtrl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMessageCtrl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMessageCtrl__VTable vtable;
    };

    struct ClientActivatedIdentity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData OnLifetimeExpired;
        VirtualInvokeData SyncObjectProcessMessage;
        VirtualInvokeData AsyncObjectProcessMessage;
    };

    struct ClientActivatedIdentity__StaticFields {
    };

    struct ClientActivatedIdentity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClientActivatedIdentity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClientActivatedIdentity__VTable vtable;
    };

    struct ServerIdentity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData OnLifetimeExpired;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct ServerIdentity__StaticFields {
    };

    struct ServerIdentity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerIdentity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerIdentity__VTable vtable;
    };

    struct __declspec(align(8)) MonoAsyncCall__Fields {
        struct Object* msg;
        void* cb_method;
        struct Object* cb_target;
        struct Object* state;
        struct Object* res;
        struct Object* out_args;
    };

    struct MonoAsyncCall {
        struct MonoAsyncCall__Class* klass;
        MonitorData* monitor;
        struct MonoAsyncCall__Fields fields;
    };

    struct MonoAsyncCall__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoAsyncCall__StaticFields {
    };

    struct MonoAsyncCall__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoAsyncCall__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoAsyncCall__VTable vtable;
    };

    struct ICustomAttributeProvider {
        struct ICustomAttributeProvider__Class* klass;
        MonitorData* monitor;
    };

    struct ICustomAttributeProvider__VTable {
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
    };

    struct ICustomAttributeProvider__StaticFields {
    };

    struct ICustomAttributeProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICustomAttributeProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICustomAttributeProvider__VTable vtable;
    };

    struct __declspec(align(8)) CustomAttributeData__Fields {
        struct ConstructorInfo* ctorInfo;
        struct IList_1_System_Reflection_CustomAttributeTypedArgument_* ctorArgs;
        struct IList_1_System_Reflection_CustomAttributeNamedArgument_* namedArgs;
        struct CustomAttributeData_LazyCAttrData* lazyData;
    };

    struct CustomAttributeData {
        struct CustomAttributeData__Class* klass;
        MonitorData* monitor;
        struct CustomAttributeData__Fields fields;
    };

    struct IList_1_System_Reflection_CustomAttributeTypedArgument_ {
        struct IList_1_System_Reflection_CustomAttributeTypedArgument___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_System_Reflection_CustomAttributeNamedArgument_ {
        struct IList_1_System_Reflection_CustomAttributeNamedArgument___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CustomAttributeData_LazyCAttrData__Fields {
        struct Assembly* assembly;
        void* data;
        uint32_t data_length;
    };

    struct CustomAttributeData_LazyCAttrData {
        struct CustomAttributeData_LazyCAttrData__Class* klass;
        MonitorData* monitor;
        struct CustomAttributeData_LazyCAttrData__Fields fields;
    };

    struct CustomAttributeData__Array {
        struct CustomAttributeData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CustomAttributeData* vector[32];
    };

    struct IList_1_System_Reflection_CustomAttributeTypedArgument___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_System_Reflection_CustomAttributeTypedArgument___StaticFields {
    };

    struct IList_1_System_Reflection_CustomAttributeTypedArgument___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_System_Reflection_CustomAttributeTypedArgument___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_System_Reflection_CustomAttributeTypedArgument___VTable vtable;
    };

    struct IList_1_System_Reflection_CustomAttributeNamedArgument___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_System_Reflection_CustomAttributeNamedArgument___StaticFields {
    };

    struct IList_1_System_Reflection_CustomAttributeNamedArgument___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_System_Reflection_CustomAttributeNamedArgument___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_System_Reflection_CustomAttributeNamedArgument___VTable vtable;
    };

    struct CustomAttributeData_LazyCAttrData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CustomAttributeData_LazyCAttrData__StaticFields {
    };

    struct CustomAttributeData_LazyCAttrData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CustomAttributeData_LazyCAttrData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CustomAttributeData_LazyCAttrData__VTable vtable;
    };

    struct CustomAttributeData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Constructor;
        VirtualInvokeData get_ConstructorArguments;
        VirtualInvokeData get_NamedArguments;
    };

    struct CustomAttributeData__StaticFields {
    };

    struct CustomAttributeData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CustomAttributeData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CustomAttributeData__VTable vtable;
    };

    struct CustomAttributeData__Array__VTable {
    };

    struct CustomAttributeData__Array__StaticFields {
    };

    struct CustomAttributeData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CustomAttributeData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CustomAttributeData__Array__VTable vtable;
    };

    struct __declspec(align(8)) MonoCustomAttrs_AttributeInfo__Fields {
        struct AttributeUsageAttribute* _usage;
        int32_t _inheritanceLevel;
    };

    struct MonoCustomAttrs_AttributeInfo {
        struct MonoCustomAttrs_AttributeInfo__Class* klass;
        MonitorData* monitor;
        struct MonoCustomAttrs_AttributeInfo__Fields fields;
    };

    struct MonoCustomAttrs_AttributeInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoCustomAttrs_AttributeInfo__StaticFields {
    };

    struct MonoCustomAttrs_AttributeInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoCustomAttrs_AttributeInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoCustomAttrs_AttributeInfo__VTable vtable;
    };

    struct NullConsoleDriver {
        struct NullConsoleDriver__Class* klass;
        MonitorData* monitor;
    };

    struct NullConsoleDriver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ReadKey;
    };

    struct NullConsoleDriver__StaticFields {
        struct ConsoleKeyInfo EmptyConsoleKeyInfo;
    };

    struct NullConsoleDriver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NullConsoleDriver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NullConsoleDriver__VTable vtable;
    };

    struct UInt64Ptr {
        struct UInt64Ptr__Class* klass;
        MonitorData* monitor;
    };

    struct Int64Ptr {
        struct Int64Ptr__Class* klass;
        MonitorData* monitor;
    };

    struct UInt64Ptr__VTable {
    };

    struct UInt64Ptr__StaticFields {
    };

    struct UInt64Ptr__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt64Ptr__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt64Ptr__VTable vtable;
    };

    struct UInt64Ptr___VTable {
    };

    struct UInt64Ptr___StaticFields {
    };

    struct UInt64Ptr___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt64Ptr___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt64Ptr___VTable vtable;
    };

    struct Int64Ptr__VTable {
    };

    struct Int64Ptr__StaticFields {
    };

    struct Int64Ptr__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int64Ptr__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int64Ptr__VTable vtable;
    };

    struct Int64Ptr___VTable {
    };

    struct Int64Ptr___StaticFields {
    };

    struct Int64Ptr___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int64Ptr___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int64Ptr___VTable vtable;
    };

    struct __declspec(align(8)) NumberFormatter__Fields {
        struct NumberFormatInfo* _nfi;
        struct Char__Array* _cbuf;
        bool _NaN;
        bool _infinity;
        bool _isCustomFormat;
        bool _specifierIsUpper;
        bool _positive;
        uint16_t _specifier;
        int32_t _precision;
        int32_t _defPrecision;
        int32_t _digitsLen;
        int32_t _offset;
        int32_t _decPointPos;
        uint32_t _val1;
        uint32_t _val2;
        uint32_t _val3;
        uint32_t _val4;
        int32_t _ind;
    };

    struct NumberFormatter {
        struct NumberFormatter__Class* klass;
        MonitorData* monitor;
        struct NumberFormatter__Fields fields;
    };

    struct NumberFormatter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NumberFormatter__StaticFields {
        uint64_t* MantissaBitsTable;
        int32_t* TensExponentTable;
        uint16_t* DigitLowerTable;
        uint16_t* DigitUpperTable;
        int64_t* TenPowersList;
        int32_t* DecHexDigits;
        struct NumberFormatter* threadNumberFormatter;
        struct NumberFormatter* userFormatProvider;
    };

    struct NumberFormatter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NumberFormatter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NumberFormatter__VTable vtable;
    };

    struct __declspec(align(8)) Thread__Fields {
        struct InternalThread* internal_thread;
        struct Object* m_ThreadStartArg;
        struct Object* pending_exception;
        struct IPrincipal* principal;
        int32_t principal_version;
        struct MulticastDelegate* m_Delegate;
        struct ExecutionContext* m_ExecutionContext;
        bool m_ExecutionContextBelongsToOuterScope;
    };

    struct Thread {
        struct Thread__Class* klass;
        MonitorData* monitor;
        struct Thread__Fields fields;
    };

    struct __declspec(align(8)) AsyncLocal_1_System_Globalization_CultureInfo___Fields {
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1_* m_valueChangedHandler;
    };

    struct AsyncLocal_1_System_Globalization_CultureInfo_ {
        struct AsyncLocal_1_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct AsyncLocal_1_System_Globalization_CultureInfo___Fields fields;
    };

    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1_ {
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Class* klass;
        MonitorData* monitor;
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Fields fields;
    };

    struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ {
        struct CultureInfo* _PreviousValue_k__BackingField;
        struct CultureInfo* _CurrentValue_k__BackingField;
        bool _ThreadContextChanged_k__BackingField;
    };

    struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Boxed {
        struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ fields;
    };

    enum class ThreadState__Enum : int32_t {
        Running = 0x00000000,
        StopRequested = 0x00000001,
        SuspendRequested = 0x00000002,
        Background = 0x00000004,
        Unstarted = 0x00000008,
        Stopped = 0x00000010,
        WaitSleepJoin = 0x00000020,
        Suspended = 0x00000040,
        AbortRequested = 0x00000080,
        Aborted = 0x00000100,
    };

    struct ThreadState__Enum__Boxed {
        struct ThreadState__Enum__Class* klass;
        MonitorData* monitor;
        ThreadState__Enum value;
    };

    struct __declspec(align(8)) InternalThread__Fields {
        int32_t lock_thread_id;
        void* handle;
        void* native_handle;
        void* unused3;
        void* name;
        int32_t name_len;
        ThreadState__Enum state;

        struct Object* abort_exc;
        int32_t abort_state_handle;
        int64_t thread_id;
        void* debugger_thread;
        void* static_data;
        void* runtime_thread_info;
        struct Object* current_appcontext;
        struct Object* root_domain_thread;
        struct Byte__Array* _serialized_principal;
        int32_t _serialized_principal_version;
        void* appdomain_refs;
        int32_t interruption_requested;
        void* synch_cs;
        bool threadpool_thread;
        bool thread_interrupt_requested;
        int32_t stack_size;
        uint8_t apartment_state;
        int32_t critical_region_level;
        int32_t managed_id;
        int32_t small_id;
        void* manage_callback;
        void* unused4;
        void* flags;
        void* thread_pinning_ref;
        void* abort_protected_block_count;
        int32_t priority;
        void* owned_mutex;
        void* suspended_event;
        int32_t self_suspended;
        void* unused1;
        void* unused2;
        void* last;
    };

    struct InternalThread {
        struct InternalThread__Class* klass;
        MonitorData* monitor;
        struct InternalThread__Fields fields;
    };

    struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___StaticFields {
    };

    struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___VTable vtable;
    };

    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___VTable {
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
    };

} // namespace app
