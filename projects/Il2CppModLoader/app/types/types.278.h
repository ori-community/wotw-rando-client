namespace app {
struct GrounderDemo {
    struct GrounderDemo__Class *klass;
    MonitorData *monitor;
    struct GrounderDemo__Fields fields;
};

struct GrounderDemo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GrounderDemo__StaticFields {
};

struct GrounderDemo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GrounderDemo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GrounderDemo__VTable vtable;
};

struct PlatformRotator__Fields {
    struct MonoBehaviour__Fields _;
    float maxAngle;
    float switchRotationTime;
    float random;
    float rotationSpeed;
    struct Vector3 movePosition;
    float moveSpeed;
    int32_t characterLayer;
    struct Quaternion defaultRotation;
    struct Quaternion targetRotation;
    struct Vector3 targetPosition;
    struct Vector3 velocity;
    struct Rigidbody *r;
};

struct PlatformRotator {
    struct PlatformRotator__Class *klass;
    MonitorData *monitor;
    struct PlatformRotator__Fields fields;
};

struct PlatformRotator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlatformRotator__StaticFields {
};

struct PlatformRotator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlatformRotator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlatformRotator__VTable vtable;
};

struct __declspec(align(8)) PlatformRotator_SwitchRotation_d_14__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct PlatformRotator *__4__this;
};

struct PlatformRotator_SwitchRotation_d_14 {
    struct PlatformRotator_SwitchRotation_d_14__Class *klass;
    MonitorData *monitor;
    struct PlatformRotator_SwitchRotation_d_14__Fields fields;
};

struct PlatformRotator_SwitchRotation_d_14__VTable {
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

struct PlatformRotator_SwitchRotation_d_14__StaticFields {
};

struct PlatformRotator_SwitchRotation_d_14__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlatformRotator_SwitchRotation_d_14__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlatformRotator_SwitchRotation_d_14__VTable vtable;
};

struct BendGoal__Fields {
    struct MonoBehaviour__Fields _;
    struct LimbIK *limbIK;
    float weight;
};

struct BendGoal {
    struct BendGoal__Class *klass;
    MonitorData *monitor;
    struct BendGoal__Fields fields;
};

struct BendGoal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BendGoal__StaticFields {
};

struct BendGoal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BendGoal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BendGoal__VTable vtable;
};

struct Turret__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *target;
    struct Turret_Part__Array *parts;
};

struct Turret {
    struct Turret__Class *klass;
    MonitorData *monitor;
    struct Turret__Fields fields;
};

struct __declspec(align(8)) Turret_Part__Fields {
    struct Transform *transform;
    struct RotationLimit *rotationLimit;
};

struct Turret_Part {
    struct Turret_Part__Class *klass;
    MonitorData *monitor;
    struct Turret_Part__Fields fields;
};

struct Turret_Part__Array {
    struct Turret_Part__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Turret_Part *vector[32];
};

struct Turret_Part__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Turret_Part__StaticFields {
};

struct Turret_Part__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Turret_Part__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Turret_Part__VTable vtable;
};

struct Turret_Part__Array__VTable {
};

struct Turret_Part__Array__StaticFields {
};

struct Turret_Part__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Turret_Part__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Turret_Part__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Turret__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Turret__VTable vtable;
};

struct FixFeet__Fields {
    struct MonoBehaviour__Fields _;
    float weight;
    struct FullBodyBipedIK *ik;
    struct Vector3 relativePosL;
    struct Vector3 relativePosR;
    struct Quaternion relativeRotL;
    struct Quaternion relativeRotR;
};

struct FixFeet {
    struct FixFeet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixFeet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixFeet__VTable vtable;
};

struct Mirror__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *target;
    struct Transform__Array *children;
    struct Transform__Array *targetChildren;
    struct FullBodyBipedIK *ik;
};

struct Mirror {
    struct Mirror__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Mirror__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Mirror__VTable vtable;
};

struct Phone__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider *pickUpCollider;
    struct InteractionObject *pickUpObject;
    struct GameObject *display;
    struct Transform *parent;
};

struct Phone {
    struct Phone__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Phone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Phone__VTable vtable;
};

struct __declspec(align(8)) Phone_EnableDisplay_d_5__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct Phone *__4__this;
};

struct Phone_EnableDisplay_d_5 {
    struct Phone_EnableDisplay_d_5__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Phone_EnableDisplay_d_5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Phone_EnableDisplay_d_5__VTable vtable;
};

struct VRCharacterController__Fields {
    struct MonoBehaviour__Fields _;
    float moveSpeed;
    float rotationSpeed;
    float rotationRatchet;
    KeyCode__Enum ratchetRight;
    
    KeyCode__Enum ratchetLeft;
    
    struct Transform *forwardDirection;
    struct CharacterController *characterController;
};

struct VRCharacterController {
    struct VRCharacterController__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRCharacterController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VRCharacterController__VTable vtable;
};

struct VRInteractionController__Fields {
    struct MonoBehaviour__Fields _;
    float triggerTime;
    struct InteractionSystem *_interactionSystem_k__BackingField;
    struct InteractionTrigger *_currentTrigger_k__BackingField;
    float timer;
};

struct VRInteractionController {
    struct VRInteractionController__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRInteractionController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VRInteractionController__VTable vtable;
};

struct VRInteractionUI__Fields {
    struct MonoBehaviour__Fields _;
    struct Slider *slider;
    struct AnimationCurve *alphaToProgress;
    struct Transform *cursor;
    struct VRInteractionController *interactionController;
    struct Image__Array *sliderImages;
};

struct VRInteractionUI {
    struct VRInteractionUI__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRInteractionUI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
    struct WeaponBase__Fields fields;
};

struct WeaponRifle__Fields {
    struct WeaponBase__Fields _;
    struct Transform *shootFrom;
    float range;
    struct LayerMask hitLayers;
    struct ParticleSystem *muzzleFlash;
    struct ParticleSystem *muzzleSmoke;
    struct Transform *bulletHole;
    struct ParticleSystem *bulletHit;
    float smokeFadeOutSpeed;
    float smokeEmission;
};

struct WeaponRifle {
    struct WeaponRifle__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WeaponRifle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WeaponBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WeaponBase__VTable vtable;
};

struct CharacterAnimationSimple__Fields {
    struct CharacterAnimationBase__Fields _;
    struct CharacterThirdPerson *characterController;
    float pivotOffset;
    struct AnimationCurve *moveSpeed;
    struct Animator *animator;
};

struct CharacterAnimationSimple {
    struct CharacterAnimationSimple__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterAnimationSimple__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterAnimationSimple__VTable vtable;
};

struct UserControlAI__Fields {
    struct UserControlThirdPerson__Fields _;
    struct Transform *moveTarget;
    float stoppingDistance;
    float stoppingThreshold;
};

struct UserControlAI {
    struct UserControlAI__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserControlAI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserControlAI__VTable vtable;
};

struct ApplicationQuit__Fields {
    struct MonoBehaviour__Fields _;
};

struct ApplicationQuit {
    struct ApplicationQuit__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ApplicationQuit__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ApplicationQuit__VTable vtable;
};

struct SlowMo__Fields {
    struct MonoBehaviour__Fields _;
    struct KeyCode__Enum__Array *keyCodes;
    bool mouse0;
    bool mouse1;
    float slowMoTimeScale;
};

struct SlowMo {
    struct SlowMo__Class *klass;
    MonitorData *monitor;
    struct SlowMo__Fields fields;
};

struct KeyCode__Enum__Array {
    struct KeyCode__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    KeyCode__Enum vector[32];
};

struct KeyCode__Enum__Array__VTable {
};

struct KeyCode__Enum__Array__StaticFields {
};

struct KeyCode__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyCode__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyCode__Enum__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlowMo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlowMo__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationAttribute__Fields {
    int32_t _Count_k__BackingField;
    struct String *_DynamicCount_k__BackingField;
    bool _Nullable_k__BackingField;
};

struct DynamicInstantiationAttribute {
    struct DynamicInstantiationAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationProviderAttribute__Fields {
    struct String *_ProviderName_k__BackingField;
};

struct DynamicInstantiationProviderAttribute {
    struct DynamicInstantiationProviderAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationProviderAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationProviderAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationPrewarmPriorityAttribute__Fields {
    float _NormalPriorityRatio_k__BackingField;
    float _HighPriorityRatio_k__BackingField;
    bool _Default_k__BackingField;
};

struct DynamicInstantiationPrewarmPriorityAttribute {
    struct DynamicInstantiationPrewarmPriorityAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationPrewarmPriorityAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationPrewarmPriorityAttribute__VTable vtable;
};

struct DynamicInstantiationIgnoreAttribute {
    struct DynamicInstantiationIgnoreAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicInstantiationIgnoreAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicInstantiationIgnoreAttribute__VTable vtable;
};

struct __declspec(align(8)) DynamicInstantiationDescriptor__Fields {
    struct GameObject *Prefab;
    int32_t Count;
    struct Nullable_1_Single_ HighPriorityPrewarmRatio;
};

struct DynamicInstantiationDescriptor {
    struct DynamicInstantiationDescriptor__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationDescriptor__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ fields;
};

struct __declspec(align(8)) List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
    struct DynamicInstantiationDescriptor_ReflectionInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};

struct DynamicInstantiationDescriptor_ReflectionInfo {
    struct FieldInfo_1 *Field;
    struct MethodInfo_1 *DynamicProvider;
    struct DynamicInstantiationDescriptor_CountGetter *CountGetter;
    bool IsMoonReference;
    bool IsArrayOrList;
    bool Nullable;
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Boxed {
    struct DynamicInstantiationDescriptor_ReflectionInfo__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationDescriptor_ReflectionInfo fields;
};

struct DynamicInstantiationDescriptor_CountGetter__Fields {
    struct MulticastDelegate__Fields _;
};

struct DynamicInstantiationDescriptor_CountGetter {
    struct DynamicInstantiationDescriptor_CountGetter__Class *klass;
    MonitorData *monitor;
    struct DynamicInstantiationDescriptor_CountGetter__Fields fields;
};

struct DynamicInstantiationDescriptor_ReflectionInfo__Array {
    struct DynamicInstantiationDescriptor_ReflectionInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DynamicInstantiationDescriptor_ReflectionInfo vector[32];
};

struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct IEnumerator_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields {
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Fields fields;
};

struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *vector[32];
};

struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct IEnumerator_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct ICollection_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct Type *key;
    struct List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *value;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed {
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ fields;
};

struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    struct IEnumerable_1_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_DynamicInstantiationDescriptor___Fields {
    struct DynamicInstantiationDescriptor__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DynamicInstantiationDescriptor_ {
    struct List_1_DynamicInstantiationDescriptor___Class *klass;
    MonitorData *monitor;
    struct List_1_DynamicInstantiationDescriptor___Fields fields;
};

struct DynamicInstantiationDescriptor__Array {
    struct DynamicInstantiationDescriptor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DynamicInstantiationDescriptor *vector[32];
};

}
