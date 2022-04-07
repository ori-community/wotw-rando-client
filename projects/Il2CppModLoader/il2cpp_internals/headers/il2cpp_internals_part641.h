namespace app {
struct CharacterAnimationStateBase__StaticFields {
};
struct CharacterAnimationStateBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationStateBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationStateBase__VTable vtable;
};
struct IEnumerator_1_CharacterAnimationStateBase___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CharacterAnimationStateBase___StaticFields {
};
struct IEnumerator_1_CharacterAnimationStateBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CharacterAnimationStateBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CharacterAnimationStateBase___VTable vtable;
};
struct List_1_CharacterAnimationStateBase___VTable {
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
struct List_1_CharacterAnimationStateBase___StaticFields {
  struct CharacterAnimationStateBase__Array * _emptyArray;
};
struct List_1_CharacterAnimationStateBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CharacterAnimationStateBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CharacterAnimationStateBase___VTable vtable;
};
struct CharacterAnimationController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct CharacterAnimationController__StaticFields {
};
struct CharacterAnimationController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationController__VTable vtable;
};

struct CharacterAnimationState__Fields {
  struct CharacterAnimationStateBase__Fields _;
  struct TextureAnimationWithTransitions * Animation;
};
struct CharacterAnimationState {
  struct CharacterAnimationState__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationState__Fields fields;
};
struct CharacterAnimationState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnAnimationEnd;
  VirtualInvokeData get_AnimationToPlay;
};
struct CharacterAnimationState__StaticFields {
};
struct CharacterAnimationState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationState__VTable vtable;
};

struct __declspec(align(8)) AnimationListSwap__Fields {
  bool ShouldOVerride;
  struct MoonAnimation__Array * AnimationOverride;
  struct MoonAnimation__Array * OverriddenAnimation;
};
struct AnimationListSwap {
  struct AnimationListSwap__Class *klass;
  struct MonitorData *monitor;
  struct AnimationListSwap__Fields fields;
};
struct AnimationListSwap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationListSwap__StaticFields {
};
struct AnimationListSwap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationListSwap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationListSwap__VTable vtable;
};

struct SeinIdlePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct SoundProvider * YawnSound;
  struct MoonAnimation * Idle;
  struct FloatAnimationParameter * Slope;
  struct MoonAnimation * IdleYawn;
  struct MoonAnimation * LookBackIn;
  struct MoonAnimation * LookBackLoop;
  struct MoonAnimation * LookBackOut;
  struct FloatAnimationParameter * Ground;
  struct FloatAnimationParameter * SlopeB;
  struct FloatAnimationParameter * SlopeUp;
  struct FloatAnimationParameter * SlopeDown;
  struct FloatAnimationParameter * Speed;
  struct FloatAnimationParameter * FallSpeed;
  struct FloatAnimationParameter * bowAimAngle;
  struct FloatAnimationParameter * AimAngle;
  struct FloatAnimationParameter * ChargeJumpDirection;
  struct FloatAnimationParameter * DigBlend;
  struct FloatAnimationParameter * SwimAngle;
  struct FloatAnimationParameter * SwinCurvature;
  struct FloatAnimationParameter * GrabSurfaceSlopeParameter;
  struct FloatAnimationParameter * GrabSurfaceCurvatureParameter;
  struct SeinLeafParticles * LeafParticlesManager;
  struct GameObject * LeavesTrail;
  struct GameObject * LeavesTrailUnderwater;
  struct GameObject * m_leavesTrail;
  struct GameObject * m_leavesTrailUnderwater;
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_ * m_floatAnimatorParamCache;
};
struct SeinIdlePuppet {
  struct SeinIdlePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinIdlePuppet__Fields fields;
};
struct SeinLeafParticles__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem * Particles;
  struct ParticleSystem * ParticlesUnderwater;
  struct AnimationCurve * ParticleRateOverSpeed;
  struct AnimationCurve * EmissionMultiplierOverDistance;
  float ParticleEmmisionRate;
  float ParticleUnderWaterEmmisionRate;
  struct SeinCharacter * m_seinCharacter;
  bool m_emission_initialized;
  struct ParticleSystem_EmissionModule m_emission;
  bool m_emissionUnderwater_initialized;
  struct ParticleSystem_EmissionModule m_emissionUnderwater;
  struct Vector3 m_lastPosition;
};
struct SeinLeafParticles {
  struct SeinLeafParticles__Class *klass;
  struct MonitorData *monitor;
  struct SeinLeafParticles__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_FloatAnimationParameter_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_FloatAnimationParameter_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_ {
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct FloatAnimationParameter * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single_ vector[32];
};
struct IEqualityComparer_1_Moon_FloatAnimationParameter_ {
  struct IEqualityComparer_1_Moon_FloatAnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Fields {
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Fields fields;
};
struct FloatAnimationParameter__Array {
  struct FloatAnimationParameter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FloatAnimationParameter * vector[32];
};
struct IEnumerator_1_Moon_FloatAnimationParameter_ {
  struct IEnumerator_1_Moon_FloatAnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Fields {
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Fields fields;
};
struct ICollection_1_Moon_FloatAnimationParameter_ {
  struct ICollection_1_Moon_FloatAnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ {
  struct FloatAnimationParameter * key;
  float value;
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Boxed {
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ fields;
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Array {
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_FloatAnimationParameter_ {
  struct IEnumerable_1_Moon_FloatAnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct SeinLeafParticles__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinLeafParticles__StaticFields {
};
struct SeinLeafParticles__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLeafParticles__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLeafParticles__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct IEqualityComparer_1_Moon_FloatAnimationParameter___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_FloatAnimationParameter___StaticFields {
};
struct IEqualityComparer_1_Moon_FloatAnimationParameter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_FloatAnimationParameter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_FloatAnimationParameter___VTable vtable;
};
struct IEnumerator_1_Moon_FloatAnimationParameter___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_FloatAnimationParameter___StaticFields {
};
struct IEnumerator_1_Moon_FloatAnimationParameter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_FloatAnimationParameter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_FloatAnimationParameter___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct ICollection_1_Moon_FloatAnimationParameter___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_FloatAnimationParameter___StaticFields {
};
struct ICollection_1_Moon_FloatAnimationParameter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_FloatAnimationParameter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_FloatAnimationParameter___VTable vtable;
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct IEnumerable_1_Moon_FloatAnimationParameter___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_FloatAnimationParameter___StaticFields {
};
struct IEnumerable_1_Moon_FloatAnimationParameter___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_FloatAnimationParameter___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_FloatAnimationParameter___VTable vtable;
};
struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___VTable {
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
struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___StaticFields {
};
struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_FloatAnimationParameter_System_Single___VTable vtable;
};
struct SeinIdlePuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
  VirtualInvokeData GetInstantiatedFieldValue;
};
struct SeinIdlePuppet__StaticFields {
};
struct SeinIdlePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinIdlePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinIdlePuppet__VTable vtable;
};

struct SeinRunPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * Move;
  struct FloatAnimationParameter * Speed;
  struct FloatAnimationParameter * Slope;
  struct MoonAnimation * RunTurn;
};
struct SeinRunPuppet {
  struct SeinRunPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinRunPuppet__Fields fields;
};
struct SeinRunPuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinRunPuppet__StaticFields {
};
struct SeinRunPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRunPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRunPuppet__VTable vtable;
};

struct __declspec(align(8)) FallOverride__Fields {
  struct SeinFallPuppet * Puppet;
  bool ShouldOverride;
  struct AnimationSwap * IdleBlend;
  struct AnimationSwap * MovingBlend;
  struct AnimationSwap * TurnBlend;
};
struct FallOverride {
  struct FallOverride__Class *klass;
  struct MonitorData *monitor;
  struct FallOverride__Fields fields;
};
struct SeinFallPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct Event_1 * FallingSound;
  struct Event_1 * FallingSoundStop;
  struct GameObject * LandingParticleEffect;
  struct SurfaceToSoundProviderMap * LandingSound;
  struct RTPC * FallSpeedRtpc;
  struct MoonAnimation * Idle;
  struct MoonAnimation * Moving;
  struct FloatAnimationParameter * FallSpeed;
  struct FloatAnimationParameter * HorizontalSpeed;
  struct MoonAnimation * Turn;
  struct MoonTimeline * FallTurnTimeline;
  struct CharacterTimelineTurning * FallTurnTimelineSetup;
};
struct SeinFallPuppet {
  struct SeinFallPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinFallPuppet__Fields fields;
};
struct SeinFallPuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinFallPuppet__StaticFields {
};
struct SeinFallPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinFallPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinFallPuppet__VTable vtable;
};
struct FallOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FallOverride__StaticFields {
};
struct FallOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallOverride__VTable vtable;
};

struct HurtPlayer__Fields {
  struct MonoBehaviour__Fields _;
  float Damage;
};
struct HurtPlayer {
  struct HurtPlayer__Class *klass;
  struct MonitorData *monitor;
  struct HurtPlayer__Fields fields;
};
struct HurtPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HurtPlayer__StaticFields {
};
struct HurtPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HurtPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HurtPlayer__VTable vtable;
};

struct InheritVelocityPlatform__Fields {
  struct MonoBehaviour__Fields _;
};
struct InheritVelocityPlatform {
  struct InheritVelocityPlatform__Class *klass;
  struct MonitorData *monitor;
  struct InheritVelocityPlatform__Fields fields;
};
struct InheritVelocityPlatform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InheritVelocityPlatform__StaticFields {
};
struct InheritVelocityPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InheritVelocityPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InheritVelocityPlatform__VTable vtable;
};

struct MovingPlatformSettings__Fields {
  struct MonoBehaviour__Fields _;
  bool Ceiling;
  bool Ground;
  bool WallLeft;
  bool WallRight;
};
struct MovingPlatformSettings {
  struct MovingPlatformSettings__Class *klass;
  struct MonitorData *monitor;
  struct MovingPlatformSettings__Fields fields;
};
struct MovingPlatformSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MovingPlatformSettings__StaticFields {
};
struct MovingPlatformSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovingPlatformSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovingPlatformSettings__VTable vtable;
};

struct SteepWall__Fields {
  struct MonoBehaviour__Fields _;
};
struct SteepWall {
  struct SteepWall__Class *klass;
  struct MonitorData *monitor;
  struct SteepWall__Fields fields;
};
struct SteepWall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SteepWall__StaticFields {
};
struct SteepWall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteepWall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteepWall__VTable vtable;
};

enum CheckpointRestrictZone_CheckpointRestrictType__Enum : int32_t {
  CheckpointRestrictZone_CheckpointRestrictType__Enum_None = 0,
  CheckpointRestrictZone_CheckpointRestrictType__Enum_WaitUntilOutside = 1,
  CheckpointRestrictZone_CheckpointRestrictType__Enum_UseLastPositionOutsideZone = 2,
  CheckpointRestrictZone_CheckpointRestrictType__Enum_TargetPosition = 3,
};
struct CheckpointRestrictZone_CheckpointRestrictType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CheckpointRestrictZone_CheckpointRestrictType__Enum value;
};
struct CheckpointRestrictZone__Fields {
  struct MonoBehaviour__Fields _;
  bool m_inside;
  float m_characterPositionNormalized;
  struct Rect m_bounds;
  struct Condition_1 * Condition;
  enum CheckpointRestrictZone_CheckpointRestrictType__Enum RestrictCheckpoint;
  struct Vector3 m_lastSafePositionOutsideZone;
  bool m_wasInsideZoneWhenDying;
  bool m_requestedCheckpoint;
  bool AllowAbandonChallange;
  struct ConditionUberState * AllowAbandonChallangeCondition;
  bool RefillHealthAndEnergy;
  bool ApplyRefillInstantly;
  struct Vector3 TargetPosition;
  struct Color EditorColor;
};
struct CheckpointRestrictZone {
  struct CheckpointRestrictZone__Class *klass;
  struct MonitorData *monitor;
  struct CheckpointRestrictZone__Fields fields;
};
struct __declspec(align(8)) List_1_CheckpointRestrictZone___Fields {
  struct CheckpointRestrictZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CheckpointRestrictZone_ {
  struct List_1_CheckpointRestrictZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CheckpointRestrictZone___Fields fields;
};
struct CheckpointRestrictZone__Array {
  struct CheckpointRestrictZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CheckpointRestrictZone * vector[32];
};
struct IEnumerator_1_CheckpointRestrictZone_ {
  struct IEnumerator_1_CheckpointRestrictZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_CheckpointRestrictZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CheckpointRestrictZone___StaticFields {
};
struct IEnumerator_1_CheckpointRestrictZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CheckpointRestrictZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CheckpointRestrictZone___VTable vtable;
};
struct List_1_CheckpointRestrictZone___VTable {
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
struct List_1_CheckpointRestrictZone___StaticFields {
  struct CheckpointRestrictZone__Array * _emptyArray;
};
struct List_1_CheckpointRestrictZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CheckpointRestrictZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CheckpointRestrictZone___VTable vtable;
};
struct CheckpointRestrictZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFixedUpdate;
};
struct CheckpointRestrictZone__StaticFields {
  struct List_1_CheckpointRestrictZone_ * All;
};
struct CheckpointRestrictZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CheckpointRestrictZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CheckpointRestrictZone__VTable vtable;
};

struct ConstrainPlayerMovementZone__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * m_sein;
  bool ConstrainLeft;
  bool ConstrainRight;
};
struct ConstrainPlayerMovementZone {
  struct ConstrainPlayerMovementZone__Class *klass;
  struct MonitorData *monitor;
  struct ConstrainPlayerMovementZone__Fields fields;
};
struct ConstrainPlayerMovementZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConstrainPlayerMovementZone__StaticFields {
};
struct ConstrainPlayerMovementZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstrainPlayerMovementZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstrainPlayerMovementZone__VTable vtable;
};

struct CrushPlayer__Fields {
  struct MonoBehaviour__Fields _;
};
struct CrushPlayer {
  struct CrushPlayer__Class *klass;
  struct MonitorData *monitor;
  struct CrushPlayer__Fields fields;
};
struct CrushPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrushPlayer__StaticFields {
};
struct CrushPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrushPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrushPlayer__VTable vtable;
};

struct DontCrushPlayer__Fields {
  struct MonoBehaviour__Fields _;
};
struct DontCrushPlayer {
  struct DontCrushPlayer__Class *klass;
  struct MonitorData *monitor;
  struct DontCrushPlayer__Fields fields;
};
struct DontCrushPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}