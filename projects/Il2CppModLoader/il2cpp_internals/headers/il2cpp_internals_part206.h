namespace app {
struct Turret_Part__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Turret_Part__StaticFields {
};
struct Turret_Part__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Turret_Part__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Turret_Part__VTable vtable;
};
struct Turret__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Turret__StaticFields {
};
struct Turret__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Turret__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Turret__VTable vtable;
};

struct FixFeet__Fields {
  struct MonoBehaviour__Fields _;
  float weight;
  struct FullBodyBipedIK * ik;
  struct Vector3 relativePosL;
  struct Vector3 relativePosR;
  struct Quaternion relativeRotL;
  struct Quaternion relativeRotR;
};
struct FixFeet {
  struct FixFeet__Class *klass;
  struct MonitorData *monitor;
  struct FixFeet__Fields fields;
};
struct FixFeet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FixFeet__StaticFields {
};
struct FixFeet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixFeet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FixFeet__VTable vtable;
};

struct Mirror__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * target;
  struct Transform__Array * children;
  struct Transform__Array * targetChildren;
  struct FullBodyBipedIK * ik;
};
struct Mirror {
  struct Mirror__Class *klass;
  struct MonitorData *monitor;
  struct Mirror__Fields fields;
};
struct Mirror__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Mirror__StaticFields {
};
struct Mirror__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mirror__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mirror__VTable vtable;
};

struct Phone__Fields {
  struct MonoBehaviour__Fields _;
  struct Collider * pickUpCollider;
  struct InteractionObject * pickUpObject;
  struct GameObject * display;
  struct Transform * parent;
};
struct Phone {
  struct Phone__Class *klass;
  struct MonitorData *monitor;
  struct Phone__Fields fields;
};
struct Phone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Phone__StaticFields {
};
struct Phone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Phone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Phone__VTable vtable;
};

struct __declspec(align(8)) Phone_EnableDisplay_d_5__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct Phone * __4__this;
};
struct Phone_EnableDisplay_d_5 {
  struct Phone_EnableDisplay_d_5__Class *klass;
  struct MonitorData *monitor;
  struct Phone_EnableDisplay_d_5__Fields fields;
};
struct Phone_EnableDisplay_d_5__VTable {
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
struct Phone_EnableDisplay_d_5__StaticFields {
};
struct Phone_EnableDisplay_d_5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Phone_EnableDisplay_d_5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Phone_EnableDisplay_d_5__VTable vtable;
};

struct VRCharacterController__Fields {
  struct MonoBehaviour__Fields _;
  float moveSpeed;
  float rotationSpeed;
  float rotationRatchet;
  enum KeyCode__Enum ratchetRight;
  enum KeyCode__Enum ratchetLeft;
  struct Transform * forwardDirection;
  struct CharacterController * characterController;
};
struct VRCharacterController {
  struct VRCharacterController__Class *klass;
  struct MonitorData *monitor;
  struct VRCharacterController__Fields fields;
};
struct VRCharacterController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRCharacterController__StaticFields {
};
struct VRCharacterController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRCharacterController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRCharacterController__VTable vtable;
};

struct VRInteractionController__Fields {
  struct MonoBehaviour__Fields _;
  float triggerTime;
  struct InteractionSystem * _interactionSystem_k__BackingField;
  struct InteractionTrigger * _currentTrigger_k__BackingField;
  float timer;
};
struct VRInteractionController {
  struct VRInteractionController__Class *klass;
  struct MonitorData *monitor;
  struct VRInteractionController__Fields fields;
};
struct VRInteractionController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRInteractionController__StaticFields {
};
struct VRInteractionController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRInteractionController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRInteractionController__VTable vtable;
};

struct VRInteractionUI__Fields {
  struct MonoBehaviour__Fields _;
  struct Slider * slider;
  struct AnimationCurve * alphaToProgress;
  struct Transform * cursor;
  struct VRInteractionController * interactionController;
  struct Image__Array * sliderImages;
};
struct VRInteractionUI {
  struct VRInteractionUI__Class *klass;
  struct MonitorData *monitor;
  struct VRInteractionUI__Fields fields;
};
struct VRInteractionUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRInteractionUI__StaticFields {
};
struct VRInteractionUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRInteractionUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRInteractionUI__VTable vtable;
};

struct WeaponBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 recoilDirection;
  float recoilAngleVertical;
  float recoilAngleHorizontal;
  float recoilRandom;
};
struct WeaponBase {
  struct WeaponBase__Class *klass;
  struct MonitorData *monitor;
  struct WeaponBase__Fields fields;
};
struct WeaponRifle__Fields {
  struct WeaponBase__Fields _;
  struct Transform * shootFrom;
  float range;
  struct LayerMask hitLayers;
  struct ParticleSystem * muzzleFlash;
  struct ParticleSystem * muzzleSmoke;
  struct Transform * bulletHole;
  struct ParticleSystem * bulletHit;
  float smokeFadeOutSpeed;
  float smokeEmission;
};
struct WeaponRifle {
  struct WeaponRifle__Class *klass;
  struct MonitorData *monitor;
  struct WeaponRifle__Fields fields;
};
struct WeaponRifle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Fire;
};
struct WeaponRifle__StaticFields {
};
struct WeaponRifle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponRifle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponRifle__VTable vtable;
};
struct WeaponBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct WeaponBase__StaticFields {
};
struct WeaponBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponBase__VTable vtable;
};

struct CharacterAnimationSimple__Fields {
  struct CharacterAnimationBase__Fields _;
  struct CharacterThirdPerson * characterController;
  float pivotOffset;
  struct AnimationCurve * moveSpeed;
  struct Animator * animator;
};
struct CharacterAnimationSimple {
  struct CharacterAnimationSimple__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationSimple__Fields fields;
};
struct CharacterAnimationSimple__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPivotPoint;
  VirtualInvokeData get_animationGrounded;
  VirtualInvokeData Start;
  VirtualInvokeData LateUpdate;
};
struct CharacterAnimationSimple__StaticFields {
};
struct CharacterAnimationSimple__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationSimple__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationSimple__VTable vtable;
};

struct UserControlAI__Fields {
  struct UserControlThirdPerson__Fields _;
  struct Transform * moveTarget;
  float stoppingDistance;
  float stoppingThreshold;
};
struct UserControlAI {
  struct UserControlAI__Class *klass;
  struct MonitorData *monitor;
  struct UserControlAI__Fields fields;
};
struct UserControlAI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Update;
};
struct UserControlAI__StaticFields {
};
struct UserControlAI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UserControlAI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UserControlAI__VTable vtable;
};

struct ApplicationQuit__Fields {
  struct MonoBehaviour__Fields _;
};
struct ApplicationQuit {
  struct ApplicationQuit__Class *klass;
  struct MonitorData *monitor;
  struct ApplicationQuit__Fields fields;
};
struct ApplicationQuit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ApplicationQuit__StaticFields {
};
struct ApplicationQuit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ApplicationQuit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ApplicationQuit__VTable vtable;
};

struct SlowMo__Fields {
  struct MonoBehaviour__Fields _;
  struct KeyCode__Enum__Array * keyCodes;
  bool mouse0;
  bool mouse1;
  float slowMoTimeScale;
};
struct SlowMo {
  struct SlowMo__Class *klass;
  struct MonitorData *monitor;
  struct SlowMo__Fields fields;
};
struct KeyCode__Enum__Array {
  struct KeyCode__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum KeyCode__Enum vector[32];
};
struct SlowMo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SlowMo__StaticFields {
};
struct SlowMo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SlowMo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SlowMo__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationAttribute__Fields {
  int32_t _Count_k__BackingField;
  struct String * _DynamicCount_k__BackingField;
  bool _Nullable_k__BackingField;
};
struct DynamicInstantiationAttribute {
  struct DynamicInstantiationAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationAttribute__Fields fields;
};
struct DynamicInstantiationAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicInstantiationAttribute__StaticFields {
};
struct DynamicInstantiationAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicInstantiationAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicInstantiationAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationProviderAttribute__Fields {
  struct String * _ProviderName_k__BackingField;
};
struct DynamicInstantiationProviderAttribute {
  struct DynamicInstantiationProviderAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationProviderAttribute__Fields fields;
};
struct DynamicInstantiationProviderAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicInstantiationProviderAttribute__StaticFields {
};
struct DynamicInstantiationProviderAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicInstantiationProviderAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicInstantiationProviderAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationPrewarmPriorityAttribute__Fields {
  float _NormalPriorityRatio_k__BackingField;
  float _HighPriorityRatio_k__BackingField;
  bool _Default_k__BackingField;
};
struct DynamicInstantiationPrewarmPriorityAttribute {
  struct DynamicInstantiationPrewarmPriorityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationPrewarmPriorityAttribute__Fields fields;
};
struct DynamicInstantiationPrewarmPriorityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicInstantiationPrewarmPriorityAttribute__StaticFields {
};
struct DynamicInstantiationPrewarmPriorityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicInstantiationPrewarmPriorityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicInstantiationPrewarmPriorityAttribute__VTable vtable;
};

struct DynamicInstantiationIgnoreAttribute {
  struct DynamicInstantiationIgnoreAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DynamicInstantiationIgnoreAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicInstantiationIgnoreAttribute__StaticFields {
};
struct DynamicInstantiationIgnoreAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicInstantiationIgnoreAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicInstantiationIgnoreAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationDescriptor__Fields {
  struct GameObject * Prefab;
  int32_t Count;
  struct Nullable_1_Single_ HighPriorityPrewarmRatio;
};
struct DynamicInstantiationDescriptor {
  struct DynamicInstantiationDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationDescriptor__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ vector[32];
};
struct __declspec(align(8)) List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
  struct DynamicInstantiationDescriptor_ReflectionInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};
struct DynamicInstantiationDescriptor_ReflectionInfo {
  struct FieldInfo_1 * Field;
  struct MethodInfo_1 * DynamicProvider;
  struct DynamicInstantiationDescriptor_CountGetter * CountGetter;
  bool IsMoonReference;
  bool IsArrayOrList;
  bool Nullable;
};
struct DynamicInstantiationDescriptor_ReflectionInfo__Boxed {
  struct DynamicInstantiationDescriptor_ReflectionInfo__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationDescriptor_ReflectionInfo fields;
};
struct DynamicInstantiationDescriptor_ReflectionInfo__Array {
  struct DynamicInstantiationDescriptor_ReflectionInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DynamicInstantiationDescriptor_ReflectionInfo vector[32];
};
struct DynamicInstantiationDescriptor_CountGetter__Fields {
  struct MulticastDelegate__Fields _;
};
struct DynamicInstantiationDescriptor_CountGetter {
  struct DynamicInstantiationDescriptor_CountGetter__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationDescriptor_CountGetter__Fields fields;
};
struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
  struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
  struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};
struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * vector[32];
};
struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct Type * key;
  struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ * value;
};
struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed {
  struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ fields;
};
struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
  struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
  struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DynamicInstantiationDescriptor___Fields {
  struct DynamicInstantiationDescriptor__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DynamicInstantiationDescriptor_ {
  struct List_1_DynamicInstantiationDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DynamicInstantiationDescriptor___Fields fields;
};
struct DynamicInstantiationDescriptor__Array {
  struct DynamicInstantiationDescriptor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DynamicInstantiationDescriptor * vector[32];
};
struct IEnumerator_1_DynamicInstantiationDescriptor_ {
  struct IEnumerator_1_DynamicInstantiationDescriptor___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DynamicInstantiationScanner__Fields {
  bool m_findGameObjectsWithoutAttribute;
  struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ * m_visitors;
  struct Dictionary_2_System_Type_DynamicInstantiationScanner_EvaluationFn_1_ * m_evaluateObjFns;
};
struct DynamicInstantiationScanner {
  struct DynamicInstantiationScanner__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner__Fields fields;
};
struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object_ {
  struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner_EvaluationFn_1_UnityEngine_Object___Fields fields;
};
struct __declspec(align(8)) DynamicInstantiationScanner_EvaluationCtx__Fields {
  struct MonoBehaviour * RootComponent;
  struct List_1_DynamicInstantiationDescriptor_ * Descriptors;
  struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ * OnGameObjectFound;
  struct List_1_DynamicInstantiationDescriptor_ * DescriptorsTemp;
  struct Stack_1_System_Single_ * PrewarmPriorities;
  struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ * EvaluatedScriptableObjects;
  int32_t EvaluationDepth;
  int32_t EvaluationCount;
  bool CycleReferenceDetected;
  bool DepthExceeded;
  bool CountExceeded;
};
struct DynamicInstantiationScanner_EvaluationCtx {
  struct DynamicInstantiationScanner_EvaluationCtx__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner_EvaluationCtx__Fields fields;
};
struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ {
  struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo___Fields fields;
};
struct __declspec(align(8)) Stack_1_System_Single___Fields {
  struct Single__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_System_Single_ {
  struct Stack_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_System_Single___Fields fields;
};
struct IEnumerator_1_System_Single_ {
  struct IEnumerator_1_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_ScriptableObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ {
  struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct ScriptableObject * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ScriptableObject_System_Int32_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_ScriptableObject_ {
  struct IEqualityComparer_1_UnityEngine_ScriptableObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};
struct IEnumerator_1_UnityEngine_ScriptableObject_ {
  struct IEnumerator_1_UnityEngine_ScriptableObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ScriptableObject_System_Int32___Fields fields;
};
struct ICollection_1_UnityEngine_ScriptableObject_ {
  struct ICollection_1_UnityEngine_ScriptableObject___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ {
  struct ScriptableObject * key;
  int32_t value;
};
struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Boxed {
  struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ fields;
};
struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array {
  struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_ScriptableObject_ {
  struct IEnumerable_1_UnityEngine_ScriptableObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_ValueTuple_2_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
  struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields fields;
};
struct ValueTuple_2_Type_System_Reflection_FieldInfo_ {
  struct Type * Item1;
  struct FieldInfo_1 * Item2;
};
struct ValueTuple_2_Type_System_Reflection_FieldInfo___Boxed {
  struct ValueTuple_2_Type_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct ValueTuple_2_Type_System_Reflection_FieldInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
  int32_t hashCode;
  int32_t next;
  struct ValueTuple_2_Type_System_Reflection_FieldInfo_ key;
  struct DynamicInstantiationScanner_Visitor * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ vector[32];
};
struct __declspec(align(8)) DynamicInstantiationScanner_Visitor__Fields {
  struct Type * Type;
  struct ParameterExpression * CurrentValue;
};
struct DynamicInstantiationScanner_Visitor {
  struct DynamicInstantiationScanner_Visitor__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner_Visitor__Fields fields;
};
struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Fields {
  struct DynamicInstantiationScanner_Visitor__Fields _;
  struct FieldInfo_1 * m_fieldInfo;
  struct DynamicInstantiationPrewarmPriorityAttribute * m_attribute;
  struct DynamicInstantiationScanner_Visitor * m_underlying;
};
struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor {
  struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Fields fields;
};
struct __declspec(align(8)) DynamicInstantiationScanner_VisitorCtx__Fields {
  struct DynamicInstantiationScanner * Scanner;
  struct ParameterExpression * EvaluationCtxExpr;
  struct ParameterExpression * DeclaringInstance;
  struct HashSet_1_System_Type_ * TypesVisited;
  struct List_1_System_Linq_Expressions_ParameterExpression_ * ArrayIndexExpression;
};
struct DynamicInstantiationScanner_VisitorCtx {
  struct DynamicInstantiationScanner_VisitorCtx__Class *klass;
  struct MonitorData *monitor;
  struct DynamicInstantiationScanner_VisitorCtx__Fields fields;
};
struct __declspec(align(8)) HashSet_1_System_Type___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_System_Type___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_System_Type_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_System_Type_ {
  struct HashSet_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_System_Type___Fields fields;
};
struct HashSet_1_T_Slot_System_Type_ {
  int32_t hashCode;
  int32_t next;
  struct Type * value;
};
struct HashSet_1_T_Slot_System_Type___Boxed {
  struct HashSet_1_T_Slot_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_System_Type_ fields;
};
struct HashSet_1_T_Slot_System_Type___Array {
  struct HashSet_1_T_Slot_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_System_Type_ vector[32];
};
struct __declspec(align(8)) List_1_System_Linq_Expressions_ParameterExpression___Fields {
  struct ParameterExpression__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Linq_Expressions_ParameterExpression_ {
  struct List_1_System_Linq_Expressions_ParameterExpression___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Linq_Expressions_ParameterExpression___Fields fields;
};
struct IEqualityComparer_1_System_ValueTuple_2_ {
  struct IEqualityComparer_1_System_ValueTuple_2___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
  struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields fields;
};
struct ValueTuple_2_Type_System_Reflection_FieldInfo___Array {
  struct ValueTuple_2_Type_System_Reflection_FieldInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValueTuple_2_Type_System_Reflection_FieldInfo_ vector[32];
};
struct IEnumerator_1_System_ValueTuple_2_ {
  struct IEnumerator_1_System_ValueTuple_2___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_ValueTuple_2_DynamicInstantiationScanner_Visitor___Fields {
  struct Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ * dictionary;
};}