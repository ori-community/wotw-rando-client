namespace app {
    struct StandardSpiritFlameProjectile__StaticFields {
    };

    struct StandardSpiritFlameProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StandardSpiritFlameProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StandardSpiritFlameProjectile__VTable vtable;
    };

    struct StandardSpiritFlameThirdShotProjectile__Fields {
        struct SpiritFlameProjectile__Fields _;
    };

    struct StandardSpiritFlameThirdShotProjectile {
        struct StandardSpiritFlameThirdShotProjectile__Class* klass;
        MonitorData* monitor;
        struct StandardSpiritFlameThirdShotProjectile__Fields fields;
    };

    struct StandardSpiritFlameThirdShotProjectile__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct StandardSpiritFlameThirdShotProjectile__StaticFields {
    };

    struct StandardSpiritFlameThirdShotProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StandardSpiritFlameThirdShotProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StandardSpiritFlameThirdShotProjectile__VTable vtable;
    };

    struct __declspec(align(8)) LeashMarkEffect_DelayedDestroyInactive_d_18__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct LeashMarkEffect* __4__this;
    };

    struct LeashMarkEffect_DelayedDestroyInactive_d_18 {
        struct LeashMarkEffect_DelayedDestroyInactive_d_18__Class* klass;
        MonitorData* monitor;
        struct LeashMarkEffect_DelayedDestroyInactive_d_18__Fields fields;
    };

    struct LeashMarkEffect_DelayedDestroyInactive_d_18__VTable {
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

    struct LeashMarkEffect_DelayedDestroyInactive_d_18__StaticFields {
    };

    struct LeashMarkEffect_DelayedDestroyInactive_d_18__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeashMarkEffect_DelayedDestroyInactive_d_18__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeashMarkEffect_DelayedDestroyInactive_d_18__VTable vtable;
    };

    struct SeinSpiritLeashAbility_LeashableInfo___VTable {
    };

    struct SeinSpiritLeashAbility_LeashableInfo___StaticFields {
    };

    struct SeinSpiritLeashAbility_LeashableInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinSpiritLeashAbility_LeashableInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinSpiritLeashAbility_LeashableInfo___VTable vtable;
    };

    struct SeinLeashPuppet__Fields {
        struct CharacterStatePuppet__Fields _;
        struct FloatAnimationParameter* AimAngleectionAnimationParameter;
        struct MoonAnimation* WatermillHangAnimation;
        struct BlendAnimation* CeilingHookJumpBlend;
        struct BlendAnimation* WallHookJumpBlend;
        struct BlendAnimation* Throw;
        struct BlendAnimation* ThrowAir;
        struct BlendAnimation* Pull;
        struct BlendAnimation* PullAir;
        struct BlendAnimation* GrabWallHook;
        struct BlendAnimation* GrabCeilingHook;
        struct BlendAnimation* Pulled;
        struct MoonAnimation* WallHookIdle;
        struct MoonAnimation* CeilingHookIdle;
        struct MoonAnimation* FlingJumpBlend;
        struct GameObject* SpiritLeashEffect;
        struct SpiritLeashEffectPose* SpiritLeashCurlPose;
    };

    struct SeinLeashPuppet {
        struct SeinLeashPuppet__Class* klass;
        MonitorData* monitor;
        struct SeinLeashPuppet__Fields fields;
    };

    struct SeinLeashPuppet__VTable {
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

    struct SeinLeashPuppet__StaticFields {
    };

    struct SeinLeashPuppet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinLeashPuppet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinLeashPuppet__VTable vtable;
    };

    struct DebugSeinAbilityOverride__Fields {
        struct MonoBehaviour__Fields _;
        AbilityType__Enum m_Ability;

        bool m_DisableDebugControls;
        bool m_Applied;
        AbilityType__Enum m_LastOverriden;
    };

    struct DebugSeinAbilityOverride {
        struct DebugSeinAbilityOverride__Class* klass;
        MonitorData* monitor;
        struct DebugSeinAbilityOverride__Fields fields;
    };

    struct DebugSeinAbilityOverride__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugSeinAbilityOverride__StaticFields {
    };

    struct DebugSeinAbilityOverride__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugSeinAbilityOverride__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugSeinAbilityOverride__VTable vtable;
    };

    enum class UberAtlassingPlatform__Enum : int32_t {
        HD = 0x00000000,
        Switch = 0x00000001,
        FourK = 0x00000002,
    };

    struct UberAtlassingPlatform__Enum__Boxed {
        struct UberAtlassingPlatform__Enum__Class* klass;
        MonitorData* monitor;
        UberAtlassingPlatform__Enum value;
    };

    struct GamePlaceholder__Fields {
        struct MonoBehaviour__Fields _;
        UberAtlassingPlatform__Enum AtlasPlatform;

        struct SceneRoot* SceneRoot;
        struct GameObject* GameControllerPrefab;
    };

    struct GamePlaceholder {
        struct GamePlaceholder__Class* klass;
        MonitorData* monitor;
        struct GamePlaceholder__Fields fields;
    };

    struct UberAtlassingPlatform__Enum__VTable {
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

    struct UberAtlassingPlatform__Enum__StaticFields {
    };

    struct UberAtlassingPlatform__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberAtlassingPlatform__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberAtlassingPlatform__Enum__VTable vtable;
    };

    struct GamePlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GamePlaceholder__StaticFields {
    };

    struct GamePlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GamePlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GamePlaceholder__VTable vtable;
    };

    struct GameplaySystemsCreator__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* OriPrefab;
        struct GameObject* WorldMapLogicPrefab;
        struct GameObject* SeinUIPrefab;
        struct GameObject* SpellSettingsPrefab;
        struct GameObject* SpiritShardSettingsPrefab;
        struct GameObject* QuestsControllerPrefab;
        struct GameObject* EquipmentWheelPrefab;
        struct GameObject* SeinStatsPrefab;
        struct GameObject* DamageByAreaResolver;
        struct GameObject* MaterialVFXManagerPrefab;
        struct GameObject* BehaviourTreeEvaluationSystemPrefab;
        bool LoadSystemsScene;
        bool LoadInGameUIScene;
    };

    struct GameplaySystemsCreator {
        struct GameplaySystemsCreator__Class* klass;
        MonitorData* monitor;
        struct GameplaySystemsCreator__Fields fields;
    };

    struct GameplaySystemsCreator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameplaySystemsCreator__StaticFields {
        struct AsyncOperation_1* GameSystemLoadingOp;
        bool HasCreatedGameplaySystems;
    };

    struct GameplaySystemsCreator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplaySystemsCreator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplaySystemsCreator__VTable vtable;
    };

    struct __declspec(align(8)) GameplaySystemsCreator_CreateSetups_d_17__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct GameplaySystemsCreator* __4__this;
    };

    struct GameplaySystemsCreator_CreateSetups_d_17 {
        struct GameplaySystemsCreator_CreateSetups_d_17__Class* klass;
        MonitorData* monitor;
        struct GameplaySystemsCreator_CreateSetups_d_17__Fields fields;
    };

    struct GameplaySystemsCreator_CreateSetups_d_17__VTable {
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

    struct GameplaySystemsCreator_CreateSetups_d_17__StaticFields {
    };

    struct GameplaySystemsCreator_CreateSetups_d_17__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplaySystemsCreator_CreateSetups_d_17__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplaySystemsCreator_CreateSetups_d_17__VTable vtable;
    };

    struct GameSystemsEnabler__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform__Array* Systems;
        struct Transform* SystemRoot;
    };

    struct GameSystemsEnabler {
        struct GameSystemsEnabler__Class* klass;
        MonitorData* monitor;
        struct GameSystemsEnabler__Fields fields;
    };

    struct GameSystemsEnabler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameSystemsEnabler__StaticFields {
        struct GameSystemsEnabler* Instance;
    };

    struct GameSystemsEnabler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameSystemsEnabler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameSystemsEnabler__VTable vtable;
    };

    struct InGameUIEnabler__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject__Array* UIElementsToInstantiate;
    };

    struct InGameUIEnabler {
        struct InGameUIEnabler__Class* klass;
        MonitorData* monitor;
        struct InGameUIEnabler__Fields fields;
    };

    struct InGameUIEnabler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InGameUIEnabler__StaticFields {
        struct InGameUIEnabler* Instance;
    };

    struct InGameUIEnabler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InGameUIEnabler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InGameUIEnabler__VTable vtable;
    };

    struct OriAnimationParametersHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinCharacter* Ori;
        struct MoonAnimator* Animator;
        struct CharacterSpriteMirror* SpriteMirror;
        struct Transform* RigTransform;
        struct FloatAnimationParameter* GroundSlopeParameter;
        struct FloatAnimationParameter* MovementSpeedParameter;
        struct FloatAnimationParameter* AimAngle;
        struct FloatAnimationParameter* GroundSlopeUpParameter;
        struct FloatAnimationParameter* GroundSlopeDownParameter;
        struct FloatAnimationParameter* WallSlopeParameter;
        struct FloatAnimationParameter* WallSlopeDownParameter;
        struct FloatAnimationParameter* WallSlopeUpParameter;
    };

    struct OriAnimationParametersHandler {
        struct OriAnimationParametersHandler__Class* klass;
        MonitorData* monitor;
        struct OriAnimationParametersHandler__Fields fields;
    };

    struct OriAnimationParametersHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OriAnimationParametersHandler__StaticFields {
    };

    struct OriAnimationParametersHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriAnimationParametersHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriAnimationParametersHandler__VTable vtable;
    };

    struct SeinDefaultAbilitiesAssignment__Fields {
        struct MonoBehaviour__Fields _;
        AbilityType__Enum AbilityX;

        AbilityType__Enum AbilityY;

        AbilityType__Enum AbilityB;
    };

    struct SeinDefaultAbilitiesAssignment {
        struct SeinDefaultAbilitiesAssignment__Class* klass;
        MonitorData* monitor;
        struct SeinDefaultAbilitiesAssignment__Fields fields;
    };

    struct SeinDefaultAbilitiesAssignment__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SeinDefaultAbilitiesAssignment__StaticFields {
    };

    struct SeinDefaultAbilitiesAssignment__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinDefaultAbilitiesAssignment__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinDefaultAbilitiesAssignment__VTable vtable;
    };

    enum class CharacterFactory_Characters__Enum : int32_t {
        Sein = 0x00000000,
        SpiritTreeCutsceneSein = 0x00000001,
        BabySein = 0x00000002,
        BabySeinWithBerries = 0x00000003,
        Naru = 0x00000004,
        NaruWithSein = 0x00000005,
        NaruSadWalk = 0x00000006,
        Ku = 0x00000008,
        None = 0x00000007,
        KuAndOri = 0x00000009,
    };

    struct CharacterFactory_Characters__Enum__Boxed {
        struct CharacterFactory_Characters__Enum__Class* klass;
        MonitorData* monitor;
        CharacterFactory_Characters__Enum value;
    };

    struct SeinPlaceholder__Fields {
        struct MonoBehaviour__Fields _;
        CharacterFactory_Characters__Enum Character;

        struct GameObject* GameplaySystems;
        struct SceneRoot* SceneRoot;
        struct GameObject* CharacterPrefab;
        struct ConditionUberState* KuIsDeadUberState;
        struct GameObject* m_auxiliaryCharacterPrefab;
        bool m_spawnPerformed;
    };

    struct SeinPlaceholder {
        struct SeinPlaceholder__Class* klass;
        MonitorData* monitor;
        struct SeinPlaceholder__Fields fields;
    };

    struct CharacterFactory_Characters__Enum__VTable {
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

    struct CharacterFactory_Characters__Enum__StaticFields {
    };

    struct CharacterFactory_Characters__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterFactory_Characters__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterFactory_Characters__Enum__VTable vtable;
    };

    struct SeinPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    };

    struct SeinPlaceholder__StaticFields {
        bool CharacterPositionSet;
    };

    struct SeinPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinPlaceholder__VTable vtable;
    };

    struct SeinSwimmingPuppet__Fields {
        struct CharacterStatePuppet__Fields _;
        struct MoonAnimation* SwimSurfaceIdle;
        struct MoonAnimation* SwimSurfaceMove;
        struct MoonAnimation* SwimSurfaceTurn;
        struct FloatAnimationParameter* SwimCurvature;
        struct FloatAnimationParameter* SwimAngleAnimationParameter;
        struct MoonAnimation* SwimHorizontalNew;
        struct MoonAnimation* SwimJumpLeftNew;
        struct MoonAnimation* SwimIdleNew;
        struct MoonAnimation* SwimMiddleToIdleClockwiseNew;
        struct MoonAnimation* SwimMiddleToIdleAntiClockwiseNew;
        struct MoonAnimation* SwimFlipHorizontal;
        struct MoonAnimation* SwimFlipVertical;
        struct MoonAnimation* SwimFlipHorizontalVertical;
        struct MoonAnimation* DamageFront;
        struct MoonAnimation* DamageBack;
        struct MoonAnimation* JumpOutOfWaterUp;
        struct MoonAnimation* JumpOutOfWaterLateral;
        struct MoonTimeline* InsideWaterCurrentLoopTimeline;
        struct MoonTimeline* DashExitTimeline;
        struct CameraShakeAnimator* DashExitCameraShakeAnimator;
        struct ControllerShakeAnimatorEntity* DashExitControllerShakeAnimator;
        struct MoonTimeline* SurfaceDashTimeline;
        struct MoonTimeline* DashIntoWaterOnHitWaterTimeline;
        struct MoonTimeline* WallImpactTimeline;
        struct EventTriggerAnimator* CancellationWindowEvent;
        struct GameObject* WallImpactEffect;
        struct MoonTimeline* SurfaceWallImpactTimeline;
        struct EventTriggerAnimator* SurfaceWallImpactCancellationWindowEvent;
        struct GameObject* SurfaceWallImpactEffect;
        struct GameObject* SwimDashEffect;
        struct GameObject* DashHitEffect;
        struct GameObject* DashExitEffect;
        struct GameObject* SurfaceDashEffect;
        struct GameObject* DashEnterEffect;
        struct GameObject* WaterSplashEffet;
        struct MoonAnimation* DashIntoWaterAnimation;
        struct MoonAnimation* DashAnimationLoop;
        struct MoonAnimation* DashExitAnimation;
        struct MoonAnimation* SurfaceDashAnimationStart;
        struct MoonAnimation* SurfaceDashAnimationLoop;
        struct GameObject* SwimDashStartEffect;
    };

    struct SeinSwimmingPuppet {
        struct SeinSwimmingPuppet__Class* klass;
        MonitorData* monitor;
        struct SeinSwimmingPuppet__Fields fields;
    };

    struct CameraShakeAnimator__Fields {
        struct TimelineEntity__Fields _;
        float m_externalStrenghtMultiplier;
        float m_externalSpeedMultiplier;
        bool _ProcessShakeInEditor_k__BackingField;
        struct MoonReference_1_UnityEngine_Transform_* ShakeLocation;
        bool ShakeOnlyIfVisibleToCamera;
        bool AffectedByDistance;
        float ShakeObjectSize;
        float ImpactRadius;
        float Strength;
        float Speed;
        float PositionalStrength;
        float RotationalStrength;
        struct CameraShakeAsset* Shake;
        float m_time;
    };

    struct CameraShakeAnimator {
        struct CameraShakeAnimator__Class* klass;
        MonitorData* monitor;
        struct CameraShakeAnimator__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_Moon_Timeline_CameraShakeAnimator___Fields {
        struct List_1_Moon_Timeline_CameraShakeAnimator_* m_objects;
    };

    struct AllContainer_1_Moon_Timeline_CameraShakeAnimator_ {
        struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_CameraShakeAnimator___Fields {
        struct CameraShakeAnimator__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_CameraShakeAnimator_ {
        struct List_1_Moon_Timeline_CameraShakeAnimator___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_CameraShakeAnimator___Fields fields;
    };

    struct CameraShakeAnimator__Array {
        struct CameraShakeAnimator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CameraShakeAnimator* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator_ {
        struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___Class* klass;
        MonitorData* monitor;
    };

    struct ControllerShakeAnimatorEntity__Fields {
        struct TimelineEntity__Fields _;
        bool ShakeOnlyIfVisibleToCamera;
        bool AffectedByDistance;
        float ShakeObjectSize;
        float ImpactRadius;
        float Strength;
        struct ControllerShakeAsset* Shake;
        float m_time;
    };

    struct ControllerShakeAnimatorEntity {
        struct ControllerShakeAnimatorEntity__Class* klass;
        MonitorData* monitor;
        struct ControllerShakeAnimatorEntity__Fields fields;
    };

    struct ControllerShakeAsset__Fields {
        struct ScriptableObject__Fields _;
        struct AnimationCurve* ShakeCurve;
        float m_duration;
    };

    struct ControllerShakeAsset {
        struct ControllerShakeAsset__Class* klass;
        MonitorData* monitor;
        struct ControllerShakeAsset__Fields fields;
    };

    struct CameraShakeAnimator__Array__VTable {
    };

    struct CameraShakeAnimator__Array__StaticFields {
    };

    struct CameraShakeAnimator__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraShakeAnimator__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraShakeAnimator__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
    };

    struct List_1_Moon_Timeline_CameraShakeAnimator___VTable {
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

    struct List_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
        struct CameraShakeAnimator__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_CameraShakeAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_CameraShakeAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
    };

    struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
    };

    struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
    };

    struct CameraShakeAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData ApproximateEvent;
    };

    struct CameraShakeAnimator__StaticFields {
        struct AllContainer_1_Moon_Timeline_CameraShakeAnimator_* All;
    };

    struct CameraShakeAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraShakeAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraShakeAnimator__VTable vtable;
    };

    struct ControllerShakeAsset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ControllerShakeAsset__StaticFields {
    };

    struct ControllerShakeAsset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ControllerShakeAsset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ControllerShakeAsset__VTable vtable;
    };

    struct ControllerShakeAnimatorEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_ControllerShakeActive;
        VirtualInvokeData get_ModifiedStrength;
        VirtualInvokeData get_CurrentShake;
        VirtualInvokeData ApproximateEvent;
    };

    struct ControllerShakeAnimatorEntity__StaticFields {
    };

    struct ControllerShakeAnimatorEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ControllerShakeAnimatorEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ControllerShakeAnimatorEntity__VTable vtable;
    };

    struct SeinSwimmingPuppet__VTable {
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

} // namespace app
