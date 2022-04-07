namespace app {
struct UnityAction__Fields {
  struct MulticastDelegate__Fields _;
};
struct UnityAction {
  struct UnityAction__Class *klass;
  struct MonitorData *monitor;
  struct UnityAction__Fields fields;
};
struct UnityAction__VTable {
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
struct UnityAction__StaticFields {
};
struct UnityAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityAction__VTable vtable;
};
struct InvokableCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Invoke;
  VirtualInvokeData Find;
};
struct InvokableCall__StaticFields {
};
struct InvokableCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvokableCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvokableCall__VTable vtable;
};
struct BaseInvokableCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct BaseInvokableCall__StaticFields {
};
struct BaseInvokableCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseInvokableCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseInvokableCall__VTable vtable;
};

enum PersistentListenerMode__Enum : int32_t {
  PersistentListenerMode__Enum_EventDefined = 0,
  PersistentListenerMode__Enum_Void = 1,
  PersistentListenerMode__Enum_Object = 2,
  PersistentListenerMode__Enum_Int = 3,
  PersistentListenerMode__Enum_Float = 4,
  PersistentListenerMode__Enum_String = 5,
  PersistentListenerMode__Enum_Bool = 6,
};
struct PersistentListenerMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PersistentListenerMode__Enum value;
};
enum UnityEventCallState__Enum : int32_t {
  UnityEventCallState__Enum_Off = 0,
  UnityEventCallState__Enum_EditorAndRuntime = 1,
  UnityEventCallState__Enum_RuntimeOnly = 2,
};
struct UnityEventCallState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnityEventCallState__Enum value;
};
struct __declspec(align(8)) PersistentCall__Fields {
  struct Object_1 * m_Target;
  struct String * m_MethodName;
  enum PersistentListenerMode__Enum m_Mode;
  struct ArgumentCache * m_Arguments;
  enum UnityEventCallState__Enum m_CallState;
};
struct PersistentCall {
  struct PersistentCall__Class *klass;
  struct MonitorData *monitor;
  struct PersistentCall__Fields fields;
};
struct PersistentCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PersistentCall__StaticFields {
};
struct PersistentCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PersistentCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PersistentCall__VTable vtable;
};

struct __declspec(align(8)) UnityEventBase__Fields {
  struct InvokableCallList * m_Calls;
  struct PersistentCallGroup * m_PersistentCalls;
  bool m_CallsDirty;
};
struct UnityEventBase {
  struct UnityEventBase__Class *klass;
  struct MonitorData *monitor;
  struct UnityEventBase__Fields fields;
};
struct __declspec(align(8)) InvokableCallList__Fields {
  struct List_1_UnityEngine_Events_BaseInvokableCall_ * m_PersistentCalls;
  struct List_1_UnityEngine_Events_BaseInvokableCall_ * m_RuntimeCalls;
  struct List_1_UnityEngine_Events_BaseInvokableCall_ * m_ExecutingCalls;
  bool m_NeedsUpdate;
};
struct InvokableCallList {
  struct InvokableCallList__Class *klass;
  struct MonitorData *monitor;
  struct InvokableCallList__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Events_BaseInvokableCall___Fields {
  struct BaseInvokableCall__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Events_BaseInvokableCall_ {
  struct List_1_UnityEngine_Events_BaseInvokableCall___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Events_BaseInvokableCall___Fields fields;
};
struct BaseInvokableCall__Array {
  struct BaseInvokableCall__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BaseInvokableCall * vector[32];
};
struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall_ {
  struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PersistentCallGroup__Fields {
  struct List_1_UnityEngine_Events_PersistentCall_ * m_Calls;
};
struct PersistentCallGroup {
  struct PersistentCallGroup__Class *klass;
  struct MonitorData *monitor;
  struct PersistentCallGroup__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Events_PersistentCall___Fields {
  struct PersistentCall__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Events_PersistentCall_ {
  struct List_1_UnityEngine_Events_PersistentCall___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Events_PersistentCall___Fields fields;
};
struct PersistentCall__Array {
  struct PersistentCall__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PersistentCall * vector[32];
};
struct IEnumerator_1_UnityEngine_Events_PersistentCall_ {
  struct IEnumerator_1_UnityEngine_Events_PersistentCall___Class *klass;
  struct MonitorData *monitor;
};
struct UnityEvent__Fields {
  struct UnityEventBase__Fields _;
  struct Object__Array * m_InvokeArray;
};
struct UnityEvent {
  struct UnityEvent__Class *klass;
  struct MonitorData *monitor;
  struct UnityEvent__Fields fields;
};
struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___StaticFields {
};
struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Events_BaseInvokableCall___VTable vtable;
};
struct List_1_UnityEngine_Events_BaseInvokableCall___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Events_BaseInvokableCall___StaticFields {
  struct BaseInvokableCall__Array * _emptyArray;
};
struct List_1_UnityEngine_Events_BaseInvokableCall___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Events_BaseInvokableCall___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Events_BaseInvokableCall___VTable vtable;
};
struct InvokableCallList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InvokableCallList__StaticFields {
};
struct InvokableCallList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvokableCallList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvokableCallList__VTable vtable;
};
struct IEnumerator_1_UnityEngine_Events_PersistentCall___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Events_PersistentCall___StaticFields {
};
struct IEnumerator_1_UnityEngine_Events_PersistentCall___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Events_PersistentCall___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Events_PersistentCall___VTable vtable;
};
struct List_1_UnityEngine_Events_PersistentCall___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Events_PersistentCall___StaticFields {
  struct PersistentCall__Array * _emptyArray;
};
struct List_1_UnityEngine_Events_PersistentCall___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Events_PersistentCall___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Events_PersistentCall___VTable vtable;
};
struct PersistentCallGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PersistentCallGroup__StaticFields {
};
struct PersistentCallGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PersistentCallGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PersistentCallGroup__VTable vtable;
};
struct UnityEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct UnityEvent__StaticFields {
};
struct UnityEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityEvent__VTable vtable;
};
struct UnityEventBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct UnityEventBase__StaticFields {
};
struct UnityEventBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityEventBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityEventBase__VTable vtable;
};

struct UnityLogWriter__Fields {
  struct TextWriter__Fields _;
};
struct UnityLogWriter {
  struct UnityLogWriter__Class *klass;
  struct MonitorData *monitor;
  struct UnityLogWriter__Fields fields;
};
struct UnityLogWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_FormatProvider;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData get_Encoding;
  VirtualInvokeData get_NewLine;
  VirtualInvokeData Write;
  VirtualInvokeData Write_1;
  VirtualInvokeData Write_2;
  VirtualInvokeData Write_3;
  VirtualInvokeData Write_4;
  VirtualInvokeData Write_5;
  VirtualInvokeData Write_6;
  VirtualInvokeData Write_7;
  VirtualInvokeData Write_8;
  VirtualInvokeData Write_9;
  VirtualInvokeData Write_10;
  VirtualInvokeData Write_11;
  VirtualInvokeData Write_12;
  VirtualInvokeData Write_13;
  VirtualInvokeData WriteLine;
  VirtualInvokeData WriteLine_1;
  VirtualInvokeData WriteLine_2;
  VirtualInvokeData WriteLine_3;
  VirtualInvokeData WriteLine_4;
  VirtualInvokeData WriteLine_5;
  VirtualInvokeData WriteLine_6;
  VirtualInvokeData WriteLine_7;
  VirtualInvokeData WriteLine_8;
};
struct UnityLogWriter__StaticFields {
};
struct UnityLogWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityLogWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityLogWriter__VTable vtable;
};

struct UnitySynchronizationContext__Fields {
  struct SynchronizationContext__Fields _;
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * m_AsyncWorkQueue;
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * m_CurrentFrameWork;
  int32_t m_MainThreadID;
  int32_t m_TrackedCount;
};
struct UnitySynchronizationContext {
  struct UnitySynchronizationContext__Class *klass;
  struct MonitorData *monitor;
  struct UnitySynchronizationContext__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Fields {
  struct UnitySynchronizationContext_WorkRequest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ {
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Fields fields;
};
struct UnitySynchronizationContext_WorkRequest {
  struct SendOrPostCallback * m_DelagateCallback;
  struct Object * m_DelagateState;
  struct ManualResetEvent * m_WaitHandle;
};
struct UnitySynchronizationContext_WorkRequest__Boxed {
  struct UnitySynchronizationContext_WorkRequest__Class *klass;
  struct MonitorData *monitor;
  struct UnitySynchronizationContext_WorkRequest fields;
};
struct UnitySynchronizationContext_WorkRequest__Array {
  struct UnitySynchronizationContext_WorkRequest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UnitySynchronizationContext_WorkRequest vector[32];
};
struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ {
  struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class *klass;
  struct MonitorData *monitor;
};
struct UnitySynchronizationContext_WorkRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UnitySynchronizationContext_WorkRequest__StaticFields {
};
struct UnitySynchronizationContext_WorkRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnitySynchronizationContext_WorkRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnitySynchronizationContext_WorkRequest__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___StaticFields {
};
struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UnitySynchronizationContext_WorkRequest___VTable vtable;
};
struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___StaticFields {
  struct UnitySynchronizationContext_WorkRequest__Array * _emptyArray;
};
struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___VTable vtable;
};
struct UnitySynchronizationContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Send;
  VirtualInvokeData Post;
  VirtualInvokeData OperationStarted;
  VirtualInvokeData OperationCompleted;
  VirtualInvokeData CreateCopy;
};
struct UnitySynchronizationContext__StaticFields {
};
struct UnitySynchronizationContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnitySynchronizationContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnitySynchronizationContext__VTable vtable;
};

struct Vector2Int {
  int32_t m_X;
  int32_t m_Y;
};
struct Vector2Int__Boxed {
  struct Vector2Int__Class *klass;
  struct MonitorData *monitor;
  struct Vector2Int fields;
};
struct Vector2Int__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Vector2Int__StaticFields {
  struct Vector2Int s_Zero;
  struct Vector2Int s_One;
  struct Vector2Int s_Up;
  struct Vector2Int s_Down;
  struct Vector2Int s_Left;
  struct Vector2Int s_Right;
};
struct Vector2Int__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vector2Int__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vector2Int__VTable vtable;
};

struct Vector3Int {
  int32_t m_X;
  int32_t m_Y;
  int32_t m_Z;
};
struct Vector3Int__Boxed {
  struct Vector3Int__Class *klass;
  struct MonitorData *monitor;
  struct Vector3Int fields;
};
struct Vector3Int__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Vector3Int__StaticFields {
  struct Vector3Int s_Zero;
  struct Vector3Int s_One;
  struct Vector3Int s_Up;
  struct Vector3Int s_Down;
  struct Vector3Int s_Left;
  struct Vector3Int s_Right;
};
struct Vector3Int__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vector3Int__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vector3Int__VTable vtable;
};

struct WaitForEndOfFrame {
  struct WaitForEndOfFrame__Class *klass;
  struct MonitorData *monitor;
};
struct WaitForEndOfFrame__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaitForEndOfFrame__StaticFields {
};
struct WaitForEndOfFrame__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForEndOfFrame__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForEndOfFrame__VTable vtable;
};

struct WaitForFixedUpdate {
  struct WaitForFixedUpdate__Class *klass;
  struct MonitorData *monitor;
};
struct WaitForFixedUpdate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaitForFixedUpdate__StaticFields {
};
struct WaitForFixedUpdate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForFixedUpdate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForFixedUpdate__VTable vtable;
};

struct __declspec(align(8)) WaitForSeconds__Fields {
  float m_Seconds;
};
struct WaitForSeconds {
  struct WaitForSeconds__Class *klass;
  struct MonitorData *monitor;
  struct WaitForSeconds__Fields fields;
};
struct WaitForSeconds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaitForSeconds__StaticFields {
};
struct WaitForSeconds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForSeconds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForSeconds__VTable vtable;
};

struct __declspec(align(8)) WaitUntil__Fields {
  struct Func_1_Boolean_ * m_Predicate;
};
struct WaitUntil {
  struct WaitUntil__Class *klass;
  struct MonitorData *monitor;
  struct WaitUntil__Fields fields;
};
struct Func_1_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Boolean_ {
  struct Func_1_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Boolean___Fields fields;
};
struct Func_1_Boolean___VTable {
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
struct Func_1_Boolean___StaticFields {
};
struct Func_1_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_Boolean___VTable vtable;
};
struct WaitUntil__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData get_keepWaiting;
};
struct WaitUntil__StaticFields {
};
struct WaitUntil__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitUntil__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitUntil__VTable vtable;
};

struct __declspec(align(8)) WaitWhile__Fields {
  struct Func_1_Boolean_ * m_Predicate;
};
struct WaitWhile {
  struct WaitWhile__Class *klass;
  struct MonitorData *monitor;
  struct WaitWhile__Fields fields;
};
struct WaitWhile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData get_keepWaiting;
};
struct WaitWhile__StaticFields {
};
struct WaitWhile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitWhile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitWhile__VTable vtable;
};

struct AssertionException__Fields {
  struct Exception__Fields _;
  struct String * m_UserMessage;
};
struct AssertionException {
  struct AssertionException__Class *klass;
  struct MonitorData *monitor;
  struct AssertionException__Fields fields;
};
struct AssertionException__VTable {
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
struct AssertionException__StaticFields {
};
struct AssertionException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssertionException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssertionException__VTable vtable;
};

struct BuiltinRuntimeReflectionSystem {
  struct BuiltinRuntimeReflectionSystem__Class *klass;
  struct MonitorData *monitor;
};
struct BuiltinRuntimeReflectionSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData TickRealtimeProbes;
  VirtualInvokeData Dispose;
};
struct BuiltinRuntimeReflectionSystem__StaticFields {
};
struct BuiltinRuntimeReflectionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuiltinRuntimeReflectionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuiltinRuntimeReflectionSystem__VTable vtable;
};

struct IScriptableRuntimeReflectionSystem {
  struct IScriptableRuntimeReflectionSystem__Class *klass;
  struct MonitorData *monitor;
};
struct IScriptableRuntimeReflectionSystem__VTable {
  VirtualInvokeData TickRealtimeProbes;
};
struct IScriptableRuntimeReflectionSystem__StaticFields {
};
struct IScriptableRuntimeReflectionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IScriptableRuntimeReflectionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IScriptableRuntimeReflectionSystem__VTable vtable;
};

struct __declspec(align(8)) ScriptableRuntimeReflectionSystemWrapper__Fields {
  struct IScriptableRuntimeReflectionSystem * _implementation_k__BackingField;
};
struct ScriptableRuntimeReflectionSystemWrapper {
  struct ScriptableRuntimeReflectionSystemWrapper__Class *klass;
  struct MonitorData *monitor;
  struct ScriptableRuntimeReflectionSystemWrapper__Fields fields;
};
struct ScriptableRuntimeReflectionSystemWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScriptableRuntimeReflectionSystemWrapper__StaticFields {
};
struct ScriptableRuntimeReflectionSystemWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScriptableRuntimeReflectionSystemWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScriptableRuntimeReflectionSystemWrapper__VTable vtable;
};

struct ReadOnlyAttribute_1 {
  struct ReadOnlyAttribute_1__Class *klass;
  struct MonitorData *monitor;
};
struct ReadOnlyAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ReadOnlyAttribute_1__StaticFields {
};
struct ReadOnlyAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyAttribute_1__VTable vtable;
};

struct WriteOnlyAttribute {
  struct WriteOnlyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct WriteOnlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct WriteOnlyAttribute__StaticFields {
};
struct WriteOnlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteOnlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteOnlyAttribute__VTable vtable;
};

struct NativeContainerAttribute {
  struct NativeContainerAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct NativeContainerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct NativeContainerAttribute__StaticFields {
};
struct NativeContainerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeContainerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeContainerAttribute__VTable vtable;
};}