namespace app {
    struct IEnumerator_1_ProtectiveLightCone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ProtectiveLightCone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ProtectiveLightCone___VTable vtable;
    };

    struct List_1_ProtectiveLightCone___VTable {
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

    struct List_1_ProtectiveLightCone___StaticFields {
        struct ProtectiveLightCone__Array* _emptyArray;
    };

    struct List_1_ProtectiveLightCone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ProtectiveLightCone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ProtectiveLightCone___VTable vtable;
    };

    struct ProtectiveLightCone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnActivate;
        VirtualInvokeData OnDeactivate;
    };

    struct ProtectiveLightCone__StaticFields {
        struct List_1_ProtectiveLightCone_* m_lights;
    };

    struct ProtectiveLightCone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProtectiveLightCone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProtectiveLightCone__VTable vtable;
    };

    struct SeinDeadlyDarknessRemainingDurationValueProvider__Fields {
        struct FloatValueProvider__Fields _;
    };

    struct SeinDeadlyDarknessRemainingDurationValueProvider {
        struct SeinDeadlyDarknessRemainingDurationValueProvider__Class* klass;
        MonitorData* monitor;
        struct SeinDeadlyDarknessRemainingDurationValueProvider__Fields fields;
    };

    struct SeinDeadlyDarknessRemainingDurationValueProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetFloatValue;
    };

    struct SeinDeadlyDarknessRemainingDurationValueProvider__StaticFields {
    };

    struct SeinDeadlyDarknessRemainingDurationValueProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinDeadlyDarknessRemainingDurationValueProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinDeadlyDarknessRemainingDurationValueProvider__VTable vtable;
    };

    struct DesertEscapeWorm__Fields {
        struct MonoBehaviour__Fields _;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct SerializedIntUberState* State;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* IntroTimeline;
        struct MoonTimeline* EscapeTimelineA;
        struct MoonTimeline* EscapeTimelineB;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* EndingTimeline;
        struct ReadyForAnimationTrigger* PlayerInZoneToStartIntro;
        struct PlayerInsideZoneChecker* PlayerInZoneToStartEscapeB;
        struct PlayerInsideZoneChecker* PlayerInZoneToStartEnding;
        struct Transform* OriFollower;
        struct MoonAnimator* WormAnimator;
        struct MoonTimeline* WormHeadLeanTimeline;
        float TimeForMaxLean;
        float MaxAngle;
        float LeanCutOffDistance;
        struct AnimationCurve* LeanCutOffCurveNormalized;
        struct Transform* WormAimBone;
        struct FloatAnimationParameter* m_headLeanParameter;
        struct List_1_System_Int32_* LeaningAllowedStates;
        float MaxSpinSpeed;
        struct List_1_UnityEngine_Transform_* WormSpinTransforms;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* SpinAllowedTriggers;
        float m_currentSpinSpeed;
        struct Transform* WormReferencePosition;
        struct RubberBandedValueProvider* DefaultRubberBanding;
        struct TriggerBasedRubberBandingSet* RubberBandingOverrides;
        bool UseAccelation;
        float Acceleration;
        struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
        struct GameObject* CollidersParent;
        struct DamageDealer__Array* m_damageDealers;
        struct DamageDealer_OverrideInfo* m_overrideInfo;
        struct MoonTimeline* m_currentAdditionalTimeline;
        struct MoonTimeline* BiteTimeline;
        struct AnimationCurve* BiteTimelineChanceByDistance;
        struct List_1_DesertEscapeWorm_AdditionalTimelineSet_* AdditionalTimelineSets;
        bool DebugSpeed;
        float DebugSpeedValue;
        bool DebugLean;
        float DebugLeaningValue;
        int32_t m_checkpointFrame;
        float m_speed;
        bool _IsRaceRun_k__BackingField;
        struct Quaternion m_currentRotation;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct DesertEscapeWorm {
        struct DesertEscapeWorm__Class* klass;
        MonitorData* monitor;
        struct DesertEscapeWorm__Fields fields;
    };

    struct __declspec(align(8)) List_1_DesertEscapeWorm_AdditionalTimelineSet___Fields {
        struct DesertEscapeWorm_AdditionalTimelineSet__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DesertEscapeWorm_AdditionalTimelineSet_ {
        struct List_1_DesertEscapeWorm_AdditionalTimelineSet___Class* klass;
        MonitorData* monitor;
        struct List_1_DesertEscapeWorm_AdditionalTimelineSet___Fields fields;
    };

    struct __declspec(align(8)) DesertEscapeWorm_AdditionalTimelineSet__Fields {
        struct EventTriggerAnimator* Window;
        struct List_1_Moon_Timeline_MoonTimeline_* Timelines;
    };

    struct DesertEscapeWorm_AdditionalTimelineSet {
        struct DesertEscapeWorm_AdditionalTimelineSet__Class* klass;
        MonitorData* monitor;
        struct DesertEscapeWorm_AdditionalTimelineSet__Fields fields;
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__Array {
        struct DesertEscapeWorm_AdditionalTimelineSet__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DesertEscapeWorm_AdditionalTimelineSet* vector[32];
    };

    struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet_ {
        struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___Class* klass;
        MonitorData* monitor;
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__StaticFields {
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesertEscapeWorm_AdditionalTimelineSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesertEscapeWorm_AdditionalTimelineSet__VTable vtable;
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__Array__VTable {
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__Array__StaticFields {
    };

    struct DesertEscapeWorm_AdditionalTimelineSet__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesertEscapeWorm_AdditionalTimelineSet__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesertEscapeWorm_AdditionalTimelineSet__Array__VTable vtable;
    };

    struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___StaticFields {
    };

    struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DesertEscapeWorm_AdditionalTimelineSet___VTable vtable;
    };

    struct List_1_DesertEscapeWorm_AdditionalTimelineSet___VTable {
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

    struct List_1_DesertEscapeWorm_AdditionalTimelineSet___StaticFields {
        struct DesertEscapeWorm_AdditionalTimelineSet__Array* _emptyArray;
    };

    struct List_1_DesertEscapeWorm_AdditionalTimelineSet___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DesertEscapeWorm_AdditionalTimelineSet___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DesertEscapeWorm_AdditionalTimelineSet___VTable vtable;
    };

    struct DesertEscapeWorm__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct DesertEscapeWorm__StaticFields {
    };

    struct DesertEscapeWorm__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesertEscapeWorm__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesertEscapeWorm__VTable vtable;
    };

    enum class DesertEscapeWorm_States__Enum : int32_t {
        NotStarted = 0x00000000,
        Intro = 0x00000001,
        Escape = 0x00000002,
        Finished = 0x00000003,
    };

    struct DesertEscapeWorm_States__Enum__Boxed {
        struct DesertEscapeWorm_States__Enum__Class* klass;
        MonitorData* monitor;
        DesertEscapeWorm_States__Enum value;
    };

    struct DesertEscapeWorm_States__Enum__VTable {
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

    struct DesertEscapeWorm_States__Enum__StaticFields {
    };

    struct DesertEscapeWorm_States__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesertEscapeWorm_States__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesertEscapeWorm_States__Enum__VTable vtable;
    };

    struct DestructibleStalactite__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 _Position_k__BackingField;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct DestructibleStalactite {
        struct DestructibleStalactite__Class* klass;
        MonitorData* monitor;
        struct DestructibleStalactite__Fields fields;
    };

    struct DestructibleStalactite__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Position;
        VirtualInvokeData IsDead;
        VirtualInvokeData CanBeChargeFlamed;
        VirtualInvokeData CanBeChargeDashed;
        VirtualInvokeData CanBeGrenaded;
        VirtualInvokeData CanBeStomped;
        VirtualInvokeData CanBeBashed;
        VirtualInvokeData CanBeSpiritFlamed;
        VirtualInvokeData IsStompBouncable;
        VirtualInvokeData CanBeLevelUpBlasted;
        VirtualInvokeData CanBeSpiritSlashed;
        VirtualInvokeData CanBeHitByBow;
        VirtualInvokeData CanBeHitByMelee;
        VirtualInvokeData CanBeHitByHammerHandle;
        VirtualInvokeData CanBeHeavySpiritSlashed;
        VirtualInvokeData CanBeSpiritLeashed;
        VirtualInvokeData CanBeHomingMissiled;
        VirtualInvokeData CanBeTrapped;
        VirtualInvokeData CanBeSpiritSpeared;
        VirtualInvokeData CanBeTeleportedByBeacon;
        VirtualInvokeData CanBeGlowed;
        VirtualInvokeData get_AffectedReceivers;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct DestructibleStalactite__StaticFields {
    };

    struct DestructibleStalactite__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestructibleStalactite__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestructibleStalactite__VTable vtable;
    };

    struct LegacyDoorSlot__Fields {
        struct MonoBehaviour__Fields _;
        int32_t Index;
        struct LegacyDoorWithSlots* Door;
        bool Activated;
        struct LegacyAnimator__Array* m_animators;
    };

    struct LegacyDoorSlot {
        struct LegacyDoorSlot__Class* klass;
        MonitorData* monitor;
        struct LegacyDoorSlot__Fields fields;
    };

    enum class LegacyDoorWithSlots_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Opened = 0x00000002,
    };

    struct LegacyDoorWithSlots_State__Enum__Boxed {
        struct LegacyDoorWithSlots_State__Enum__Class* klass;
        MonitorData* monitor;
        LegacyDoorWithSlots_State__Enum value;
    };

    struct LegacyDoorWithSlots__Fields {
        struct SaveSerialize__Fields _;
        struct Transform* OriTarget;
        struct Color OriHoverColor;
        struct Transform* m_transform;
        int32_t m_slotsPending;
        int32_t m_slotsFilled;
        struct ActionMethod* OnOpenedAction;
        struct ActionMethod* OnFailAction;
        int32_t NumberOfOrbsRequired;
        struct SoundProvider* PlaceLeafSoundSoundProvider;
        struct SoundProvider* NotEnoughLeafsSoundProvider;
        struct SoundProvider* OpenDoorSoundProvider;
        struct SoundProvider* RestoreLeafsSoundProvider;
        struct SoundProvider* OnOriEnterSoundProvider;
        struct SoundProvider* OnOriExitSoundProvider;
        float OriDuration;
        float Radius;
        struct MessageProvider* HintMessage;
        struct CameraShakeAsset* DoorKeyInsertShake;
        struct ControllerShakeAsset* DoorKeyInsertControllerShake;
        struct MessageBox* m_hint;
        bool m_opensOnLeftSide;
        LegacyDoorWithSlots_State__Enum CurrentState;

        bool m_checkItOpened;
        struct SoundPlayer* m_openDoorSound;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct LegacyDoorWithSlots {
        struct LegacyDoorWithSlots__Class* klass;
        MonitorData* monitor;
        struct LegacyDoorWithSlots__Fields fields;
    };

    struct LegacyDoorWithSlots_State__Enum__VTable {
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

    struct LegacyDoorWithSlots_State__Enum__StaticFields {
    };

    struct LegacyDoorWithSlots_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDoorWithSlots_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDoorWithSlots_State__Enum__VTable vtable;
    };

    struct LegacyDoorWithSlots__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData get_NumberOfOrbsUsed;
        VirtualInvokeData set_NumberOfOrbsUsed;
    };

    struct LegacyDoorWithSlots__StaticFields {
    };

    struct LegacyDoorWithSlots__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDoorWithSlots__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDoorWithSlots__VTable vtable;
    };

    struct LegacyDoorSlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacyDoorSlot__StaticFields {
    };

    struct LegacyDoorSlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDoorSlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDoorSlot__VTable vtable;
    };

    enum class MoonDoorWithSlots_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Opened = 0x00000002,
    };

    struct MoonDoorWithSlots_State__Enum__Boxed {
        struct MoonDoorWithSlots_State__Enum__Class* klass;
        MonitorData* monitor;
        MoonDoorWithSlots_State__Enum value;
    };

    struct MoonDoorWithSlots__Fields {
        struct GuidOwner__Fields _;
        struct Transform* OriTarget;
        struct Color OriHoverColor;
        struct Transform* m_transform;
        struct MoonTimeline* OpenDoorTimeline;
        struct MoonTimeline* OnFailTimeline;
        int32_t NumberOfOrbsRequired;
        struct SoundProvider* PlaceLeafSoundSoundProvider;
        struct SoundProvider* NotEnoughLeafsSoundProvider;
        struct SoundProvider* OpenDoorSoundProvider;
        struct SoundProvider* RestoreLeafsSoundProvider;
        struct SoundProvider* OnOriEnterSoundProvider;
        struct SoundProvider* OnOriExitSoundProvider;
        float OriDuration;
        float Radius;
        struct MessageProvider* HintMessage;
        struct DesiredUberStateDoor* OpenedState;
        struct CheckpointFunctionality Checkpoint;
        struct Transform* KeystoneTarget;
        struct MessageBox* m_hint;
        bool m_opensOnLeftSide;
        MoonDoorWithSlots_State__Enum CurrentState;

        bool m_checkItOpened;
        struct IUberState__Array* m_affectingUberStates;
        struct SoundPlayer* m_openDoorSound;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct MoonDoorWithSlots {
        struct MoonDoorWithSlots__Class* klass;
        MonitorData* monitor;
        struct MoonDoorWithSlots__Fields fields;
    };

    struct MoonCustomDoorWithSlots__Fields {
        struct MoonDoorWithSlots__Fields _;
        struct MoonTimeline__Array* SpendKeyStoneTimelines;
        struct Condition_1* CanSpendKey;
        struct SerializedByteUberState* KeystonesPlaced;
        bool TriggerAutomatically;
        struct MoonTimeline* m_currentTimeline;
        int32_t KeysUsedAtATime;
        struct Nullable_1_UnityEngine_Vector3_ m_scenePosition;
        struct DynamicDataResolver* m_dataResolver;
    };

    struct MoonCustomDoorWithSlots {
        struct MoonCustomDoorWithSlots__Class* klass;
        MonitorData* monitor;
        struct MoonCustomDoorWithSlots__Fields fields;
    };

    struct MoonDoorWithSlots_State__Enum__VTable {
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

    struct MoonDoorWithSlots_State__Enum__StaticFields {
    };

    struct MoonDoorWithSlots_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonDoorWithSlots_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonDoorWithSlots_State__Enum__VTable vtable;
    };

    struct MoonDoorWithSlots__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData StopTransitions;
        VirtualInvokeData get_NumberOfOrbsUsed;
        VirtualInvokeData set_NumberOfOrbsUsed;
        VirtualInvokeData RestoreOrbs;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OpenDoor;
    };

    struct MoonDoorWithSlots__StaticFields {
    };

    struct MoonDoorWithSlots__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonDoorWithSlots__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonDoorWithSlots__VTable vtable;
    };

    struct MoonCustomDoorWithSlots__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData StopTransitions;
        VirtualInvokeData get_NumberOfOrbsUsed;
        VirtualInvokeData set_NumberOfOrbsUsed;
        VirtualInvokeData RestoreOrbs;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OpenDoor;
        VirtualInvokeData GetResolverForType;
    };

    struct MoonCustomDoorWithSlots__StaticFields {
    };

    struct MoonCustomDoorWithSlots__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonCustomDoorWithSlots__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonCustomDoorWithSlots__VTable vtable;
    };

    struct MoonDoorSlot__Fields {
        struct MonoBehaviour__Fields _;
        int32_t Index;
        struct MoonDoorWithSlots* Door;
        bool Activated;
        struct LegacyAnimator__Array* m_animators;
    };

    struct MoonDoorSlot {
        struct MoonDoorSlot__Class* klass;
        MonitorData* monitor;
        struct MoonDoorSlot__Fields fields;
    };

    struct MoonDoorSlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonDoorSlot__StaticFields {
    };

    struct MoonDoorSlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonDoorSlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonDoorSlot__VTable vtable;
    };

    struct SiniExampleSetup__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_IUberState_* StateReferenceA;
        struct MoonReference_1_IUberState_* StateReferenceB;
        struct DesiredUberStateBool* ConcreteStateReferenceC;
    };

    struct SiniExampleSetup {
        struct SiniExampleSetup__Class* klass;
        MonitorData* monitor;
        struct SiniExampleSetup__Fields fields;
    };

    struct SiniExampleSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SiniExampleSetup__StaticFields {
    };

    struct SiniExampleSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SiniExampleSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SiniExampleSetup__VTable vtable;
    };

    struct DrownPlayer__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct DrownPlayer {
        struct DrownPlayer__Class* klass;
        MonitorData* monitor;
        struct DrownPlayer__Fields fields;
    };

    struct DrownPlayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DrownPlayer__StaticFields {
    };

    struct DrownPlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DrownPlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DrownPlayer__VTable vtable;
    };

    enum class EnergyDoor_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Opened = 0x00000002,
    };

    struct EnergyDoor_State__Enum__Boxed {
        struct EnergyDoor_State__Enum__Class* klass;
        MonitorData* monitor;
        EnergyDoor_State__Enum value;
    };

    struct EnergyDoor__Fields {
        struct SaveSerialize__Fields _;
        struct Transform* OriTarget;
        struct Transform* m_transform;
        int32_t m_slotsPending;
        int32_t m_slotsFilled;
        struct ActionMethod* OnOpenedAction;
        struct ActionMethod* OnFailAction;
        int32_t AmountOfEnergyRequired;
        int32_t AmountOfEnergyUsed;
        struct SoundProvider* PlaceSlotSoundProvider;
        struct SoundProvider* ActivateSoundProvider;
        struct SoundProvider* RestoreSoundProvider;
        struct SoundProvider* OnOriEnterSoundProvider;
        struct SoundProvider* OnOriExitSoundProvider;
        float OriDuration;
        float Radius;
        struct Texture2D* HintTexture;
        struct MessageProvider* HintMessage;
        struct MessageBox* m_hint;
        EnergyDoor_State__Enum CurrentState;

        struct List_1_EnergyDoorSlot_* m_slots;
    };

    struct EnergyDoor {
        struct EnergyDoor__Class* klass;
        MonitorData* monitor;
        struct EnergyDoor__Fields fields;
    };

    struct __declspec(align(8)) List_1_EnergyDoorSlot___Fields {
        struct EnergyDoorSlot__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_EnergyDoorSlot_ {
        struct List_1_EnergyDoorSlot___Class* klass;
        MonitorData* monitor;
        struct List_1_EnergyDoorSlot___Fields fields;
    };

    struct EnergyDoorSlot__Fields {
        struct MonoBehaviour__Fields _;
        int32_t Index;
        struct EnergyDoor* Door;
        bool Activated;
        struct GameObject* Slot;
        struct GameObject* ActivateSpawnEffect;
    };

    struct EnergyDoorSlot {
        struct EnergyDoorSlot__Class* klass;
        MonitorData* monitor;
        struct EnergyDoorSlot__Fields fields;
    };

    struct EnergyDoorSlot__Array {
        struct EnergyDoorSlot__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnergyDoorSlot* vector[32];
    };

    struct IEnumerator_1_EnergyDoorSlot_ {
        struct IEnumerator_1_EnergyDoorSlot___Class* klass;
        MonitorData* monitor;
    };

    struct EnergyDoor_State__Enum__VTable {
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

    struct EnergyDoor_State__Enum__StaticFields {
    };

    struct EnergyDoor_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyDoor_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyDoor_State__Enum__VTable vtable;
    };

    struct EnergyDoorSlot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
