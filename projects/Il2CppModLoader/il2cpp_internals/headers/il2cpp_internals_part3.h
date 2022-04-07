namespace app {
enum InternalTaskOptions__Enum : int32_t {
  InternalTaskOptions__Enum_None = 0,
  InternalTaskOptions__Enum_InternalOptionsMask = 65280,
  InternalTaskOptions__Enum_ChildReplica = 256,
  InternalTaskOptions__Enum_ContinuationTask = 512,
  InternalTaskOptions__Enum_PromiseTask = 1024,
  InternalTaskOptions__Enum_SelfReplicating = 2048,
  InternalTaskOptions__Enum_LazyCancellation = 4096,
  InternalTaskOptions__Enum_QueuedByRuntime = 8192,
  InternalTaskOptions__Enum_DoNotDispose = 16384,
};
struct InternalTaskOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalTaskOptions__Enum value;
};
struct __declspec(align(8)) TaskFactory_1_System_Int32___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Int32_ {
  struct TaskFactory_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Int32___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1_ {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields fields;
};
struct Task_1_Task___Fields {
  struct Task__Fields _;
  struct Task * m_result;
};
struct Task_1_Task_ {
  struct Task_1_Task___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_Task___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_Task___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_Task_ {
  struct TaskFactory_1_Task___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_Task___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields fields;
};
struct __declspec(align(8)) SemaphoreSlim__Fields {
  int32_t m_currentCount;
  int32_t m_maxCount;
  int32_t m_waitCount;
  struct Object * m_lockObj;
  struct ManualResetEvent * m_waitHandle;
  struct SemaphoreSlim_TaskNode * m_asyncHead;
  struct SemaphoreSlim_TaskNode * m_asyncTail;
};
struct SemaphoreSlim {
  struct SemaphoreSlim__Class *klass;
  struct MonitorData *monitor;
  struct SemaphoreSlim__Fields fields;
};
struct Task_1_System_Boolean___Fields {
  struct Task__Fields _;
  bool m_result;
};
struct Task_1_System_Boolean_ {
  struct Task_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_System_Boolean___Fields fields;
};
struct SemaphoreSlim_TaskNode__Fields {
  struct Task_1_System_Boolean___Fields _;
  struct SemaphoreSlim_TaskNode * Prev;
  struct SemaphoreSlim_TaskNode * Next;
};
struct SemaphoreSlim_TaskNode {
  struct SemaphoreSlim_TaskNode__Class *klass;
  struct MonitorData *monitor;
  struct SemaphoreSlim_TaskNode__Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_System_Boolean___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_System_Boolean_ {
  struct TaskFactory_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_System_Boolean___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields fields;
};
enum FileAccess__Enum : int32_t {
  FileAccess__Enum_Read = 1,
  FileAccess__Enum_Write = 2,
  FileAccess__Enum_ReadWrite = 3,
};
struct FileAccess__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FileAccess__Enum value;
};
struct UnmanagedMemoryStream__Fields {
  struct Stream__Fields _;
  struct SafeBuffer * _buffer;
  uint8_t * _mem;
  int64_t _length;
  int64_t _capacity;
  int64_t _position;
  int64_t _offset;
  enum FileAccess__Enum _access;
  bool _isOpen;
  struct Task_1_System_Int32_ * _lastReadTask;
};
struct UnmanagedMemoryStream {
  struct UnmanagedMemoryStream__Class *klass;
  struct MonitorData *monitor;
  struct UnmanagedMemoryStream__Fields fields;
};
struct SafeBuffer__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
  bool inited;
};
struct SafeBuffer {
  struct SafeBuffer__Class *klass;
  struct MonitorData *monitor;
  struct SafeBuffer__Fields fields;
};
enum SeekOrigin__Enum : int32_t {
  SeekOrigin__Enum_Begin = 0,
  SeekOrigin__Enum_Current = 1,
  SeekOrigin__Enum_End = 2,
};
struct SeekOrigin__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeekOrigin__Enum value;
};
enum AssemblyNameFlags__Enum : int32_t {
  AssemblyNameFlags__Enum_None = 0,
  AssemblyNameFlags__Enum_PublicKey = 1,
  AssemblyNameFlags__Enum_EnableJITcompileOptimizer = 16384,
  AssemblyNameFlags__Enum_EnableJITcompileTracking = 32768,
  AssemblyNameFlags__Enum_Retargetable = 256,
};
struct AssemblyNameFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AssemblyNameFlags__Enum value;
};
enum AssemblyHashAlgorithm__Enum : int32_t {
  AssemblyHashAlgorithm__Enum_None = 0,
  AssemblyHashAlgorithm__Enum_MD5 = 32771,
  AssemblyHashAlgorithm__Enum_SHA1 = 32772,
  AssemblyHashAlgorithm__Enum_SHA256 = 32780,
  AssemblyHashAlgorithm__Enum_SHA384 = 32781,
  AssemblyHashAlgorithm__Enum_SHA512 = 32782,
};
struct AssemblyHashAlgorithm__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AssemblyHashAlgorithm__Enum value;
};
enum AssemblyVersionCompatibility__Enum : int32_t {
  AssemblyVersionCompatibility__Enum_SameMachine = 1,
  AssemblyVersionCompatibility__Enum_SameProcess = 2,
  AssemblyVersionCompatibility__Enum_SameDomain = 3,
};
struct AssemblyVersionCompatibility__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AssemblyVersionCompatibility__Enum value;
};
enum ProcessorArchitecture__Enum : int32_t {
  ProcessorArchitecture__Enum_None = 0,
  ProcessorArchitecture__Enum_MSIL = 1,
  ProcessorArchitecture__Enum_X86 = 2,
  ProcessorArchitecture__Enum_IA64 = 3,
  ProcessorArchitecture__Enum_Amd64 = 4,
  ProcessorArchitecture__Enum_Arm = 5,
};
struct ProcessorArchitecture__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ProcessorArchitecture__Enum value;
};
enum AssemblyContentType__Enum : int32_t {
  AssemblyContentType__Enum_Default = 0,
  AssemblyContentType__Enum_WindowsRuntime = 1,
};
struct AssemblyContentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AssemblyContentType__Enum value;
};
struct __declspec(align(8)) AssemblyName__Fields {
  struct String * name;
  struct String * codebase;
  int32_t major;
  int32_t minor;
  int32_t build;
  int32_t revision;
  struct CultureInfo * cultureinfo;
  enum AssemblyNameFlags__Enum flags;
  enum AssemblyHashAlgorithm__Enum hashalg;
  struct StrongNameKeyPair * keypair;
  struct Byte__Array * publicKey;
  struct Byte__Array * keyToken;
  enum AssemblyVersionCompatibility__Enum versioncompat;
  struct Version * version;
  enum ProcessorArchitecture__Enum processor_architecture;
  enum AssemblyContentType__Enum contentType;
};
struct AssemblyName {
  struct AssemblyName__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyName__Fields fields;
};
struct __declspec(align(8)) StrongNameKeyPair__Fields {
  struct Byte__Array * _publicKey;
  struct String * _keyPairContainer;
  bool _keyPairExported;
  struct Byte__Array * _keyPairArray;
};
struct StrongNameKeyPair {
  struct StrongNameKeyPair__Class *klass;
  struct MonitorData *monitor;
  struct StrongNameKeyPair__Fields fields;
};
struct __declspec(align(8)) Version__Fields {
  int32_t _Major;
  int32_t _Minor;
  int32_t _Build;
  int32_t _Revision;
};
struct Version {
  struct Version__Class *klass;
  struct MonitorData *monitor;
  struct Version__Fields fields;
};
struct Module__Array {
  struct Module__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Module * vector[32];
};
enum ResourceLocation__Enum : int32_t {
  ResourceLocation__Enum_Embedded = 1,
  ResourceLocation__Enum_ContainedInAnotherAssembly = 2,
  ResourceLocation__Enum_ContainedInManifestFile = 4,
};
struct ResourceLocation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ResourceLocation__Enum value;
};
struct __declspec(align(8)) ManifestResourceInfo__Fields {
  struct Assembly * _containingAssembly;
  struct String * _containingFileName;
  enum ResourceLocation__Enum _resourceLocation;
};
struct ManifestResourceInfo {
  struct ManifestResourceInfo__Class *klass;
  struct MonitorData *monitor;
  struct ManifestResourceInfo__Fields fields;
};
struct ConstructorInfo {
  struct ConstructorInfo__Class *klass;
  struct MonitorData *monitor;
};
struct RuntimeConstructorInfo {
  struct RuntimeConstructorInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MonoCMethod__Fields {
  void * mhandle;
  struct String * name;
  struct Type * reftype;
};
struct MonoCMethod {
  struct MonoCMethod__Class *klass;
  struct MonitorData *monitor;
  struct MonoCMethod__Fields fields;
};
struct ConstructorInfo__Array {
  struct ConstructorInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConstructorInfo * vector[32];
};
struct __declspec(align(8)) EventInfo_1__Fields {
  struct EventInfo_AddEventAdapter * cached_add_event;
};
struct EventInfo_1 {
  struct EventInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct EventInfo_1__Fields fields;
};
struct EventInfo_AddEventAdapter__Fields {
  struct MulticastDelegate__Fields _;
};
struct EventInfo_AddEventAdapter {
  struct EventInfo_AddEventAdapter__Class *klass;
  struct MonitorData *monitor;
  struct EventInfo_AddEventAdapter__Fields fields;
};
struct RuntimeEventInfo__Fields {
  struct EventInfo_1__Fields _;
};
struct RuntimeEventInfo {
  struct RuntimeEventInfo__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeEventInfo__Fields fields;
};
struct MonoEvent__Fields {
  struct RuntimeEventInfo__Fields _;
  void * klass;
  void * handle;
};
struct MonoEvent {
  struct MonoEvent__Class *klass;
  struct MonitorData *monitor;
  struct MonoEvent__Fields fields;
};
struct EventInfo_1__Array {
  struct EventInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EventInfo_1 * vector[32];
};
struct MemberInfo_1__Array {
  struct MemberInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MemberInfo_1 * vector[32];
};
enum TypeAttributes__Enum : int32_t {
  TypeAttributes__Enum_VisibilityMask = 7,
  TypeAttributes__Enum_NotPublic = 0,
  TypeAttributes__Enum_Public = 1,
  TypeAttributes__Enum_NestedPublic = 2,
  TypeAttributes__Enum_NestedPrivate = 3,
  TypeAttributes__Enum_NestedFamily = 4,
  TypeAttributes__Enum_NestedAssembly = 5,
  TypeAttributes__Enum_NestedFamANDAssem = 6,
  TypeAttributes__Enum_NestedFamORAssem = 7,
  TypeAttributes__Enum_LayoutMask = 24,
  TypeAttributes__Enum_AutoLayout = 0,
  TypeAttributes__Enum_SequentialLayout = 8,
  TypeAttributes__Enum_ExplicitLayout = 16,
  TypeAttributes__Enum_ClassSemanticsMask = 32,
  TypeAttributes__Enum_Class = 0,
  TypeAttributes__Enum_Interface = 32,
  TypeAttributes__Enum_Abstract = 128,
  TypeAttributes__Enum_Sealed = 256,
  TypeAttributes__Enum_SpecialName = 1024,
  TypeAttributes__Enum_Import = 4096,
  TypeAttributes__Enum_Serializable = 8192,
  TypeAttributes__Enum_WindowsRuntime = 16384,
  TypeAttributes__Enum_StringFormatMask = 196608,
  TypeAttributes__Enum_AnsiClass = 0,
  TypeAttributes__Enum_UnicodeClass = 65536,
  TypeAttributes__Enum_AutoClass = 131072,
  TypeAttributes__Enum_CustomFormatClass = 196608,
  TypeAttributes__Enum_CustomFormatMask = 12582912,
  TypeAttributes__Enum_BeforeFieldInit = 1048576,
  TypeAttributes__Enum_ReservedMask = 264192,
  TypeAttributes__Enum_RTSpecialName = 2048,
  TypeAttributes__Enum_HasSecurity = 262144,
};
struct TypeAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeAttributes__Enum value;
};
enum GenericParameterAttributes__Enum : int32_t {
  GenericParameterAttributes__Enum_None = 0,
  GenericParameterAttributes__Enum_VarianceMask = 3,
  GenericParameterAttributes__Enum_Covariant = 1,
  GenericParameterAttributes__Enum_Contravariant = 2,
  GenericParameterAttributes__Enum_SpecialConstraintMask = 28,
  GenericParameterAttributes__Enum_ReferenceTypeConstraint = 4,
  GenericParameterAttributes__Enum_NotNullableValueTypeConstraint = 8,
  GenericParameterAttributes__Enum_DefaultConstructorConstraint = 16,
};
struct GenericParameterAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GenericParameterAttributes__Enum value;
};
struct IEnumerable_1_System_Reflection_FieldInfo_ {
  struct IEnumerable_1_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Type_ {
  struct IEnumerable_1_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MonoTypeInfo__Fields {
  struct String * full_name;
  struct MonoCMethod * default_ctor;
};
struct MonoTypeInfo {
  struct MonoTypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoTypeInfo__Fields fields;
};
struct MemberFilter__Fields {
  struct MulticastDelegate__Fields _;
};
struct MemberFilter {
  struct MemberFilter__Class *klass;
  struct MonitorData *monitor;
  struct MemberFilter__Fields fields;
};
struct IEnumerator_1_System_Char_ {
  struct IEnumerator_1_System_Char___Class *klass;
  struct MonitorData *monitor;
};
struct IFormatProvider__VTable {
  VirtualInvokeData GetFormat;
};
struct IFormatProvider__StaticFields {
};
struct IFormatProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFormatProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFormatProvider__VTable vtable;
};
struct IEnumerator__VTable {
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct IEnumerator__StaticFields {
};
struct IEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator__VTable vtable;
};
struct IComparer__VTable {
  VirtualInvokeData Compare;
};
struct IComparer__StaticFields {
};
struct IComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer__VTable vtable;
};
struct IEqualityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer__StaticFields {
};
struct IEqualityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer__VTable vtable;
};
struct Array__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_ICollection_get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData Clone;
  VirtualInvokeData get_IsReadOnly;
};
struct Array__StaticFields {
};
struct Array__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Array__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Array__VTable vtable;
};
struct IList_1_System_Reflection_CustomAttributeData___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_System_Reflection_CustomAttributeData___StaticFields {
};
struct IList_1_System_Reflection_CustomAttributeData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Reflection_CustomAttributeData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Reflection_CustomAttributeData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable vtable;
};
struct IEqualityComparer_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_System_String___StaticFields {
};
struct IEqualityComparer_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_System_String___VTable vtable;
};
struct IEnumerator_1_System_String___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_String___StaticFields {
};
struct IEnumerator_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable vtable;
};
struct IEnumerator_1_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Int32___StaticFields {
};
struct IEnumerator_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable vtable;
};
struct ICollection_1_System_String___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_String___StaticFields {
};
struct ICollection_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_String___VTable vtable;
};
struct ICollection_1_System_Int32___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Int32___StaticFields {
};
struct ICollection_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Int32___VTable vtable;
};
struct KeyValuePair_2_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_Int32___StaticFields {
};
struct KeyValuePair_2_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable vtable;
};
struct ICollection__VTable {
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
};
struct ICollection__StaticFields {
};
struct ICollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection__VTable vtable;
};
struct IDictionaryEnumerator__VTable {
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
};
struct IDictionaryEnumerator__StaticFields {
};
struct IDictionaryEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionaryEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionaryEnumerator__VTable vtable;
};
struct IEnumerable_1_System_String___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_String___StaticFields {
};
struct IEnumerable_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_String___VTable vtable;
};
struct IEnumerable_1_System_Int32___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Int32___StaticFields {
};
struct IEnumerable_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Int32___VTable vtable;
};
struct StreamingContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StreamingContext__StaticFields {
};
struct StreamingContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StreamingContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StreamingContext__VTable vtable;
};
struct Dictionary_2_System_String_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_System_Int32___StaticFields {
};
struct Dictionary_2_System_String_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_System_Int32___VTable vtable;
};
struct IFormatterConverter__VTable {
  VirtualInvokeData Convert;
  VirtualInvokeData ToBoolean;
  VirtualInvokeData ToInt32;
  VirtualInvokeData ToInt64;
  VirtualInvokeData ToSingle;
  VirtualInvokeData ToString;
};
struct IFormatterConverter__StaticFields {
};
struct IFormatterConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFormatterConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFormatterConverter__VTable vtable;
};
struct SerializationInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerializationInfo__StaticFields {
};
struct SerializationInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationInfo__VTable vtable;
};
struct IntPtr__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
struct IntPtr__StaticFields {
  void * Zero;
};
struct IntPtr__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntPtr__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntPtr__VTable vtable;
};
struct Attribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct Attribute__StaticFields {
};
struct Attribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Attribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Attribute__VTable vtable;
};
struct MarshalAsAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MarshalAsAttribute__StaticFields {
};
struct MarshalAsAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MarshalAsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MarshalAsAttribute__VTable vtable;
};
struct ParameterInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData GetRealObject;
  VirtualInvokeData get_ParameterType;
  VirtualInvokeData get_Attributes;
  VirtualInvokeData get_Member;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Position;
  VirtualInvokeData get_DefaultValue;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData IsDefined_1;
};
struct ParameterInfo_1__StaticFields {
};
struct ParameterInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParameterInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParameterInfo_1__VTable vtable;
};
struct RuntimeMethodHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
};
struct RuntimeMethodHandle__StaticFields {
};
struct RuntimeMethodHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeMethodHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeMethodHandle__VTable vtable;
};}