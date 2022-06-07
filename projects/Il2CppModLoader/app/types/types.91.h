namespace app {
struct CollectionConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
};

struct CollectionConverter__StaticFields {
};

struct CollectionConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CollectionConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CollectionConverter__VTable vtable;
};

struct ArrayConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
};

struct ArrayConverter__StaticFields {
};

struct ArrayConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArrayConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArrayConverter__VTable vtable;
};

struct __declspec(align(8)) ArraySubsetEnumerator__Fields {
    struct Array *array;
    int32_t total;
    int32_t current;
};

struct ArraySubsetEnumerator {
    struct ArraySubsetEnumerator__Class *klass;
    MonitorData *monitor;
    struct ArraySubsetEnumerator__Fields fields;
};

struct ArraySubsetEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData get_Current;
    VirtualInvokeData Reset;
};

struct ArraySubsetEnumerator__StaticFields {
};

struct ArraySubsetEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArraySubsetEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArraySubsetEnumerator__VTable vtable;
};

struct __declspec(align(8)) AsyncCompletedEventArgs__Fields {
    struct Exception *error;
    bool cancelled;
    struct Object *userState;
};

struct AsyncCompletedEventArgs {
    struct AsyncCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct AsyncCompletedEventArgs__Fields fields;
};

struct AsyncCompletedEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncCompletedEventArgs__StaticFields {
};

struct AsyncCompletedEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncCompletedEventArgs__VTable vtable;
};

struct AsyncCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct AsyncCompletedEventHandler {
    struct AsyncCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct AsyncCompletedEventHandler__Fields fields;
};

struct AsyncCompletedEventHandler__VTable {
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

struct AsyncCompletedEventHandler__StaticFields {
};

struct AsyncCompletedEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncCompletedEventHandler__VTable vtable;
};

struct __declspec(align(8)) AsyncOperation__Fields {
    struct SynchronizationContext *syncContext;
    struct Object *userSuppliedState;
    bool alreadyCompleted;
};

struct AsyncOperation {
    struct AsyncOperation__Class *klass;
    MonitorData *monitor;
    struct AsyncOperation__Fields fields;
};

struct AsyncOperation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncOperation__StaticFields {
};

struct AsyncOperation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncOperation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncOperation__VTable vtable;
};

struct __declspec(align(8)) AttributeProviderAttribute__Fields {
    struct String *_typeName;
    struct String *_propertyName;
};

struct AttributeProviderAttribute {
    struct AttributeProviderAttribute__Class *klass;
    MonitorData *monitor;
    struct AttributeProviderAttribute__Fields fields;
};

struct AttributeProviderAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct AttributeProviderAttribute__StaticFields {
};

struct AttributeProviderAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributeProviderAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributeProviderAttribute__VTable vtable;
};

struct BackgroundWorker__Fields {
    struct Component__Fields _;
    bool canCancelWorker;
    bool workerReportsProgress;
    bool cancellationPending;
    bool isRunning;
    struct AsyncOperation *asyncOperation;
    struct BackgroundWorker_WorkerThreadStartDelegate *threadStart;
    struct SendOrPostCallback *operationCompleted;
    struct SendOrPostCallback *progressReporter;
};

struct BackgroundWorker {
    struct BackgroundWorker__Class *klass;
    MonitorData *monitor;
    struct BackgroundWorker__Fields fields;
};

struct BackgroundWorker_WorkerThreadStartDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct BackgroundWorker_WorkerThreadStartDelegate {
    struct BackgroundWorker_WorkerThreadStartDelegate__Class *klass;
    MonitorData *monitor;
    struct BackgroundWorker_WorkerThreadStartDelegate__Fields fields;
};

struct __declspec(align(8)) CancelEventArgs__Fields {
    bool cancel;
};

struct CancelEventArgs {
    struct CancelEventArgs__Class *klass;
    MonitorData *monitor;
    struct CancelEventArgs__Fields fields;
};

struct DoWorkEventArgs__Fields {
    struct CancelEventArgs__Fields _;
    struct Object *result;
    struct Object *argument;
};

struct DoWorkEventArgs {
    struct DoWorkEventArgs__Class *klass;
    MonitorData *monitor;
    struct DoWorkEventArgs__Fields fields;
};

struct RunWorkerCompletedEventArgs__Fields {
    struct AsyncCompletedEventArgs__Fields _;
    struct Object *result;
};

struct RunWorkerCompletedEventArgs {
    struct RunWorkerCompletedEventArgs__Class *klass;
    MonitorData *monitor;
    struct RunWorkerCompletedEventArgs__Fields fields;
};

struct __declspec(align(8)) ProgressChangedEventArgs__Fields {
    int32_t progressPercentage;
    struct Object *userState;
};

struct ProgressChangedEventArgs {
    struct ProgressChangedEventArgs__Class *klass;
    MonitorData *monitor;
    struct ProgressChangedEventArgs__Fields fields;
};

struct BackgroundWorker_WorkerThreadStartDelegate__VTable {
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

struct BackgroundWorker_WorkerThreadStartDelegate__StaticFields {
};

struct BackgroundWorker_WorkerThreadStartDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BackgroundWorker_WorkerThreadStartDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BackgroundWorker_WorkerThreadStartDelegate__VTable vtable;
};

struct CancelEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CancelEventArgs__StaticFields {
};

struct CancelEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancelEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancelEventArgs__VTable vtable;
};

struct DoWorkEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DoWorkEventArgs__StaticFields {
};

struct DoWorkEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoWorkEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoWorkEventArgs__VTable vtable;
};

struct RunWorkerCompletedEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RunWorkerCompletedEventArgs__StaticFields {
};

struct RunWorkerCompletedEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RunWorkerCompletedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RunWorkerCompletedEventArgs__VTable vtable;
};

struct ProgressChangedEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ProgressChangedEventArgs__StaticFields {
};

struct ProgressChangedEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProgressChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProgressChangedEventArgs__VTable vtable;
};

struct BackgroundWorker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData get_Site;
    VirtualInvokeData set_Site;
    VirtualInvokeData add_Disposed;
    VirtualInvokeData remove_Disposed;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_CanRaiseEvents;
    VirtualInvokeData get_Site_1;
    VirtualInvokeData set_Site_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData GetService;
    VirtualInvokeData OnDoWork;
    VirtualInvokeData OnRunWorkerCompleted;
    VirtualInvokeData OnProgressChanged;
};

struct BackgroundWorker__StaticFields {
    struct Object *doWorkKey;
    struct Object *runWorkerCompletedKey;
    struct Object *progressChangedKey;
};

struct BackgroundWorker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BackgroundWorker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BackgroundWorker__VTable vtable;
};

struct DoWorkEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DoWorkEventHandler {
    struct DoWorkEventHandler__Class *klass;
    MonitorData *monitor;
    struct DoWorkEventHandler__Fields fields;
};

struct DoWorkEventHandler__VTable {
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

struct DoWorkEventHandler__StaticFields {
};

struct DoWorkEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoWorkEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoWorkEventHandler__VTable vtable;
};

struct ProgressChangedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct ProgressChangedEventHandler {
    struct ProgressChangedEventHandler__Class *klass;
    MonitorData *monitor;
    struct ProgressChangedEventHandler__Fields fields;
};

struct ProgressChangedEventHandler__VTable {
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

struct ProgressChangedEventHandler__StaticFields {
};

struct ProgressChangedEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProgressChangedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProgressChangedEventHandler__VTable vtable;
};

struct RunWorkerCompletedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct RunWorkerCompletedEventHandler {
    struct RunWorkerCompletedEventHandler__Class *klass;
    MonitorData *monitor;
    struct RunWorkerCompletedEventHandler__Fields fields;
};

struct RunWorkerCompletedEventHandler__VTable {
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

struct RunWorkerCompletedEventHandler__StaticFields {
};

struct RunWorkerCompletedEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RunWorkerCompletedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RunWorkerCompletedEventHandler__VTable vtable;
};

struct ComponentEditor {
    struct ComponentEditor__Class *klass;
    MonitorData *monitor;
};

struct ComponentEditor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct ComponentEditor__StaticFields {
};

struct ComponentEditor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComponentEditor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComponentEditor__VTable vtable;
};

enum class BindingDirection__Enum : int32_t {
    OneWay = 0x00000000,
    TwoWay = 0x00000001,
};

struct BindingDirection__Enum__Boxed {
    struct BindingDirection__Enum__Class *klass;
    MonitorData *monitor;
    BindingDirection__Enum value;
    
};

struct __declspec(align(8)) BindableAttribute__Fields {
    bool bindable;
    bool isDefault;
    BindingDirection__Enum direction;
    
};

struct BindableAttribute {
    struct BindableAttribute__Class *klass;
    MonitorData *monitor;
    struct BindableAttribute__Fields fields;
};

struct BindingDirection__Enum__VTable {
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

struct BindingDirection__Enum__StaticFields {
};

struct BindingDirection__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BindingDirection__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BindingDirection__Enum__VTable vtable;
};

struct BindableAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct BindableAttribute__StaticFields {
    struct BindableAttribute *Yes;
    struct BindableAttribute *No;
    struct BindableAttribute *Default;
};

struct BindableAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BindableAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BindableAttribute__VTable vtable;
};

enum class BindableSupport__Enum : int32_t {
    No = 0x00000000,
    Yes = 0x00000001,
    Default = 0x00000002,
};

struct BindableSupport__Enum__Boxed {
    struct BindableSupport__Enum__Class *klass;
    MonitorData *monitor;
    BindableSupport__Enum value;
    
};

struct BindableSupport__Enum__VTable {
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

struct BindableSupport__Enum__StaticFields {
};

struct BindableSupport__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BindableSupport__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BindableSupport__Enum__VTable vtable;
};

struct BooleanConverter {
    struct BooleanConverter__Class *klass;
    MonitorData *monitor;
};

struct BooleanConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
};

struct BooleanConverter__StaticFields {
    struct TypeConverter_StandardValuesCollection *values;
};

struct BooleanConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanConverter__VTable vtable;
};

struct __declspec(align(8)) BrowsableAttribute__Fields {
    bool browsable;
};

struct BrowsableAttribute {
    struct BrowsableAttribute__Class *klass;
    MonitorData *monitor;
    struct BrowsableAttribute__Fields fields;
};

struct BrowsableAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct BrowsableAttribute__StaticFields {
    struct BrowsableAttribute *Yes;
    struct BrowsableAttribute *No;
    struct BrowsableAttribute *Default;
};

struct BrowsableAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BrowsableAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BrowsableAttribute__VTable vtable;
};

struct BaseNumberConverter {
    struct BaseNumberConverter__Class *klass;
    MonitorData *monitor;
};

struct ByteConverter {
    struct ByteConverter__Class *klass;
    MonitorData *monitor;
};

struct BaseNumberConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
    VirtualInvokeData get_AllowHex;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData FromStringError;
    VirtualInvokeData __unknown_4;
};

struct BaseNumberConverter__StaticFields {
};

struct BaseNumberConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseNumberConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseNumberConverter__VTable vtable;
};

struct ByteConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
    VirtualInvokeData get_AllowHex;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData FromString;
    VirtualInvokeData FromString_1;
    VirtualInvokeData FromString_2;
    VirtualInvokeData FromStringError;
    VirtualInvokeData ToString_1;
};

struct ByteConverter__StaticFields {
};

struct ByteConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ByteConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ByteConverter__VTable vtable;
};

struct CancelEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct CancelEventHandler {
    struct CancelEventHandler__Class *klass;
    MonitorData *monitor;
    struct CancelEventHandler__Fields fields;
};

struct CancelEventHandler__VTable {
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

struct CancelEventHandler__StaticFields {
};

struct CancelEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancelEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancelEventHandler__VTable vtable;
};

struct __declspec(align(8)) CategoryAttribute__Fields {
    bool localized;
    struct String *categoryValue;
};

struct CategoryAttribute {
    struct CategoryAttribute__Class *klass;
    MonitorData *monitor;
    struct CategoryAttribute__Fields fields;
};

struct CategoryAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData GetLocalizedString;
};

struct CategoryAttribute__StaticFields {
    struct CategoryAttribute *appearance;
    struct CategoryAttribute *asynchronous;
    struct CategoryAttribute *behavior;
    struct CategoryAttribute *data;
    struct CategoryAttribute *design;
    struct CategoryAttribute *action;
    struct CategoryAttribute *format;
    struct CategoryAttribute *layout;
    struct CategoryAttribute *mouse;
    struct CategoryAttribute *key;
    struct CategoryAttribute *focus;
    struct CategoryAttribute *windowStyle;
    struct CategoryAttribute *dragDrop;
    struct CategoryAttribute *defAttr;
};

struct CategoryAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CategoryAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CategoryAttribute__VTable vtable;
};

struct CharConverter {
    struct CharConverter__Class *klass;
    MonitorData *monitor;
};

struct CharConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
};

struct CharConverter__StaticFields {
};

}
