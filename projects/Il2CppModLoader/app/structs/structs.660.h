namespace app {
    struct StartCutsceneMusicPlayerAction {
        struct StartCutsceneMusicPlayerAction__Class* klass;
        MonitorData* monitor;
        struct StartCutsceneMusicPlayerAction__Fields fields;
    };

    struct StartCutsceneMusicPlayerAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct StartCutsceneMusicPlayerAction__StaticFields {
    };

    struct StartCutsceneMusicPlayerAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StartCutsceneMusicPlayerAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StartCutsceneMusicPlayerAction__VTable vtable;
    };

    struct TimerTransition__Fields {
        struct CutsceneTransition__Fields _;
        float Time;
    };

    struct TimerTransition {
        struct TimerTransition__Class* klass;
        MonitorData* monitor;
        struct TimerTransition__Fields fields;
    };

    struct TimerTransition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ShouldTransition;
    };

    struct TimerTransition__StaticFields {
    };

    struct TimerTransition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimerTransition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimerTransition__VTable vtable;
    };

    struct __declspec(align(8)) AnimationEntry__Fields {
        float Time;
        float SpeedMultiplier;
        struct GameObject* Object;
    };

    struct AnimationEntry {
        struct AnimationEntry__Class* klass;
        MonitorData* monitor;
        struct AnimationEntry__Fields fields;
    };

    struct AnimationEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnimationEntry__StaticFields {
    };

    struct AnimationEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationEntry__VTable vtable;
    };

    struct SpiritTreeTransformationAnimator__Fields {
        struct MonoBehaviour__Fields _;
        float FastForwardToTime;
        struct List_1_AnimationEntry_* AnimationEntries;
        float m_startTime;
    };

    struct SpiritTreeTransformationAnimator {
        struct SpiritTreeTransformationAnimator__Class* klass;
        MonitorData* monitor;
        struct SpiritTreeTransformationAnimator__Fields fields;
    };

    struct __declspec(align(8)) List_1_AnimationEntry___Fields {
        struct AnimationEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AnimationEntry_ {
        struct List_1_AnimationEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_AnimationEntry___Fields fields;
    };

    struct AnimationEntry__Array {
        struct AnimationEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimationEntry* vector[32];
    };

    struct IEnumerator_1_AnimationEntry_ {
        struct IEnumerator_1_AnimationEntry___Class* klass;
        MonitorData* monitor;
    };

    struct AnimationEntry__Array__VTable {
    };

    struct AnimationEntry__Array__StaticFields {
    };

    struct AnimationEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_AnimationEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AnimationEntry___StaticFields {
    };

    struct IEnumerator_1_AnimationEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AnimationEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AnimationEntry___VTable vtable;
    };

    struct List_1_AnimationEntry___VTable {
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

    struct List_1_AnimationEntry___StaticFields {
        struct AnimationEntry__Array* _emptyArray;
    };

    struct List_1_AnimationEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AnimationEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AnimationEntry___VTable vtable;
    };

    struct SpiritTreeTransformationAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiritTreeTransformationAnimator__StaticFields {
    };

    struct SpiritTreeTransformationAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTreeTransformationAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTreeTransformationAnimator__VTable vtable;
    };

    struct DelayedActionManager__Fields {
        struct MonoBehaviour__Fields _;
        SuspendableMask__Enum m_suspensionMask;

        bool _IsSuspended_k__BackingField;
        struct Action* FixedUpdateEvent;
    };

    struct DelayedActionManager {
        struct DelayedActionManager__Class* klass;
        MonitorData* monitor;
        struct DelayedActionManager__Fields fields;
    };

    struct DelayedActionManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct DelayedActionManager__StaticFields {
        struct DelayedActionManager* m_instance;
    };

    struct DelayedActionManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DelayedActionManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DelayedActionManager__VTable vtable;
    };

    struct TranslationTurbulenceBiasDynamicController__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonVector3* Speed;
        struct MoonBool* ShouldFlip;
        struct GenericSpring1D* Spring;
        float XMultiplier;
        float YMultiplier;
        struct Renderer* Renderer;
        struct GenericSpring1D_Particle* m_springSettingsX;
        struct GenericSpring1D_Particle* m_springSettingsY;
        struct Vector4 m_biasSettings;
    };

    struct TranslationTurbulenceBiasDynamicController {
        struct TranslationTurbulenceBiasDynamicController__Class* klass;
        MonitorData* monitor;
        struct TranslationTurbulenceBiasDynamicController__Fields fields;
    };

    struct TranslationTurbulenceBiasDynamicController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TranslationTurbulenceBiasDynamicController__StaticFields {
    };

    struct TranslationTurbulenceBiasDynamicController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TranslationTurbulenceBiasDynamicController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TranslationTurbulenceBiasDynamicController__VTable vtable;
    };

    struct __declspec(align(8)) EditorDebug__Fields {
        struct StreamWriter* m_stream;
        struct String* Name;
        struct String* m_filepath;
        bool errorLogged;
    };

    struct EditorDebug {
        struct EditorDebug__Class* klass;
        MonitorData* monitor;
        struct EditorDebug__Fields fields;
    };

    struct EditorDebug__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EditorDebug__StaticFields {
        struct String* s_basePath;
        struct String* s_baseFile;
    };

    struct EditorDebug__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditorDebug__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditorDebug__VTable vtable;
    };

    enum class AttackTokenPriority__Enum : int32_t {
        Low = 0x00000001,
        Medium = 0x00000002,
        High = 0x00000003,
    };

    struct AttackTokenPriority__Enum__Boxed {
        struct AttackTokenPriority__Enum__Class* klass;
        MonitorData* monitor;
        AttackTokenPriority__Enum value;
    };

    struct AttackTokens_Request {
        struct IAttackTokenHolder* Holder;
        AttackTokenPriority__Enum Priority;

        int32_t TokenCount;
        float TimeLastClaimed;
    };

    struct AttackTokens_Request__Boxed {
        struct AttackTokens_Request__Class* klass;
        MonitorData* monitor;
        struct AttackTokens_Request fields;
    };

    struct IAttackTokenHolder {
        struct IAttackTokenHolder__Class* klass;
        MonitorData* monitor;
    };

    struct IAttackTokenHolder__VTable {
        VirtualInvokeData get_CanAttackTokenBeStolen;
        VirtualInvokeData OnAttackTokenStolen;
    };

    struct IAttackTokenHolder__StaticFields {
    };

    struct IAttackTokenHolder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IAttackTokenHolder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IAttackTokenHolder__VTable vtable;
    };

    struct AttackTokenPriority__Enum__VTable {
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

    struct AttackTokenPriority__Enum__StaticFields {
    };

    struct AttackTokenPriority__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackTokenPriority__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackTokenPriority__Enum__VTable vtable;
    };

    struct AttackTokens_Request__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AttackTokens_Request__StaticFields {
    };

    struct AttackTokens_Request__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackTokens_Request__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackTokens_Request__VTable vtable;
    };

    enum class BabyWorm_BabySandwormState__Enum : int32_t {
        Resting = 0x00000000,
        Spawning = 0x00000001,
        Patrol = 0x00000002,
        Chase = 0x00000003,
        Dash = 0x00000004,
        OutOfSand = 0x00000005,
        Dead = 0x00000006,
    };

    struct BabyWorm_BabySandwormState__Enum__Boxed {
        struct BabyWorm_BabySandwormState__Enum__Class* klass;
        MonitorData* monitor;
        BabyWorm_BabySandwormState__Enum value;
    };

    enum class BabyWorm_AimMode__Enum : int32_t {
        LockDirection = 0x00000000,
        LockTaret = 0x00000001,
        DontStopAiming = 0x00000002,
    };

    struct BabyWorm_AimMode__Enum__Boxed {
        struct BabyWorm_AimMode__Enum__Class* klass;
        MonitorData* monitor;
        BabyWorm_AimMode__Enum value;
    };

    struct BabyWorm__Fields {
        struct DamageOwner__Fields _;
        struct SoundBankEntry* SoundBank;
        struct AnimationCurve* SpawnSpeedCurve;
        float PatrollDuration;
        float RageMinimumTimeFromStart;
        float PatrolMinimumTimeFromStart;
        float RageStartDistance;
        float RageStartTime;
        float RageAnticipationSpeed;
        struct AnimationCurve* RageSpeedCurve;
        float RageStartAngle;
        float JumpOutForceMultiply;
        float JumpInForceMultiply;
        float MinJumpForceValue;
        float MaxJumpForceValue;
        float MinDashJumpForceValue;
        float MaxDashJumpForceValue;
        float BashForceValue;
        float TurnSpeed;
        float ChaseTurnSpeed;
        float AnticTurnSpeed;
        float DashTurnSpeed;
        float MoveSpeed;
        float Acceleration;
        float Gravity;
        float AutoDestroyTime;
        float AreaDamageRange;
        struct AnimationCurve* DampingCurve;
        struct GameObject* DeathEffectPrefabInsideZone;
        struct GameObject* DeathEffectPrefabOutsideZone;
        struct GameObject* SandBurstEffect;
        struct SoundHost* SoundHost;
        struct RTPC* SpeedRTPC;
        struct Event_1* StartDigEvent;
        struct Event_1* StopDigEvent;
        struct RTPC* TurnAngleRTPC;
        struct Event_1* SharpTurnEvent;
        float SharpTurnAngleThreshold;
        struct LayerMask SolidsLayerMask;
        struct LayerMask ContactExplosionMask;
        struct SteeringForces* AvoidanceForces;
        struct Transform* FolowTest;
        struct Collider* m_collider;
        struct CharacterPlatformMovement* m_platformMovment;
        struct BabyWormDamageDealer* m_damageDealer;
        struct DamageReceiver* m_damageReceiver;
        struct BabyWormAnimation* m_animation;
        BabyWorm_BabySandwormState__Enum m_state;

        float m_lifetime;
        float m_statetime;
        bool m_dashStarted;
        float m_dashTimeout;
        bool m_autodash;
        bool m_bashed;
        bool m_wasDigZoneValid;
        float m_lastbashTimer;
        float m_currentSpeed;
        struct Vector2 m_lastDirection;
        struct Vector2 m_lastDesiredDirection;
        struct Vector2 m_suspendedVelocity;
        float m_spawnStateTimeFactor;
        struct IBabyWormAutoTarget* m_autoTarget;
        BabyWorm_AimMode__Enum TestAimMode;

        struct Vector2 m_lockedTargetDirection;
        struct MoonTimeline* ShowAimEffect;
        bool m_suspended;
        SuspendableMask__Enum m_suspensionMask;

        struct HashSet_1_DamageType_* m_damageImunityTypes;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct BabyWorm {
        struct BabyWorm__Class* klass;
        MonitorData* monitor;
        struct BabyWorm__Fields fields;
    };

    struct __declspec(align(8)) SteeringForces__Fields {
        bool ShouldDrawGizmos;
        struct SteeringForcesSettings* Settings;
        struct SteeringForces_SteeringForcesBuilder* m_builder;
        struct List_1_UnityEngine_Color_* m_debugColors;
    };

    struct SteeringForces {
        struct SteeringForces__Class* klass;
        MonitorData* monitor;
        struct SteeringForces__Fields fields;
    };

    struct __declspec(align(8)) SteeringForcesSettings__Fields {
        struct LayerMask CollisionMask;
        float NoiseScale;
        float NoiseFrequency;
        bool ApplyForcesInSequence;
        struct List_1_SteeringForcesAngleAvoidanceSettings_* AngleAvoidance;
    };

    struct SteeringForcesSettings {
        struct SteeringForcesSettings__Class* klass;
        MonitorData* monitor;
        struct SteeringForcesSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_SteeringForcesAngleAvoidanceSettings___Fields {
        struct SteeringForcesAngleAvoidanceSettings__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SteeringForcesAngleAvoidanceSettings_ {
        struct List_1_SteeringForcesAngleAvoidanceSettings___Class* klass;
        MonitorData* monitor;
        struct List_1_SteeringForcesAngleAvoidanceSettings___Fields fields;
    };

    enum class SteeringForces_AvoidanceCurve__Enum : int32_t {
        Constant = 0x00000000,
        Linear = 0x00000001,
        Quadratic = 0x00000002,
        Cubic = 0x00000003,
    };

    struct SteeringForces_AvoidanceCurve__Enum__Boxed {
        struct SteeringForces_AvoidanceCurve__Enum__Class* klass;
        MonitorData* monitor;
        SteeringForces_AvoidanceCurve__Enum value;
    };

    struct __declspec(align(8)) SteeringForcesAngleAvoidanceSettings__Fields {
        struct MoonVector2* Direction;
        float Offset;
        bool UseOffsetedDirection;
        Space__Enum DirectionSpace;

        float Distance;
        int32_t AmountOfRays;
        bool ShouldReflect;
        float Scale;
        SteeringForces_AvoidanceCurve__Enum Curve;

        struct Vector2 m_direction;
        struct Int32__Array* RaycastIds;
    };

    struct SteeringForcesAngleAvoidanceSettings {
        struct SteeringForcesAngleAvoidanceSettings__Class* klass;
        MonitorData* monitor;
        struct SteeringForcesAngleAvoidanceSettings__Fields fields;
    };

    struct SteeringForcesAngleAvoidanceSettings__Array {
        struct SteeringForcesAngleAvoidanceSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SteeringForcesAngleAvoidanceSettings* vector[32];
    };

    struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings_ {
        struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SteeringForces_SteeringForcesBuilder__Fields {
        struct Predicate_1_UnityEngine_Collider_* ColliderValid;
        struct Vector3 m_finalForce;
        struct SteeringForcesSettings* m_settings;
        struct RaycastHit__Array* m_hitInfos;
        int32_t m_sequenceIndex;
    };

    struct SteeringForces_SteeringForcesBuilder {
        struct SteeringForces_SteeringForcesBuilder__Class* klass;
        MonitorData* monitor;
        struct SteeringForces_SteeringForcesBuilder__Fields fields;
    };

    struct Predicate_1_UnityEngine_Collider___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_UnityEngine_Collider_ {
        struct Predicate_1_UnityEngine_Collider___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_UnityEngine_Collider___Fields fields;
    };

    struct BabyWormDamageDealer__Fields {
        struct DamageDealer__Fields _;
        bool m_bypassPlayerInvincibility;
    };

    struct BabyWormDamageDealer {
        struct BabyWormDamageDealer__Class* klass;
        MonitorData* monitor;
        struct BabyWormDamageDealer__Fields fields;
    };

    struct BabyWormAnimation__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonAnimator* SandwormMoonAnimator;
        struct FloatAnimationParameter* TurnFloatAnimationParameter;
        float TurnAnimatorParameterMultiplier;
        float TurnAnimatorParameterClamp;
        struct MoonTimeline* SpawnMoonTimeline;
        struct MoonTimeline* MoveMoonTimeline;
        struct MoonTimeline* AnticDashMoonTimeline;
        struct MoonTimeline* DashAttackMoonTimeline;
        struct AnimationPlayer* MoveAnimationPlayer;
    };

    struct BabyWormAnimation {
        struct BabyWormAnimation__Class* klass;
        MonitorData* monitor;
        struct BabyWormAnimation__Fields fields;
    };

    struct IBabyWormAutoTarget {
        struct IBabyWormAutoTarget__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HashSet_1_DamageType___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_DamageType___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_DamageType_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_DamageType_ {
        struct HashSet_1_DamageType___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_DamageType___Fields fields;
    };

    struct HashSet_1_T_Slot_DamageType_ {
        int32_t hashCode;
        int32_t next;
        DamageType__Enum value;
    };

    struct HashSet_1_T_Slot_DamageType___Boxed {
        struct HashSet_1_T_Slot_DamageType___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_DamageType_ fields;
    };

    struct HashSet_1_T_Slot_DamageType___Array {
        struct HashSet_1_T_Slot_DamageType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_DamageType_ vector[32];
    };

    struct BabyWormSand__Fields {
        struct BabyWorm__Fields _;
        struct GameObject* TrailEffectPrefab;
        struct DigZone* m_currentDigZone;
        bool m_hasCurrentDigZone;
        struct GameObject* m_trailEffect;
    };

    struct BabyWormSand {
        struct BabyWormSand__Class* klass;
        MonitorData* monitor;
        struct BabyWormSand__Fields fields;
    };

    struct SteeringForces_AvoidanceCurve__Enum__VTable {
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

    struct SteeringForces_AvoidanceCurve__Enum__StaticFields {
    };

    struct SteeringForces_AvoidanceCurve__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForces_AvoidanceCurve__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForces_AvoidanceCurve__Enum__VTable vtable;
    };

    struct SteeringForcesAngleAvoidanceSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteeringForcesAngleAvoidanceSettings__StaticFields {
    };

    struct SteeringForcesAngleAvoidanceSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForcesAngleAvoidanceSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForcesAngleAvoidanceSettings__VTable vtable;
    };

    struct SteeringForcesAngleAvoidanceSettings__Array__VTable {
    };

    struct SteeringForcesAngleAvoidanceSettings__Array__StaticFields {
    };

    struct SteeringForcesAngleAvoidanceSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForcesAngleAvoidanceSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForcesAngleAvoidanceSettings__Array__VTable vtable;
    };

    struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___StaticFields {
    };

    struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SteeringForcesAngleAvoidanceSettings___VTable vtable;
    };

    struct List_1_SteeringForcesAngleAvoidanceSettings___VTable {
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

    struct List_1_SteeringForcesAngleAvoidanceSettings___StaticFields {
        struct SteeringForcesAngleAvoidanceSettings__Array* _emptyArray;
    };

    struct List_1_SteeringForcesAngleAvoidanceSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SteeringForcesAngleAvoidanceSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SteeringForcesAngleAvoidanceSettings___VTable vtable;
    };

    struct SteeringForcesSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteeringForcesSettings__StaticFields {
    };

    struct SteeringForcesSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForcesSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForcesSettings__VTable vtable;
    };

    struct Predicate_1_UnityEngine_Collider___VTable {
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

    struct Predicate_1_UnityEngine_Collider___StaticFields {
    };

    struct Predicate_1_UnityEngine_Collider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_UnityEngine_Collider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_UnityEngine_Collider___VTable vtable;
    };

    struct SteeringForces_SteeringForcesBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteeringForces_SteeringForcesBuilder__StaticFields {
    };

    struct SteeringForces_SteeringForcesBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForces_SteeringForcesBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForces_SteeringForcesBuilder__VTable vtable;
    };

    struct SteeringForces__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteeringForces__StaticFields {
    };

    struct SteeringForces__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteeringForces__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteeringForces__VTable vtable;
    };

    struct BabyWormDamageDealer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEnterPhysicsTrigger;
        VirtualInvokeData get_VirtualTimelineTarget;
        VirtualInvokeData get_VirtualTimelineGroup;
        VirtualInvokeData get_NameDisplayedOnClip;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_BypassPlayerInvincibility;
        VirtualInvokeData AmountOfDamage;
        VirtualInvokeData Awake;
        VirtualInvokeData ApplyDamageToCollider;
        VirtualInvokeData DealDamage;
    };

} // namespace app
