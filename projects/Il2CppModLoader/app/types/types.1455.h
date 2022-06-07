namespace app {
struct GUI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GUI__StaticFields {
    int32_t s_ScrollControlId;
    int32_t s_HotTextField;
    int32_t s_BoxHash;
    int32_t s_ButonHash;
    int32_t s_RepeatButtonHash;
    int32_t s_ToggleHash;
    int32_t s_ButtonGridHash;
    int32_t s_SliderHash;
    int32_t s_BeginGroupHash;
    int32_t s_ScrollviewHash;
    int32_t _scrollTroughSide_k__BackingField;
    struct DateTime _nextScrollStepTime_k__BackingField;
    struct GUISkin *s_Skin;
    struct GenericStack *s_ScrollViewStates;
};

struct GUI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GUI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GUI__VTable vtable;
};

struct AVProWindowsMediaMovie__Array {
    struct AVProWindowsMediaMovie__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AVProWindowsMediaMovie *vector[32];
};

struct AVProWindowsMediaMovie__Array__VTable {
};

struct AVProWindowsMediaMovie__Array__StaticFields {
};

struct AVProWindowsMediaMovie__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AVProWindowsMediaMovie__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AVProWindowsMediaMovie__Array__VTable vtable;
};

struct ShaderKeyword_AVProWindowsMediaManager {
    struct ShaderKeyword_AVProWindowsMediaManager__Class *klass;
    MonitorData *monitor;
};

struct ShaderKeyword_AVProWindowsMediaManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderKeyword_AVProWindowsMediaManager__StaticFields {
    int32_t SWAP_RED_BLUE_OFF;
    int32_t SWAP_RED_BLUE_ON;
    int32_t AVPRO_GAMMACORRECTION;
    int32_t AVPRO_GAMMACORRECTION_OFF;
};

struct ShaderKeyword_AVProWindowsMediaManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderKeyword_AVProWindowsMediaManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderKeyword_AVProWindowsMediaManager__VTable vtable;
};

struct Debug_1 {
    struct Debug_1__Class *klass;
    MonitorData *monitor;
};

struct Debug_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Debug_1__StaticFields {
    struct ILogger *s_Logger;
};

struct Debug_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Debug_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Debug_1__VTable vtable;
};

struct Path {
    struct Path__Class *klass;
    MonitorData *monitor;
};

struct Path__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Path__StaticFields {
    struct Char__Array *InvalidPathChars;
    uint16_t AltDirectorySeparatorChar;
    uint16_t DirectorySeparatorChar;
    uint16_t PathSeparator;
    struct String *DirectorySeparatorStr;
    uint16_t VolumeSeparatorChar;
    struct Char__Array *PathSeparatorChars;
    bool dirEqualsVolume;
    struct Char__Array *trimEndCharsWindows;
    struct Char__Array *trimEndCharsUnix;
};

struct Path__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Path__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Path__VTable vtable;
};

struct Marshal {
    struct Marshal__Class *klass;
    MonitorData *monitor;
};

struct Marshal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Marshal__StaticFields {
    int32_t SystemMaxDBCSCharSize;
    int32_t SystemDefaultCharSize;
};

struct Marshal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Marshal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Marshal__VTable vtable;
};

struct IComparable {
    struct IComparable__Class *klass;
    MonitorData *monitor;
};

struct IComparable__VTable {
    VirtualInvokeData CompareTo;
};

struct IComparable__StaticFields {
};

struct IComparable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IComparable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IComparable__VTable vtable;
};

struct AchievementUploader {
    struct AchievementUploader__Class *klass;
    MonitorData *monitor;
};

struct AchievementUploader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AchievementUploader__StaticFields {
    bool m_isGettingProgress;
    bool m_hasObtainedProgress;
    struct XblAchievement__Array *m_achievements;
};

struct AchievementUploader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AchievementUploader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AchievementUploader__VTable vtable;
};

struct UI {
    struct UI__Class *klass;
    MonitorData *monitor;
};

struct UI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UI__StaticFields {
    struct MessageControllerB *m_messageController;
    struct MessageControllerB *MessageController;
    struct FaderB *Fader;
    struct Vignette *Vignette;
    struct SeinUI *SeinUI;
    struct MenuScreenManager *m_sMenu;
};

struct UI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UI__VTable vtable;
};

struct UI_Hints {
    struct UI_Hints__Class *klass;
    MonitorData *monitor;
};

struct UI_Hints__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UI_Hints__StaticFields {
    struct MessageBox *m_currentHint;
    HintLayer__Enum m_currentLayer;
    
    bool m_timelineShowingHint;
    bool m_showHints;
};

struct UI_Hints__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UI_Hints__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UI_Hints__VTable vtable;
};

struct SuspensionManager {
    struct SuspensionManager__Class *klass;
    MonitorData *monitor;
};

struct SuspensionManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SuspensionManager__StaticFields {
    SuspendableMask__Enum GameplayMask;
    
    SuspendableMask__Enum AllMask;
    
    int32_t InvalidTicketID;
    struct List_1_Moon_SuspensionManager_SuspensionTicket_ *s_suspensionTickets;
    SuspendableMask__Enum s_currentSuspensionMask;
    
    int32_t s_idGenerator;
    struct Dictionary_2_Moon_ISuspendable_System_Int32_ *s_suspendables;
    struct HashSet_1_Moon_ISuspendable_ *s_suspendablesIterate;
    struct List_1_Moon_ISuspendable_ *s_suspenableList;
    struct List_1_Moon_ISuspendable_ *s_suspendRemove;
};

struct SuspensionManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SuspensionManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SuspensionManager__VTable vtable;
};

struct Checkpoint_Events {
    struct Checkpoint_Events__Class *klass;
    MonitorData *monitor;
};

struct Checkpoint_Events__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Checkpoint_Events__StaticFields {
    struct UberDelegate *OnPreRestore;
    struct UberDelegate *OnPostRestore;
    struct UberDelegate *OnScrollLockPassed;
    struct UberDelegate *OnPreCreate;
    struct UberDelegate *OnPostCreate;
};

struct Checkpoint_Events__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Checkpoint_Events__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Checkpoint_Events__VTable vtable;
};

struct UberShaderAPI {
    struct UberShaderAPI__Class *klass;
    MonitorData *monitor;
};

struct UberShaderAPI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberShaderAPI__StaticFields {
    struct MaterialPropertyBlock *block;
};

struct UberShaderAPI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderAPI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderAPI__VTable vtable;
};

struct Input_Cmd {
    struct Input_Cmd__Class *klass;
    MonitorData *monitor;
};

struct Input_Cmd__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Input_Cmd__StaticFields {
    struct Input_InputButtonProcessor *AnyStart;
    struct Input_InputButtonProcessor *Down;
    struct Input_InputButtonProcessor *Up;
    struct Input_InputButtonProcessor *Left;
    struct Input_InputButtonProcessor *Right;
    struct Input_InputButtonProcessor *LeftClick;
    struct Input_InputButtonProcessor *RightClick;
    struct Input_InputButtonProcessor *KeyboardOnly;
    struct Input_InputButtonProcessor *Unassigned;
    struct Input_InputButtonProcessor *MainMenuSaveCopy;
    struct Input_InputButtonProcessor *MainMenuSaveDelete;
    struct Input_InputButtonProcessor *Interact;
    struct Input_InputButtonProcessor *Jump;
    struct Input_InputButtonProcessor *Ability1;
    struct Input_InputButtonProcessor *Ability2;
    struct Input_InputButtonProcessor *Ability3;
    struct Input_InputButtonProcessor *Glide;
    struct Input_InputButtonProcessor *Grab;
    struct Input_InputButtonProcessor *Dash;
    struct Input_InputButtonProcessor *Burrow;
    struct Input_InputButtonProcessor *Bash;
    struct Input_InputButtonProcessor *Grapple;
    struct Input_InputButtonProcessor *DialogueAdvance;
    struct Input_InputButtonProcessor *DialogueOption1;
    struct Input_InputButtonProcessor *DialogueOption2;
    struct Input_InputButtonProcessor *DialogueOption3;
    struct Input_InputButtonProcessor *DialogueExit;
    struct Input_InputButtonProcessor *OpenMapsShardsInventory;
    struct Input_InputButtonProcessor *OpenInventory;
    struct Input_InputButtonProcessor *OpenWorldMap;
    struct Input_InputButtonProcessor *OpenAreaMap;
    struct Input_InputButtonProcessor *OpenShards;
    struct Input_InputButtonProcessor *OpenWeaponWheel;
    struct Input_InputButtonProcessor *OpenPauseScreen;
    struct Input_InputButtonProcessor *OpenLiveSignIn;
    struct Input_InputButtonProcessor *MapZoomIn;
    struct Input_InputButtonProcessor *MapZoomOut;
    struct Input_InputButtonProcessor *MenuSelect;
    struct Input_InputButtonProcessor *MenuBack;
    struct Input_InputButtonProcessor *MenuClose;
    struct Input_InputButtonProcessor *MenuDown;
    struct Input_InputButtonProcessor *MenuUp;
    struct Input_InputButtonProcessor *MenuLeft;
    struct Input_InputButtonProcessor *MenuRight;
    struct Input_InputButtonProcessor *MenuPageLeft;
    struct Input_InputButtonProcessor *MenuPageRight;
    struct Input_InputButtonProcessor *LeaderboardCycleFilter;
    struct Input_InputButtonProcessor *MapFilter;
    struct Input_InputButtonProcessor *MapDetails;
    struct Input_InputButtonProcessor *MapFocusOri;
    struct Input_InputButtonProcessor *MapFocusObjective;
    struct Input_InputButtonProcessor *LiveSignIn;
};

struct Input_Cmd__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Input_Cmd__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Input_Cmd__VTable vtable;
};

struct Targets {
    struct Targets__Class *klass;
    MonitorData *monitor;
};

struct Targets__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Targets__StaticFields {
    struct List_1_Game_Targets_AttackableIterator_ *m_attackableIterators;
    struct List_1_IAttackable_ *m_attackables;
    struct Dictionary_2_System_Guid_List_1_IAttackable_ *AttackablesConsumerDictionary;
    struct List_1_Game_Targets_ConsumerList_ *AttackablesConsumerList;
};

struct Targets__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Targets__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Targets__VTable vtable;
};

struct PhysicsHelper {
    struct PhysicsHelper__Class *klass;
    MonitorData *monitor;
};

struct PhysicsHelper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsHelper__StaticFields {
    struct RaycastHit__Array *s_smallRaycastCache;
};

struct PhysicsHelper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsHelper__VTable vtable;
};

struct UI_Cameras {
    struct UI_Cameras__Class *klass;
    MonitorData *monitor;
};

struct UI_Cameras__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UI_Cameras__StaticFields {
    struct CameraSystem *System;
    struct GameplayCamera *Current;
    struct CameraManager *Manager;
};

struct UI_Cameras__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UI_Cameras__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UI_Cameras__VTable vtable;
};

struct MoonPhysics {
    struct MoonPhysics__Class *klass;
    MonitorData *monitor;
};

struct MoonPhysics__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonPhysics__StaticFields {
    struct MoonPhysics_AscendingDistanceComparer *ascendDistance;
};

struct MoonPhysics__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonPhysics__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonPhysics__VTable vtable;
};

struct Input_Dbg {
    struct Input_Dbg__Class *klass;
    MonitorData *monitor;
};

struct Input_Dbg__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Input_Dbg__StaticFields {
    struct Input_InputButtonProcessor *Down;
    struct Input_InputButtonProcessor *Up;
    struct Input_InputButtonProcessor *Left;
    struct Input_InputButtonProcessor *Right;
    struct Input_InputButtonProcessor *LeftShoulder;
    struct Input_InputButtonProcessor *RightShoulder;
    struct Input_InputButtonProcessor *LeftTrigger;
    struct Input_InputButtonProcessor *RightTrigger;
    struct Input_InputButtonProcessor *Start;
    struct Input_InputButtonProcessor *AnyStart;
    struct Input_InputButtonProcessor *Select;
    struct Input_InputButtonProcessor *LeftStick;
    struct Input_InputButtonProcessor *RightStick;
    struct Input_InputButtonProcessor *ActionButtonA;
    struct Input_InputButtonProcessor *ActionButtonB;
    struct Input_InputButtonProcessor *ActionButtonX;
    struct Input_InputButtonProcessor *ActionButtonY;
    struct Input_InputButtonProcessor *Cancel;
};

struct Input_Dbg__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Input_Dbg__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Input_Dbg__VTable vtable;
};

struct StackTraceUtility {
    struct StackTraceUtility__Class *klass;
    MonitorData *monitor;
};

struct StackTraceUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StackTraceUtility__StaticFields {
    struct String *projectFolder;
};

struct StackTraceUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackTraceUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackTraceUtility__VTable vtable;
};

struct RemotingServices {
    struct RemotingServices__Class *klass;
    MonitorData *monitor;
};

struct RemotingServices__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemotingServices__StaticFields {
    struct Hashtable *uri_hash;
    struct BinaryFormatter *_serializationFormatter;
    struct BinaryFormatter *_deserializationFormatter;
    struct String *app_id;
    struct Object *app_id_lock;
    int32_t next_id;
    struct MethodInfo_1 *FieldSetterMethod;
    struct MethodInfo_1 *FieldGetterMethod;
};

struct RemotingServices__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemotingServices__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemotingServices__VTable vtable;
};

struct ChannelServices {
    struct ChannelServices__Class *klass;
    MonitorData *monitor;
};

struct ChannelServices__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ChannelServices__StaticFields {
    struct ArrayList *registeredChannels;
    struct ArrayList *delayedClientChannels;
    struct CrossContextChannel *_crossContextSink;
    struct String *CrossContextUrl;
    struct IList *oldStartModeTypes;
};

struct ChannelServices__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChannelServices__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChannelServices__VTable vtable;
};

struct RemotingConfiguration {
    struct RemotingConfiguration__Class *klass;
    MonitorData *monitor;
};

struct RemotingConfiguration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RemotingConfiguration__StaticFields {
    struct String *applicationID;
    struct String *applicationName;
    struct String *processGuid;
    bool defaultConfigRead;
    bool defaultDelayedConfigRead;
    struct String *_errorMode;
    struct Hashtable *wellKnownClientEntries;
    struct Hashtable *activatedClientEntries;
    struct Hashtable *wellKnownServiceEntries;
    struct Hashtable *activatedServiceEntries;
    struct Hashtable *channelTemplates;
    struct Hashtable *clientProviderTemplates;
    struct Hashtable *serverProviderTemplates;
};

struct RemotingConfiguration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemotingConfiguration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemotingConfiguration__VTable vtable;
};

struct ActivationServices {
    struct ActivationServices__Class *klass;
    MonitorData *monitor;
};

struct ActivationServices__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ActivationServices__StaticFields {
    struct IActivator *_constructionActivator;
};

struct ActivationServices__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivationServices__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivationServices__VTable vtable;
};

struct _Activator {
    struct _Activator__Class *klass;
    MonitorData *monitor;
};

struct _Activator__VTable {
};

struct _Activator__StaticFields {
};

struct _Activator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _Activator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _Activator__VTable vtable;
};

struct ActiveTurtleShells {
    struct ActiveTurtleShells__Class *klass;
    MonitorData *monitor;
};

struct ActiveTurtleShells__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ActiveTurtleShells__StaticFields {
    struct List_1_TurtleShell_ *Shells;
};

struct ActiveTurtleShells__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActiveTurtleShells__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActiveTurtleShells__VTable vtable;
};

struct TypeExtensions {
    struct TypeExtensions__Class *klass;
    MonitorData *monitor;
};

struct TypeExtensions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TypeExtensions__StaticFields {
    struct CacheDict_2_System_Reflection_MethodBase_System_Reflection_ParameterInfo_ *s_paramInfoCache;
};

struct TypeExtensions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeExtensions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeExtensions__VTable vtable;
};

struct P3D_Brush_AdditiveBlend {
    struct P3D_Brush_AdditiveBlend__Class *klass;
    MonitorData *monitor;
};

struct P3D_Brush_AdditiveBlend__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct P3D_Brush_AdditiveBlend__StaticFields {
    struct Material *s_material;
    int32_t s_textureParamId;
    int32_t s_screenCoordTransformParamId;
    int32_t s_brushColorParamId;
    int32_t s_mainTexParamId;
    int32_t s_splatRectParamId;
    int32_t s_brushOpacityParamId;
    struct Texture2D *s_mainTex;
};

struct P3D_Brush_AdditiveBlend__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct P3D_Brush_AdditiveBlend__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct P3D_Brush_AdditiveBlend__VTable vtable;
};

struct Math {
    struct Math__Class *klass;
    MonitorData *monitor;
};

struct Math__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Math__StaticFields {
    double doubleRoundLimit;
    struct Double__Array *roundPower10Double;
};

struct Math__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Math__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Math__VTable vtable;
};

struct Adler {
    struct Adler__Class *klass;
    MonitorData *monitor;
};

struct Adler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Adler__StaticFields {
    uint32_t BASE;
    int32_t NMAX;
};

struct Adler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Adler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Adler__VTable vtable;
};

struct Optimization {
    struct Optimization__Class *klass;
    MonitorData *monitor;
};

struct Optimization__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Optimization__StaticFields {
    struct CameraFrustumOptimizer *CameraFrustumOptimizer;
};

struct Optimization__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Optimization__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Optimization__VTable vtable;
};

struct OutputFolder_1 {
    struct OutputFolder_1__Class *klass;
    MonitorData *monitor;
};

struct OutputFolder_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OutputFolder_1__StaticFields {
    struct String *m_appData;
    struct String *m_playerDataFolderPath;
    struct String *m_playerTrialDataFolderPath;
    struct String *m_outputPathNonHost;
    struct String *EditorOriFolderName;
    struct String *OriTrialFolderName;
    struct String *OriFolderName;
    struct String *m_path;
};

struct OutputFolder_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutputFolder_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutputFolder_1__VTable vtable;
};

struct FindObjectsWrapper {
    struct FindObjectsWrapper__Class *klass;
    MonitorData *monitor;
};

struct FindObjectsWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FindObjectsWrapper__StaticFields {
    struct Dictionary_2_System_String_UnityEngine_GameObject_ *m_findObjectsCache;
};

struct FindObjectsWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FindObjectsWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FindObjectsWrapper__VTable vtable;
};

struct HierarchyTesterSettings {
    struct HierarchyTesterSettings__Class *klass;
    MonitorData *monitor;
};

struct HierarchyTesterSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HierarchyTesterSettings__StaticFields {
    int32_t BaselineTestsCount;
    int32_t BaselineRepeats;
    float BaselineProcessTime;
    float BaselineTimeout;
    int32_t ANIMATION_SAMPLES;
    float ProcessTime;
    double MeasureThreshold;
    int32_t StartSceneIndex;
    bool SkipLeaves;
};

struct HierarchyTesterSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HierarchyTesterSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HierarchyTesterSettings__VTable vtable;
};

}
