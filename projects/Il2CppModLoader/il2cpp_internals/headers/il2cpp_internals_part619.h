namespace app {
struct ShowHelpTextAction__StaticFields {
};
struct ShowHelpTextAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowHelpTextAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowHelpTextAction__VTable vtable;
};

enum HintLayer__Enum : int32_t {
  HintLayer__Enum_SoulFlame = 0,
  HintLayer__Enum_HintZone = 1,
  HintLayer__Enum_Gameplay = 2,
  HintLayer__Enum_GameSaved = 3,
};
struct HintLayer__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HintLayer__Enum value;
};
struct ShowHintAction__Fields {
  struct ActionMethod__Fields _;
  struct Texture2D * HintTexture;
  struct MessageProvider * HintMessage;
  enum HintLayer__Enum Layer;
  float Duration;
};
struct ShowHintAction {
  struct ShowHintAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowHintAction__Fields fields;
};
struct ShowHintAction__VTable {
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
struct ShowHintAction__StaticFields {
};
struct ShowHintAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowHintAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowHintAction__VTable vtable;
};

enum ShowPagesAction_MessageType__Enum : int32_t {
  ShowPagesAction_MessageType__Enum_Ability = 0,
  ShowPagesAction_MessageType__Enum_Pickup = 1,
  ShowPagesAction_MessageType__Enum_Shard = 2,
  ShowPagesAction_MessageType__Enum_Spell = 3,
  ShowPagesAction_MessageType__Enum_Wisp = 4,
};
struct ShowPagesAction_MessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShowPagesAction_MessageType__Enum value;
};
struct ShowPagesAction__Fields {
  struct PerformingAction__Fields _;
  struct ActionMethod * ActionOnFinishedReading;
  bool FreezeTime;
  struct Texture2D__Array * Pages;
  struct Condition_1 * Condition;
  struct MessageProvider * Message;
  struct GameObject * Avatar;
  float MinWaitTime;
  enum ShowPagesAction_MessageType__Enum Type;
  struct MessageBox * m_message;
};
struct ShowPagesAction {
  struct ShowPagesAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowPagesAction__Fields fields;
};
struct ShowPagesAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct ShowPagesAction__StaticFields {
};
struct ShowPagesAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowPagesAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowPagesAction__VTable vtable;
};

struct __declspec(align(8)) ShowPagesAction_OnFinishedContext__Fields {
  enum MessageBox_HideAction__Enum HideAction;
};
struct ShowPagesAction_OnFinishedContext {
  struct ShowPagesAction_OnFinishedContext__Class *klass;
  struct MonitorData *monitor;
  struct ShowPagesAction_OnFinishedContext__Fields fields;
};
struct ShowPagesAction_OnFinishedContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShowPagesAction_OnFinishedContext__StaticFields {
};
struct ShowPagesAction_OnFinishedContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowPagesAction_OnFinishedContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowPagesAction_OnFinishedContext__VTable vtable;
};

struct ShowRaceFinishMessageAction__Fields {
  struct ActionMethod__Fields _;
  struct String * Message;
  float Duration;
  struct SoundProvider * Sound;
};
struct ShowRaceFinishMessageAction {
  struct ShowRaceFinishMessageAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowRaceFinishMessageAction__Fields fields;
};
struct ShowRaceFinishMessageAction__VTable {
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
struct ShowRaceFinishMessageAction__StaticFields {
};
struct ShowRaceFinishMessageAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowRaceFinishMessageAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowRaceFinishMessageAction__VTable vtable;
};

struct ShowSeinUIAction__Fields {
  struct ActionMethod__Fields _;
  bool ShouldShow;
};
struct ShowSeinUIAction {
  struct ShowSeinUIAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowSeinUIAction__Fields fields;
};
struct ShowSeinUIAction__VTable {
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
struct ShowSeinUIAction__StaticFields {
};
struct ShowSeinUIAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowSeinUIAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowSeinUIAction__VTable vtable;
};

struct ShowSpiritTreeTextAction__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
  struct MessageProvider * Message;
  struct SoundProvider * Voice;
  float Duration;
  float Scale;
  bool ShowAsUi;
  struct Vector2 ScreenPosition;
  float ScreenWeight;
};
struct ShowSpiritTreeTextAction {
  struct ShowSpiritTreeTextAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowSpiritTreeTextAction__Fields fields;
};
struct ShowSpiritTreeTextAction__VTable {
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
struct ShowSpiritTreeTextAction__StaticFields {
};
struct ShowSpiritTreeTextAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowSpiritTreeTextAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowSpiritTreeTextAction__VTable vtable;
};

struct ShowStoryTextAction__Fields {
  struct PerformingAction__Fields _;
  struct MessageProvider * StoryMessage;
  struct MessageBox * m_messageBox;
  bool FreezeGame;
};
struct ShowStoryTextAction {
  struct ShowStoryTextAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowStoryTextAction__Fields fields;
};
struct ShowStoryTextAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct ShowStoryTextAction__StaticFields {
};
struct ShowStoryTextAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowStoryTextAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowStoryTextAction__VTable vtable;
};

struct ShowWispTextAction__Fields {
  struct PerformingAction__Fields _;
  struct MessageBox * m_messageBox;
};
struct ShowWispTextAction {
  struct ShowWispTextAction__Class *klass;
  struct MonitorData *monitor;
  struct ShowWispTextAction__Fields fields;
};
struct ShowWispTextAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct ShowWispTextAction__StaticFields {
};
struct ShowWispTextAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowWispTextAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowWispTextAction__VTable vtable;
};

struct SkipCreditsAction__Fields {
  struct ActionMethod__Fields _;
  bool wasSkiped;
};
struct SkipCreditsAction {
  struct SkipCreditsAction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkipCreditsAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkipCreditsAction__VTable vtable;
};

enum SoundAction_CommandType__Enum : int32_t {
  SoundAction_CommandType__Enum_Play = 0,
  SoundAction_CommandType__Enum_Pause = 1,
  SoundAction_CommandType__Enum_Stop = 2,
  SoundAction_CommandType__Enum_StopAndFadeOut = 3,
};
struct SoundAction_CommandType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SoundAction_CommandType__Enum value;
};
struct SoundAction__Fields {
  struct ActionMethod__Fields _;
  enum SoundAction_CommandType__Enum Command;
  struct SoundSource * Sound;
  float FadeDuration;
};
struct SoundAction {
  struct SoundAction__Class *klass;
  struct MonitorData *monitor;
  struct SoundAction__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundAction__VTable vtable;
};

struct SpawnEntityAction__Fields {
  struct ActionMethod__Fields _;
  struct EntityPlaceholder * Target;
};
struct SpawnEntityAction {
  struct SpawnEntityAction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpawnEntityAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpawnEntityAction__VTable vtable;
};

struct SpiritTreeTextLocationController__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 m_worldPosition;
  struct AnimationCurve * ScreenPositionInfluenceCurve;
  struct Vector2 ScreenPosition;
  float ScreenWeight;
};
struct SpiritTreeTextLocationController {
  struct SpiritTreeTextLocationController__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritTreeTextLocationController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritTreeTextLocationController__VTable vtable;
};

struct SpringSeinAction__Fields {
  struct ActionMethod__Fields _;
  float Height;
  float StopDecelerationMultiplier;
  struct Rigidbody * PushRigidbody;
  float PushForce;
};
struct SpringSeinAction {
  struct SpringSeinAction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringSeinAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringSeinAction__VTable vtable;
};

enum SpriteAnimatorAction_PlayMode__Enum : int32_t {
  SpriteAnimatorAction_PlayMode__Enum_Restart = 0,
  SpriteAnimatorAction_PlayMode__Enum_Continue = 1,
  SpriteAnimatorAction_PlayMode__Enum_Pause = 2,
};
struct SpriteAnimatorAction_PlayMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpriteAnimatorAction_PlayMode__Enum value;
};
struct SpriteAnimatorAction__Fields {
  struct ActionMethod__Fields _;
  enum SpriteAnimatorAction_PlayMode__Enum Command;
  struct SpriteAnimator * Animator;
};
struct SpriteAnimatorAction {
  struct SpriteAnimatorAction__Class *klass;
  struct MonitorData *monitor;
  struct SpriteAnimatorAction__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteAnimatorAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteAnimatorAction__VTable vtable;
};

struct StartExitingAction__Fields {
  struct ActionMethod__Fields _;
};
struct StartExitingAction {
  struct StartExitingAction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StartExitingAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StartExitingAction__VTable vtable;
};

struct StopCharacterAnimation__Fields {
  struct ActionMethod__Fields _;
};
struct StopCharacterAnimation {
  struct StopCharacterAnimation__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StopCharacterAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StopCharacterAnimation__VTable vtable;
};

struct UnhighlightMapStoneAction__Fields {
  struct ActionMethod__Fields _;
  struct MapStone * MapStone;
};
struct UnhighlightMapStoneAction {
  struct UnhighlightMapStoneAction__Class *klass;
  struct MonitorData *monitor;
  struct UnhighlightMapStoneAction__Fields fields;
};
enum MapStone_State__Enum : int32_t {
  MapStone_State__Enum_Normal = 0,
  MapStone_State__Enum_Highlighted = 1,
  MapStone_State__Enum_Activated = 2,
};
struct MapStone_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MapStone_State__Enum value;
};
struct MapStone__Fields {
  struct SaveSerialize__Fields _;
  struct Transform * OriTarget;
  struct Color OriHoverColor;
  float Radius;
  struct Transform * m_transform;
  struct GameWorldArea * WorldArea;
  struct Texture2D * HintTexture;
  struct MessageProvider * HintMessage;
  struct MessageBox * m_hint;
  struct ActionMethod * OriEnterAction;
  struct ActionMethod * OriExitAction;
  struct ActionMethod * OnOpenedAction;
  struct ActionMethod * OnFailAction;
  float OriDuration;
  enum MapStone_State__Enum CurrentState;
};
struct MapStone {
  struct MapStone__Class *klass;
  struct MonitorData *monitor;
  struct MapStone__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapStone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnhighlightMapStoneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnhighlightMapStoneAction__VTable vtable;
};

struct UnhighlightOriInterestTrigger__Fields {
  struct ActionMethod__Fields _;
  struct OriInterestTriggerB * OriInterestTrigger;
};
struct UnhighlightOriInterestTrigger {
  struct UnhighlightOriInterestTrigger__Class *klass;
  struct MonitorData *monitor;
  struct UnhighlightOriInterestTrigger__Fields fields;
};
enum OriInterestTriggerB_State__Enum : int32_t {
  OriInterestTriggerB_State__Enum_Normal = 0,
  OriInterestTriggerB_State__Enum_Highlighted = 1,
  OriInterestTriggerB_State__Enum_Activated = 2,
};
struct OriInterestTriggerB_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OriInterestTriggerB_State__Enum value;
};
struct OriInterestTriggerB__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * HighlightAction;
  struct ActionMethod * UnhighlightAction;
  struct ActionMethod * ActivateAction;
  struct ActionMethod * AlreadyActivatedAction;
  struct Condition_1 * Condition;
  bool RunOnce;
  bool IsSlot;
  struct MessageProvider * HintMessage;
  float OriDuration;
  struct Transform * OriTarget;
  struct MessageBox * m_hint;
  struct Transform * m_transform;
  bool m_activated;
  bool m_isHighlighted;
  bool UseButtonPress;
  enum OriInterestTriggerB_State__Enum CurrentState;
};
struct OriInterestTriggerB {
  struct OriInterestTriggerB__Class *klass;
  struct MonitorData *monitor;
  struct OriInterestTriggerB__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriInterestTriggerB__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnhighlightOriInterestTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnhighlightOriInterestTrigger__VTable vtable;
};

struct UnsuspendSceneAction__Fields {
  struct ActionMethod__Fields _;
  struct SceneMetaData * m_sceneMetaData;
};
struct UnsuspendSceneAction {
  struct UnsuspendSceneAction__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnsuspendSceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnsuspendSceneAction__VTable vtable;
};

struct LegacyTrigger__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * ActionToRun;
  struct MoonTimeline * TimelineToRun;
  bool StopOnRestoreCheckpoint;
  bool Active;
  struct Condition_1 * Condition;
  float Delay;
  bool DontTriggerWhileRunning;
  bool TriggerOnce;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  float Expiration;
  bool CreateCheckpointBeforeTriggering;
  struct Action * OnTriggerActivatedCallback;
  struct Action_1_LegacyTrigger_ * OnTriggerActivatedCallbackTrigger;
  float m_activeTime;
  int32_t _AmountOfTimesActivated_k__BackingField;
};
struct LegacyTrigger {
  struct LegacyTrigger__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTrigger__Fields fields;
};
struct CarryablePickedUpTrigger__Fields {
  struct LegacyTrigger__Fields _;
};
struct CarryablePickedUpTrigger {
  struct CarryablePickedUpTrigger__Class *klass;
  struct MonitorData *monitor;
  struct CarryablePickedUpTrigger__Fields fields;
};
struct Action_1_LegacyTrigger___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_LegacyTrigger_ {
  struct Action_1_LegacyTrigger___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_LegacyTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CarryablePickedUpTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CarryablePickedUpTrigger__VTable vtable;
};

struct ColliderEnterExitTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct EnterExitActionsExecutor * EnterExitActionsExecutor;
  struct ListOfCollidedObjects * m_listOfCollidedObjects;
  struct GameObjectFilter * GameObjectFilter;
  bool HasEntered;
};
struct ColliderEnterExitTrigger {
  struct ColliderEnterExitTrigger__Class *klass;
  struct MonitorData *monitor;
  struct ColliderEnterExitTrigger__Fields fields;
};
struct EnterExitActionsExecutor__Fields {
  struct MonoBehaviour__Fields _;
  struct PerformingAction * EnterAction;
  struct PerformingAction * ExitAction;
  bool WaitForEnterActionToFinish;
  bool WaitForExitActionToFinish;
  struct Action * OnExitActionFinished;
  bool m_shouldPerformEnter;
  bool m_shouldPerformExit;
  bool m_exitActionWasPerforming;
};
struct EnterExitActionsExecutor {
  struct EnterExitActionsExecutor__Class *klass;
  struct MonitorData *monitor;
  struct EnterExitActionsExecutor__Fields fields;
};
struct ListOfCollidedObjects__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_GameObject_ * TriggerObjects;
  struct List_1_UnityEngine_GameObject_ * CollisionObjects;
  struct Predicate_1_UnityEngine_GameObject_ * m_removeFunc;
};
struct ListOfCollidedObjects {
  struct ListOfCollidedObjects__Class *klass;
  struct MonitorData *monitor;
  struct ListOfCollidedObjects__Fields fields;
};
struct Predicate_1_UnityEngine_GameObject___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_UnityEngine_GameObject_ {
  struct Predicate_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_UnityEngine_GameObject___Fields fields;
};
struct GameObjectFilter__Fields {
  struct MonoBehaviour__Fields _;
};
struct GameObjectFilter {
  struct GameObjectFilter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnterExitActionsExecutor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
};}