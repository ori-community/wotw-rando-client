namespace app {
struct List_1_RootMotion_FinalIK_InteractionTrigger_ {
  struct List_1_RootMotion_FinalIK_InteractionTrigger___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RootMotion_FinalIK_InteractionTrigger___Fields fields;
};
struct InteractionTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct InteractionTrigger_Range__Array * ranges;
};
struct InteractionTrigger {
  struct InteractionTrigger__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTrigger__Fields fields;
};
struct InteractionTrigger__Array {
  struct InteractionTrigger__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionTrigger * vector[32];
};
struct __declspec(align(8)) InteractionTrigger_Range__Fields {
  struct String * name;
  bool show;
  struct InteractionTrigger_CharacterPosition * characterPosition;
  struct InteractionTrigger_CameraPosition * cameraPosition;
  struct InteractionTrigger_Range_Interaction__Array * interactions;
};
struct InteractionTrigger_Range {
  struct InteractionTrigger_Range__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTrigger_Range__Fields fields;
};
struct InteractionTrigger_Range__Array {
  struct InteractionTrigger_Range__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionTrigger_Range * vector[32];
};
struct __declspec(align(8)) InteractionTrigger_CharacterPosition__Fields {
  bool use;
  struct Vector2 offset;
  float angleOffset;
  float maxAngle;
  float radius;
  bool orbit;
  bool fixYAxis;
};
struct InteractionTrigger_CharacterPosition {
  struct InteractionTrigger_CharacterPosition__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTrigger_CharacterPosition__Fields fields;
};
struct __declspec(align(8)) InteractionTrigger_CameraPosition__Fields {
  struct Collider * lookAtTarget;
  struct Vector3 direction;
  float maxDistance;
  float maxAngle;
  bool fixYAxis;
};
struct InteractionTrigger_CameraPosition {
  struct InteractionTrigger_CameraPosition__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTrigger_CameraPosition__Fields fields;
};
struct __declspec(align(8)) InteractionTrigger_Range_Interaction__Fields {
  struct InteractionObject * interactionObject;
  struct FullBodyBipedEffector__Enum__Array * effectors;
};
struct InteractionTrigger_Range_Interaction {
  struct InteractionTrigger_Range_Interaction__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTrigger_Range_Interaction__Fields fields;
};
struct InteractionTrigger_Range_Interaction__Array {
  struct InteractionTrigger_Range_Interaction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionTrigger_Range_Interaction * vector[32];
};
struct FullBodyBipedEffector__Enum__Array {
  struct FullBodyBipedEffector__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum FullBodyBipedEffector__Enum vector[32];
};
struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger_ {
  struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct InteractionSystem_InteractionDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct InteractionSystem_InteractionDelegate {
  struct InteractionSystem_InteractionDelegate__Class *klass;
  struct MonitorData *monitor;
  struct InteractionSystem_InteractionDelegate__Fields fields;
};
struct InteractionSystem_InteractionEventDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct InteractionSystem_InteractionEventDelegate {
  struct InteractionSystem_InteractionEventDelegate__Class *klass;
  struct MonitorData *monitor;
  struct InteractionSystem_InteractionEventDelegate__Fields fields;
};
struct __declspec(align(8)) InteractionLookAt__Fields {
  struct LookAtIK * ik;
  float lerpSpeed;
  float weightSpeed;
  bool isPaused;
  struct Transform * lookAtTarget;
  float stopLookTime;
  float weight;
  bool firstFBBIKSolve;
};
struct InteractionLookAt {
  struct InteractionLookAt__Class *klass;
  struct MonitorData *monitor;
  struct InteractionLookAt__Fields fields;
};
struct InteractionEffector__Array {
  struct InteractionEffector__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionEffector * vector[32];
};
struct InteractionTarget__Fields {
  struct MonoBehaviour__Fields _;
  enum FullBodyBipedEffector__Enum effectorType;
  struct InteractionTarget_Multiplier__Array * multipliers;
  float interactionSpeedMlp;
  struct Transform * pivot;
  struct Vector3 twistAxis;
  float twistWeight;
  float swingWeight;
  bool rotateOnce;
  struct Quaternion defaultLocalRotation;
  struct Transform * lastPivot;
};
struct InteractionTarget {
  struct InteractionTarget__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTarget__Fields fields;
};
struct InteractionTarget__Array {
  struct InteractionTarget__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionTarget * vector[32];
};
struct __declspec(align(8)) InteractionTarget_Multiplier__Fields {
  enum InteractionObject_WeightCurve_Type__Enum curve;
  float multiplier;
};
struct InteractionTarget_Multiplier {
  struct InteractionTarget_Multiplier__Class *klass;
  struct MonitorData *monitor;
  struct InteractionTarget_Multiplier__Fields fields;
};
struct InteractionTarget_Multiplier__Array {
  struct InteractionTarget_Multiplier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionTarget_Multiplier * vector[32];
};
struct Poser__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * poseRoot;
  float weight;
  float localRotationWeight;
  float localPositionWeight;
  bool fixTransforms;
};
struct Poser {
  struct Poser__Class *klass;
  struct MonitorData *monitor;
  struct Poser__Fields fields;
};
struct GenericPoser__Fields {
  struct Poser__Fields _;
  struct GenericPoser_Map__Array * maps;
};
struct GenericPoser {
  struct GenericPoser__Class *klass;
  struct MonitorData *monitor;
  struct GenericPoser__Fields fields;
};
struct __declspec(align(8)) GenericPoser_Map__Fields {
  struct Transform * bone;
  struct Transform * target;
  struct Vector3 defaultLocalPosition;
  struct Quaternion defaultLocalRotation;
};
struct GenericPoser_Map {
  struct GenericPoser_Map__Class *klass;
  struct MonitorData *monitor;
  struct GenericPoser_Map__Fields fields;
};
struct GenericPoser_Map__Array {
  struct GenericPoser_Map__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GenericPoser_Map * vector[32];
};
struct __declspec(align(8)) List_1_System_Boolean___Fields {
  struct Boolean__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Boolean_ {
  struct List_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Boolean___Fields fields;
};
struct InteractionObject_WeightCurve__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject_WeightCurve__StaticFields {
};
struct InteractionObject_WeightCurve__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject_WeightCurve__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject_WeightCurve__VTable vtable;
};
struct InteractionObject_Multiplier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject_Multiplier__StaticFields {
};
struct InteractionObject_Multiplier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject_Multiplier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject_Multiplier__VTable vtable;
};
struct InteractionObject_AnimatorEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject_AnimatorEvent__StaticFields {
};
struct InteractionObject_AnimatorEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject_AnimatorEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject_AnimatorEvent__VTable vtable;
};
struct InteractionObject_Message__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject_Message__StaticFields {
};
struct InteractionObject_Message__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject_Message__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject_Message__VTable vtable;
};
struct InteractionObject_InteractionEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject_InteractionEvent__StaticFields {
};
struct InteractionObject_InteractionEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject_InteractionEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject_InteractionEvent__VTable vtable;
};
struct InteractionTrigger_CharacterPosition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTrigger_CharacterPosition__StaticFields {
};
struct InteractionTrigger_CharacterPosition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTrigger_CharacterPosition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTrigger_CharacterPosition__VTable vtable;
};
struct InteractionTrigger_CameraPosition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTrigger_CameraPosition__StaticFields {
};
struct InteractionTrigger_CameraPosition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTrigger_CameraPosition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTrigger_CameraPosition__VTable vtable;
};
struct InteractionTrigger_Range_Interaction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTrigger_Range_Interaction__StaticFields {
};
struct InteractionTrigger_Range_Interaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTrigger_Range_Interaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTrigger_Range_Interaction__VTable vtable;
};
struct InteractionTrigger_Range__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTrigger_Range__StaticFields {
};
struct InteractionTrigger_Range__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTrigger_Range__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTrigger_Range__VTable vtable;
};
struct InteractionTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTrigger__StaticFields {
};
struct InteractionTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTrigger__VTable vtable;
};
struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___StaticFields {
};
struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RootMotion_FinalIK_InteractionTrigger___VTable vtable;
};
struct List_1_RootMotion_FinalIK_InteractionTrigger___VTable {
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
struct List_1_RootMotion_FinalIK_InteractionTrigger___StaticFields {
  struct InteractionTrigger__Array * _emptyArray;
};
struct List_1_RootMotion_FinalIK_InteractionTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_RootMotion_FinalIK_InteractionTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_RootMotion_FinalIK_InteractionTrigger___VTable vtable;
};
struct InteractionSystem_InteractionDelegate__VTable {
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
struct InteractionSystem_InteractionDelegate__StaticFields {
};
struct InteractionSystem_InteractionDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionSystem_InteractionDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionSystem_InteractionDelegate__VTable vtable;
};
struct InteractionSystem_InteractionEventDelegate__VTable {
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
struct InteractionSystem_InteractionEventDelegate__StaticFields {
};
struct InteractionSystem_InteractionEventDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionSystem_InteractionEventDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionSystem_InteractionEventDelegate__VTable vtable;
};
struct InteractionLookAt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionLookAt__StaticFields {
};
struct InteractionLookAt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionLookAt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionLookAt__VTable vtable;
};
struct InteractionSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
};
struct InteractionSystem__StaticFields {
};
struct InteractionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionSystem__VTable vtable;
};
struct InteractionTarget_Multiplier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTarget_Multiplier__StaticFields {
};
struct InteractionTarget_Multiplier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTarget_Multiplier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTarget_Multiplier__VTable vtable;
};
struct InteractionTarget__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionTarget__StaticFields {
};
struct InteractionTarget__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionTarget__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionTarget__VTable vtable;
};
struct InteractionObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionObject__StaticFields {
};
struct InteractionObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionObject__VTable vtable;
};
struct GenericPoser_Map__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GenericPoser_Map__StaticFields {
};
struct GenericPoser_Map__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericPoser_Map__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericPoser_Map__VTable vtable;
};
struct GenericPoser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData AutoMapping;
  VirtualInvokeData StoreDefaultState;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData Start;
  VirtualInvokeData Update;
};
struct GenericPoser__StaticFields {
};
struct GenericPoser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericPoser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericPoser__VTable vtable;
};
struct Poser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData Start;
  VirtualInvokeData Update;
};
struct Poser__StaticFields {
};
struct Poser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Poser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Poser__VTable vtable;
};
struct List_1_System_Boolean___VTable {
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
struct List_1_System_Boolean___StaticFields {
  struct Boolean__Array * _emptyArray;
};
struct List_1_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Boolean___VTable vtable;
};
struct InteractionEffector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteractionEffector__StaticFields {
};
struct InteractionEffector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractionEffector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractionEffector__VTable vtable;
};

struct InteractionObject__Array {
  struct InteractionObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject * vector[32];
};

struct HandPoser__Fields {
  struct Poser__Fields _;
  struct Transform * _poseRoot;
  struct Transform__Array * children;
  struct Transform__Array * poseChildren;
  struct Vector3__Array * defaultLocalPositions;
  struct Quaternion__Array * defaultLocalRotations;
};
struct HandPoser {
  struct HandPoser__Class *klass;
  struct MonitorData *monitor;
  struct HandPoser__Fields fields;
};
struct HandPoser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData AutoMapping;
  VirtualInvokeData StoreDefaultState;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData Start;
  VirtualInvokeData Update;
};
struct HandPoser__StaticFields {
};
struct HandPoser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HandPoser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HandPoser__VTable vtable;
};

struct RagdollUtility__Fields {
  struct MonoBehaviour__Fields _;
  struct IK * ik;
  float ragdollToAnimationTime;
  bool applyIkOnRagdoll;
  float applyVelocity;
  float applyAngularVelocity;
  struct Animator * animator;
  struct RagdollUtility_Rigidbone__Array * rigidbones;
  struct RagdollUtility_Child__Array * children;
  bool enableRagdollFlag;
  enum AnimatorUpdateMode__Enum animatorUpdateMode;
  struct IK__Array * allIKComponents;
  struct Boolean__Array * fixTransforms;
  float ragdollWeight;
  float ragdollWeightV;
  bool fixedFrame;
  struct Boolean__Array * disabledIKComponents;
};
struct RagdollUtility {
  struct RagdollUtility__Class *klass;
  struct MonitorData *monitor;
  struct RagdollUtility__Fields fields;
};
struct __declspec(align(8)) RagdollUtility_Rigidbone__Fields {
  struct Rigidbody * r;
  struct Transform * t;
  struct Collider * collider;
  struct Joint * joint;
  struct Rigidbody * c;
  bool updateAnchor;
  struct Vector3 deltaPosition;
  struct Quaternion deltaRotation;
  float deltaTime;
  struct Vector3 lastPosition;
  struct Quaternion lastRotation;
};
struct RagdollUtility_Rigidbone {
  struct RagdollUtility_Rigidbone__Class *klass;
  struct MonitorData *monitor;
  struct RagdollUtility_Rigidbone__Fields fields;
};
struct RagdollUtility_Rigidbone__Array {
  struct RagdollUtility_Rigidbone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RagdollUtility_Rigidbone * vector[32];
};
struct __declspec(align(8)) RagdollUtility_Child__Fields {
  struct Transform * t;
  struct Vector3 localPosition;
  struct Quaternion localRotation;
};
struct RagdollUtility_Child {
  struct RagdollUtility_Child__Class *klass;
  struct MonitorData *monitor;
  struct RagdollUtility_Child__Fields fields;
};
struct RagdollUtility_Child__Array {
  struct RagdollUtility_Child__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RagdollUtility_Child * vector[32];
};
struct RagdollUtility_Rigidbone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RagdollUtility_Rigidbone__StaticFields {
};
struct RagdollUtility_Rigidbone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RagdollUtility_Rigidbone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RagdollUtility_Rigidbone__VTable vtable;
};
struct RagdollUtility_Child__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RagdollUtility_Child__StaticFields {
};
struct RagdollUtility_Child__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RagdollUtility_Child__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RagdollUtility_Child__VTable vtable;
};
struct RagdollUtility__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RagdollUtility__StaticFields {
};
struct RagdollUtility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RagdollUtility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RagdollUtility__VTable vtable;
};

struct __declspec(align(8)) RagdollUtility_DisableRagdollSmooth_d_21__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct RagdollUtility * __4__this;
};
struct RagdollUtility_DisableRagdollSmooth_d_21 {
  struct RagdollUtility_DisableRagdollSmooth_d_21__Class *klass;
  struct MonitorData *monitor;
  struct RagdollUtility_DisableRagdollSmooth_d_21__Fields fields;
};
struct RagdollUtility_DisableRagdollSmooth_d_21__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct RagdollUtility_DisableRagdollSmooth_d_21__StaticFields {
};
struct RagdollUtility_DisableRagdollSmooth_d_21__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RagdollUtility_DisableRagdollSmooth_d_21__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RagdollUtility_DisableRagdollSmooth_d_21__VTable vtable;
};

struct RotationLimitHinge__Fields {
  struct RotationLimit__Fields _;
  bool useLimits;
  float min;
  float max;
  float zeroAxisDisplayOffset;
  struct Quaternion lastRotation;
  float lastAngle;
};
struct RotationLimitHinge {
  struct RotationLimitHinge__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimitHinge__Fields fields;
};
struct RotationLimitHinge__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData LimitRotation;
};
struct RotationLimitHinge__StaticFields {
};
struct RotationLimitHinge__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitHinge__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitHinge__VTable vtable;
};

struct RotationLimitPolygonal__Fields {
  struct RotationLimit__Fields _;
  float twistLimit;
  int32_t smoothIterations;
  struct RotationLimitPolygonal_LimitPoint__Array * points;
  struct Vector3__Array * P;
  struct RotationLimitPolygonal_ReachCone__Array * reachCones;
};
struct RotationLimitPolygonal {
  struct RotationLimitPolygonal__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimitPolygonal__Fields fields;
};
struct __declspec(align(8)) RotationLimitPolygonal_LimitPoint__Fields {
  struct Vector3 point;
  float tangentWeight;
};
struct RotationLimitPolygonal_LimitPoint {
  struct RotationLimitPolygonal_LimitPoint__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimitPolygonal_LimitPoint__Fields fields;
};
struct RotationLimitPolygonal_LimitPoint__Array {
  struct RotationLimitPolygonal_LimitPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RotationLimitPolygonal_LimitPoint * vector[32];
};
struct __declspec(align(8)) RotationLimitPolygonal_ReachCone__Fields {
  struct Vector3__Array * tetrahedron;
  float volume;
  struct Vector3 S;
  struct Vector3 B;
};
struct RotationLimitPolygonal_ReachCone {
  struct RotationLimitPolygonal_ReachCone__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimitPolygonal_ReachCone__Fields fields;
};
struct RotationLimitPolygonal_ReachCone__Array {
  struct RotationLimitPolygonal_ReachCone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RotationLimitPolygonal_ReachCone * vector[32];
};
struct RotationLimitPolygonal_LimitPoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotationLimitPolygonal_LimitPoint__StaticFields {
};
struct RotationLimitPolygonal_LimitPoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitPolygonal_LimitPoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitPolygonal_LimitPoint__VTable vtable;
};
struct RotationLimitPolygonal_ReachCone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotationLimitPolygonal_ReachCone__StaticFields {
};
struct RotationLimitPolygonal_ReachCone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitPolygonal_ReachCone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitPolygonal_ReachCone__VTable vtable;
};}