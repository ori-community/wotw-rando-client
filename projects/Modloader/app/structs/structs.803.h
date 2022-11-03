namespace app {
    struct SkipCreditsAction {
        struct SkipCreditsAction__Class* klass;
        MonitorData* monitor;
        struct SkipCreditsAction__Fields fields;
    };

    struct SkipCreditsAction__VTable {
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

    struct SkipCreditsAction__StaticFields {
    };

    struct SkipCreditsAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCreditsAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCreditsAction__VTable vtable;
    };

    enum class SoundAction_CommandType__Enum : int32_t {
        Play = 0x00000000,
        Pause = 0x00000001,
        Stop = 0x00000002,
        StopAndFadeOut = 0x00000003,
    };

    struct SoundAction_CommandType__Enum__Boxed {
        struct SoundAction_CommandType__Enum__Class* klass;
        MonitorData* monitor;
        SoundAction_CommandType__Enum value;
    };

    struct SoundAction__Fields {
        struct ActionMethod__Fields _;
        SoundAction_CommandType__Enum Command;

        struct SoundSource* Sound;
        float FadeDuration;
    };

    struct SoundAction {
        struct SoundAction__Class* klass;
        MonitorData* monitor;
        struct SoundAction__Fields fields;
    };

    struct SoundAction_CommandType__Enum__VTable {
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

    struct SoundAction_CommandType__Enum__StaticFields {
    };

    struct SoundAction_CommandType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAction_CommandType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAction_CommandType__Enum__VTable vtable;
    };

    struct SoundAction__VTable {
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

    struct SoundAction__StaticFields {
    };

    struct SoundAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAction__VTable vtable;
    };

    struct SpawnEntityAction__Fields {
        struct ActionMethod__Fields _;
        struct EntityPlaceholder* Target;
    };

    struct SpawnEntityAction {
        struct SpawnEntityAction__Class* klass;
        MonitorData* monitor;
        struct SpawnEntityAction__Fields fields;
    };

    struct SpawnEntityAction__VTable {
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

    struct SpawnEntityAction__StaticFields {
    };

    struct SpawnEntityAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpawnEntityAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpawnEntityAction__VTable vtable;
    };

    struct SpiritTreeTextLocationController__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 m_worldPosition;
        struct AnimationCurve* ScreenPositionInfluenceCurve;
        struct Vector2 ScreenPosition;
        float ScreenWeight;
    };

    struct SpiritTreeTextLocationController {
        struct SpiritTreeTextLocationController__Class* klass;
        MonitorData* monitor;
        struct SpiritTreeTextLocationController__Fields fields;
    };

    struct SpiritTreeTextLocationController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiritTreeTextLocationController__StaticFields {
    };

    struct SpiritTreeTextLocationController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritTreeTextLocationController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritTreeTextLocationController__VTable vtable;
    };

    struct SpringSeinAction__Fields {
        struct ActionMethod__Fields _;
        float Height;
        float StopDecelerationMultiplier;
        struct Rigidbody* PushRigidbody;
        float PushForce;
    };

    struct SpringSeinAction {
        struct SpringSeinAction__Class* klass;
        MonitorData* monitor;
        struct SpringSeinAction__Fields fields;
    };

    struct SpringSeinAction__VTable {
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

    struct SpringSeinAction__StaticFields {
    };

    struct SpringSeinAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpringSeinAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpringSeinAction__VTable vtable;
    };

    enum class SpriteAnimatorAction_PlayMode__Enum : int32_t {
        Restart = 0x00000000,
        Continue = 0x00000001,
        Pause = 0x00000002,
    };

    struct SpriteAnimatorAction_PlayMode__Enum__Boxed {
        struct SpriteAnimatorAction_PlayMode__Enum__Class* klass;
        MonitorData* monitor;
        SpriteAnimatorAction_PlayMode__Enum value;
    };

    struct SpriteAnimatorAction__Fields {
        struct ActionMethod__Fields _;
        SpriteAnimatorAction_PlayMode__Enum Command;

        struct SpriteAnimator* Animator;
    };

    struct SpriteAnimatorAction {
        struct SpriteAnimatorAction__Class* klass;
        MonitorData* monitor;
        struct SpriteAnimatorAction__Fields fields;
    };

    struct SpriteAnimatorAction_PlayMode__Enum__VTable {
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

    struct SpriteAnimatorAction_PlayMode__Enum__StaticFields {
    };

    struct SpriteAnimatorAction_PlayMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAnimatorAction_PlayMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteAnimatorAction_PlayMode__Enum__VTable vtable;
    };

    struct SpriteAnimatorAction__VTable {
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

    struct SpriteAnimatorAction__StaticFields {
    };

    struct SpriteAnimatorAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteAnimatorAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteAnimatorAction__VTable vtable;
    };

    struct StartExitingAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct StartExitingAction {
        struct StartExitingAction__Class* klass;
        MonitorData* monitor;
        struct StartExitingAction__Fields fields;
    };

    struct StartExitingAction__VTable {
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

    struct StartExitingAction__StaticFields {
    };

    struct StartExitingAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StartExitingAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StartExitingAction__VTable vtable;
    };

    struct StopCharacterAnimation__Fields {
        struct ActionMethod__Fields _;
    };

    struct StopCharacterAnimation {
        struct StopCharacterAnimation__Class* klass;
        MonitorData* monitor;
        struct StopCharacterAnimation__Fields fields;
    };

    struct StopCharacterAnimation__VTable {
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

    struct StopCharacterAnimation__StaticFields {
    };

    struct StopCharacterAnimation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StopCharacterAnimation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StopCharacterAnimation__VTable vtable;
    };

    struct UnhighlightMapStoneAction__Fields {
        struct ActionMethod__Fields _;
        struct MapStone* MapStone;
    };

    struct UnhighlightMapStoneAction {
        struct UnhighlightMapStoneAction__Class* klass;
        MonitorData* monitor;
        struct UnhighlightMapStoneAction__Fields fields;
    };

    enum class MapStone_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Activated = 0x00000002,
    };

    struct MapStone_State__Enum__Boxed {
        struct MapStone_State__Enum__Class* klass;
        MonitorData* monitor;
        MapStone_State__Enum value;
    };

    struct MapStone__Fields {
        struct SaveSerialize__Fields _;
        struct Transform* OriTarget;
        struct Color OriHoverColor;
        float Radius;
        struct Transform* m_transform;
        struct GameWorldArea* WorldArea;
        struct Texture2D* HintTexture;
        struct MessageProvider* HintMessage;
        struct MessageBox* m_hint;
        struct ActionMethod* OriEnterAction;
        struct ActionMethod* OriExitAction;
        struct ActionMethod* OnOpenedAction;
        struct ActionMethod* OnFailAction;
        float OriDuration;
        MapStone_State__Enum CurrentState;
    };

    struct MapStone {
        struct MapStone__Class* klass;
        MonitorData* monitor;
        struct MapStone__Fields fields;
    };

    struct MapStone_State__Enum__VTable {
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

    struct MapStone_State__Enum__StaticFields {
    };

    struct MapStone_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MapStone_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MapStone_State__Enum__VTable vtable;
    };

    struct MapStone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct MapStone__StaticFields {
    };

    struct MapStone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MapStone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MapStone__VTable vtable;
    };

    struct UnhighlightMapStoneAction__VTable {
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

    struct UnhighlightMapStoneAction__StaticFields {
    };

    struct UnhighlightMapStoneAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnhighlightMapStoneAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnhighlightMapStoneAction__VTable vtable;
    };

    struct UnhighlightOriInterestTrigger__Fields {
        struct ActionMethod__Fields _;
        struct OriInterestTriggerB* OriInterestTrigger;
    };

    struct UnhighlightOriInterestTrigger {
        struct UnhighlightOriInterestTrigger__Class* klass;
        MonitorData* monitor;
        struct UnhighlightOriInterestTrigger__Fields fields;
    };

    enum class OriInterestTriggerB_State__Enum : int32_t {
        Normal = 0x00000000,
        Highlighted = 0x00000001,
        Activated = 0x00000002,
    };

    struct OriInterestTriggerB_State__Enum__Boxed {
        struct OriInterestTriggerB_State__Enum__Class* klass;
        MonitorData* monitor;
        OriInterestTriggerB_State__Enum value;
    };

    struct OriInterestTriggerB__Fields {
        struct SaveSerialize__Fields _;
        struct ActionMethod* HighlightAction;
        struct ActionMethod* UnhighlightAction;
        struct ActionMethod* ActivateAction;
        struct ActionMethod* AlreadyActivatedAction;
        struct Condition_1* Condition;
        bool RunOnce;
        bool IsSlot;
        struct MessageProvider* HintMessage;
        float OriDuration;
        struct Transform* OriTarget;
        struct MessageBox* m_hint;
        struct Transform* m_transform;
        bool m_activated;
        bool m_isHighlighted;
        bool UseButtonPress;
        OriInterestTriggerB_State__Enum CurrentState;
    };

    struct OriInterestTriggerB {
        struct OriInterestTriggerB__Class* klass;
        MonitorData* monitor;
        struct OriInterestTriggerB__Fields fields;
    };

    struct OriInterestTriggerB_State__Enum__VTable {
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

    struct OriInterestTriggerB_State__Enum__StaticFields {
    };

    struct OriInterestTriggerB_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriInterestTriggerB_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriInterestTriggerB_State__Enum__VTable vtable;
    };

    struct OriInterestTriggerB__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Category;
    };

    struct OriInterestTriggerB__StaticFields {
    };

    struct OriInterestTriggerB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OriInterestTriggerB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OriInterestTriggerB__VTable vtable;
    };

    struct UnhighlightOriInterestTrigger__VTable {
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

    struct UnhighlightOriInterestTrigger__StaticFields {
    };

    struct UnhighlightOriInterestTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnhighlightOriInterestTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnhighlightOriInterestTrigger__VTable vtable;
    };

    struct UnsuspendSceneAction__Fields {
        struct ActionMethod__Fields _;
        struct SceneMetaData* m_sceneMetaData;
    };

    struct UnsuspendSceneAction {
        struct UnsuspendSceneAction__Class* klass;
        MonitorData* monitor;
        struct UnsuspendSceneAction__Fields fields;
    };

    struct UnsuspendSceneAction__VTable {
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

    struct UnsuspendSceneAction__StaticFields {
    };

    struct UnsuspendSceneAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnsuspendSceneAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnsuspendSceneAction__VTable vtable;
    };

    struct LegacyTrigger__Fields {
        struct SaveSerialize__Fields _;
        struct ActionMethod* ActionToRun;
        struct MoonTimeline* TimelineToRun;
        bool StopOnRestoreCheckpoint;
        bool Active;
        struct Condition_1* Condition;
        float Delay;
        bool DontTriggerWhileRunning;
        bool TriggerOnce;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float Expiration;
        bool CreateCheckpointBeforeTriggering;
        struct Action* OnTriggerActivatedCallback;
        struct Action_1_LegacyTrigger_* OnTriggerActivatedCallbackTrigger;
        float m_activeTime;
        int32_t _AmountOfTimesActivated_k__BackingField;
    };

    struct LegacyTrigger {
        struct LegacyTrigger__Class* klass;
        MonitorData* monitor;
        struct LegacyTrigger__Fields fields;
    };

    struct CarryablePickedUpTrigger__Fields {
        struct LegacyTrigger__Fields _;
    };

    struct CarryablePickedUpTrigger {
        struct CarryablePickedUpTrigger__Class* klass;
        MonitorData* monitor;
        struct CarryablePickedUpTrigger__Fields fields;
    };

    struct Action_1_LegacyTrigger___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_LegacyTrigger_ {
        struct Action_1_LegacyTrigger___Class* klass;
        MonitorData* monitor;
        struct Action_1_LegacyTrigger___Fields fields;
    };

    struct Action_1_LegacyTrigger___VTable {
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

    struct Action_1_LegacyTrigger___StaticFields {
    };

    struct Action_1_LegacyTrigger___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_LegacyTrigger___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_LegacyTrigger___VTable vtable;
    };

    struct LegacyTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
    };

    struct LegacyTrigger__StaticFields {
    };

    struct LegacyTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyTrigger__VTable vtable;
    };

    struct CarryablePickedUpTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
    };

    struct CarryablePickedUpTrigger__StaticFields {
    };

    struct CarryablePickedUpTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CarryablePickedUpTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CarryablePickedUpTrigger__VTable vtable;
    };

    struct ColliderEnterExitTrigger__Fields {
        struct MonoBehaviour__Fields _;
        struct EnterExitActionsExecutor* EnterExitActionsExecutor;
        struct ListOfCollidedObjects* m_listOfCollidedObjects;
        struct GameObjectFilter* GameObjectFilter;
        bool HasEntered;
    };

    struct ColliderEnterExitTrigger {
        struct ColliderEnterExitTrigger__Class* klass;
        MonitorData* monitor;
        struct ColliderEnterExitTrigger__Fields fields;
    };

    struct EnterExitActionsExecutor__Fields {
        struct MonoBehaviour__Fields _;
        struct PerformingAction* EnterAction;
        struct PerformingAction* ExitAction;
        bool WaitForEnterActionToFinish;
        bool WaitForExitActionToFinish;
        struct Action* OnExitActionFinished;
        bool m_shouldPerformEnter;
        bool m_shouldPerformExit;
        bool m_exitActionWasPerforming;
    };

    struct EnterExitActionsExecutor {
        struct EnterExitActionsExecutor__Class* klass;
        MonitorData* monitor;
        struct EnterExitActionsExecutor__Fields fields;
    };

    struct ListOfCollidedObjects__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_UnityEngine_GameObject_* TriggerObjects;
        struct List_1_UnityEngine_GameObject_* CollisionObjects;
        struct Predicate_1_UnityEngine_GameObject_* m_removeFunc;
    };

    struct ListOfCollidedObjects {
        struct ListOfCollidedObjects__Class* klass;
        MonitorData* monitor;
        struct ListOfCollidedObjects__Fields fields;
    };

    struct Predicate_1_UnityEngine_GameObject___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_UnityEngine_GameObject_ {
        struct Predicate_1_UnityEngine_GameObject___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_UnityEngine_GameObject___Fields fields;
    };

    struct GameObjectFilter__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct GameObjectFilter {
        struct GameObjectFilter__Class* klass;
        MonitorData* monitor;
        struct GameObjectFilter__Fields fields;
    };

    struct EnterExitActionsExecutor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnterExitActionsExecutor__StaticFields {
    };

    struct EnterExitActionsExecutor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterExitActionsExecutor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterExitActionsExecutor__VTable vtable;
    };

    struct Predicate_1_UnityEngine_GameObject___VTable {
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

    struct Predicate_1_UnityEngine_GameObject___StaticFields {
    };

    struct Predicate_1_UnityEngine_GameObject___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_UnityEngine_GameObject___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_UnityEngine_GameObject___VTable vtable;
    };

    struct ListOfCollidedObjects__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListOfCollidedObjects__StaticFields {
    };

    struct ListOfCollidedObjects__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListOfCollidedObjects__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListOfCollidedObjects__VTable vtable;
    };

    struct GameObjectFilter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Valid;
    };

    struct GameObjectFilter__StaticFields {
    };

    struct GameObjectFilter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameObjectFilter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameObjectFilter__VTable vtable;
    };

    struct ColliderEnterExitTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ColliderEnterExitTrigger__StaticFields {
    };

    struct ColliderEnterExitTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColliderEnterExitTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColliderEnterExitTrigger__VTable vtable;
    };

} // namespace app
