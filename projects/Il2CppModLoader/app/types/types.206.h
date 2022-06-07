namespace app {
struct CameraPlayable {
    struct PlayableHandle m_Handle;
};

struct CameraPlayable__Boxed {
    struct CameraPlayable__Class *klass;
    MonitorData *monitor;
    struct CameraPlayable fields;
};

struct PlayableHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct PlayableHandle__StaticFields {
    struct PlayableHandle m_Null;
};

struct PlayableHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableHandle__VTable vtable;
};

struct CameraPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct CameraPlayable__StaticFields {
};

struct CameraPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraPlayable__VTable vtable;
};

struct MaterialEffectPlayable {
    struct PlayableHandle m_Handle;
};

struct MaterialEffectPlayable__Boxed {
    struct MaterialEffectPlayable__Class *klass;
    MonitorData *monitor;
    struct MaterialEffectPlayable fields;
};

struct MaterialEffectPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct MaterialEffectPlayable__StaticFields {
};

struct MaterialEffectPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaterialEffectPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaterialEffectPlayable__VTable vtable;
};

struct Playable {
    struct PlayableHandle m_Handle;
};

struct Playable__Boxed {
    struct Playable__Class *klass;
    MonitorData *monitor;
    struct Playable fields;
};

struct Playable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct Playable__StaticFields {
    struct Playable m_NullPlayable;
};

struct Playable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Playable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Playable__VTable vtable;
};

struct PlayableAsset__Fields {
    struct ScriptableObject__Fields _;
};

struct PlayableAsset {
    struct PlayableAsset__Class *klass;
    MonitorData *monitor;
    struct PlayableAsset__Fields fields;
};

struct IEnumerable_1_UnityEngine_Playables_PlayableBinding_ {
    struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___StaticFields {
};

struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_UnityEngine_Playables_PlayableBinding___VTable vtable;
};

struct PlayableAsset__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData get_duration;
    VirtualInvokeData get_outputs;
};

struct PlayableAsset__StaticFields {
};

struct PlayableAsset__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableAsset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableAsset__VTable vtable;
};

struct PlayableGraph {
    void *m_Handle;
    uint32_t m_Version;
};

struct PlayableGraph__Boxed {
    struct PlayableGraph__Class *klass;
    MonitorData *monitor;
    struct PlayableGraph fields;
};

struct PlayableGraph__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayableGraph__StaticFields {
};

struct PlayableGraph__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableGraph__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableGraph__VTable vtable;
};

struct PlayableBehaviour {
    struct PlayableBehaviour__Class *klass;
    MonitorData *monitor;
};

enum class FrameData_Flags__Enum : int32_t {
    Evaluate = 0x00000001,
    SeekOccured = 0x00000002,
    Loop = 0x00000004,
    Hold = 0x00000008,
    EffectivePlayStateDelayed = 0x00000010,
    EffectivePlayStatePlaying = 0x00000020,
};

struct FrameData_Flags__Enum__Boxed {
    struct FrameData_Flags__Enum__Class *klass;
    MonitorData *monitor;
    FrameData_Flags__Enum value;
    
};

struct PlayableOutputHandle {
    void *m_Handle;
    uint32_t m_Version;
};

struct PlayableOutputHandle__Boxed {
    struct PlayableOutputHandle__Class *klass;
    MonitorData *monitor;
    struct PlayableOutputHandle fields;
};

struct PlayableOutput {
    struct PlayableOutputHandle m_Handle;
};

struct PlayableOutput__Boxed {
    struct PlayableOutput__Class *klass;
    MonitorData *monitor;
    struct PlayableOutput fields;
};

struct FrameData {
    uint64_t m_FrameID;
    double m_DeltaTime;
    float m_Weight;
    float m_EffectiveWeight;
    double m_EffectiveParentDelay;
    float m_EffectiveParentSpeed;
    float m_EffectiveSpeed;
    FrameData_Flags__Enum m_Flags;
    
    struct PlayableOutput m_Output;
};

struct FrameData__Boxed {
    struct FrameData__Class *klass;
    MonitorData *monitor;
    struct FrameData fields;
};

struct FrameData_Flags__Enum__VTable {
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

struct FrameData_Flags__Enum__StaticFields {
};

struct FrameData_Flags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameData_Flags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameData_Flags__Enum__VTable vtable;
};

struct PlayableOutputHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct PlayableOutputHandle__StaticFields {
    struct PlayableOutputHandle m_Null;
};

struct PlayableOutputHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableOutputHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableOutputHandle__VTable vtable;
};

struct PlayableOutput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct PlayableOutput__StaticFields {
    struct PlayableOutput m_NullPlayableOutput;
};

struct PlayableOutput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableOutput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableOutput__VTable vtable;
};

struct FrameData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FrameData__StaticFields {
};

struct FrameData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameData__VTable vtable;
};

struct PlayableBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnGraphStart;
    VirtualInvokeData OnGraphStop;
    VirtualInvokeData OnPlayableCreate;
    VirtualInvokeData OnPlayableDestroy;
    VirtualInvokeData OnBehaviourPlay;
    VirtualInvokeData OnBehaviourPause;
    VirtualInvokeData PrepareFrame;
    VirtualInvokeData ProcessFrame;
    VirtualInvokeData Clone;
    VirtualInvokeData OnGraphStart_1;
    VirtualInvokeData OnGraphStop_1;
    VirtualInvokeData OnPlayableCreate_1;
    VirtualInvokeData OnPlayableDestroy_1;
    VirtualInvokeData OnBehaviourPlay_1;
    VirtualInvokeData OnBehaviourPause_1;
    VirtualInvokeData PrepareFrame_1;
    VirtualInvokeData ProcessFrame_1;
    VirtualInvokeData Clone_1;
};

struct PlayableBehaviour__StaticFields {
};

struct PlayableBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableBehaviour__VTable vtable;
};

struct PlayableBinding_CreateOutputMethod__Fields {
    struct MulticastDelegate__Fields _;
};

struct PlayableBinding_CreateOutputMethod {
    struct PlayableBinding_CreateOutputMethod__Class *klass;
    MonitorData *monitor;
    struct PlayableBinding_CreateOutputMethod__Fields fields;
};

struct PlayableBinding_CreateOutputMethod__VTable {
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

struct PlayableBinding_CreateOutputMethod__StaticFields {
};

struct PlayableBinding_CreateOutputMethod__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableBinding_CreateOutputMethod__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableBinding_CreateOutputMethod__VTable vtable;
};

enum class DirectorUpdateMode__Enum : int32_t {
    DSPClock = 0x00000000,
    GameTime = 0x00000001,
    UnscaledGameTime = 0x00000002,
    Manual = 0x00000003,
};

struct DirectorUpdateMode__Enum__Boxed {
    struct DirectorUpdateMode__Enum__Class *klass;
    MonitorData *monitor;
    DirectorUpdateMode__Enum value;
    
};

struct DirectorUpdateMode__Enum__VTable {
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

struct DirectorUpdateMode__Enum__StaticFields {
};

struct DirectorUpdateMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DirectorUpdateMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DirectorUpdateMode__Enum__VTable vtable;
};

struct PlayableGraph___VTable {
};

struct PlayableGraph___StaticFields {
};

struct PlayableGraph___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableGraph___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableGraph___VTable vtable;
};

struct PlayableOutputHandle___VTable {
};

struct PlayableOutputHandle___StaticFields {
};

struct PlayableOutputHandle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableOutputHandle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableOutputHandle___VTable vtable;
};

struct PlayableHandle___VTable {
};

struct PlayableHandle___StaticFields {
};

struct PlayableHandle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableHandle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableHandle___VTable vtable;
};

struct ScriptPlayableOutput {
    struct PlayableOutputHandle m_Handle;
};

struct ScriptPlayableOutput__Boxed {
    struct ScriptPlayableOutput__Class *klass;
    MonitorData *monitor;
    struct ScriptPlayableOutput fields;
};

struct ScriptPlayableOutput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
};

struct ScriptPlayableOutput__StaticFields {
};

struct ScriptPlayableOutput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScriptPlayableOutput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScriptPlayableOutput__VTable vtable;
};

struct TextureMixerPlayable {
    struct PlayableHandle m_Handle;
};

struct TextureMixerPlayable__Boxed {
    struct TextureMixerPlayable__Class *klass;
    MonitorData *monitor;
    struct TextureMixerPlayable fields;
};

struct TextureMixerPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct TextureMixerPlayable__StaticFields {
};

struct TextureMixerPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextureMixerPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextureMixerPlayable__VTable vtable;
};

struct TexturePlayableOutput {
    struct PlayableOutputHandle m_Handle;
};

struct TexturePlayableOutput__Boxed {
    struct TexturePlayableOutput__Class *klass;
    MonitorData *monitor;
    struct TexturePlayableOutput fields;
};

struct TexturePlayableOutput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
};

struct TexturePlayableOutput__StaticFields {
};

struct TexturePlayableOutput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TexturePlayableOutput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TexturePlayableOutput__VTable vtable;
};

struct __declspec(align(8)) DefaultValueAttribute_1__Fields {
    struct Object *DefaultValue;
};

struct DefaultValueAttribute_1 {
    struct DefaultValueAttribute_1__Class *klass;
    MonitorData *monitor;
    struct DefaultValueAttribute_1__Fields fields;
};

struct DefaultValueAttribute_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct DefaultValueAttribute_1__StaticFields {
};

struct DefaultValueAttribute_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultValueAttribute_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultValueAttribute_1__VTable vtable;
};

struct ExcludeFromDocsAttribute {
    struct ExcludeFromDocsAttribute__Class *klass;
    MonitorData *monitor;
};

struct ExcludeFromDocsAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct ExcludeFromDocsAttribute__StaticFields {
};

struct ExcludeFromDocsAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExcludeFromDocsAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExcludeFromDocsAttribute__VTable vtable;
};

struct __declspec(align(8)) Logger__Fields {
    struct ILogHandler *_logHandler_k__BackingField;
    bool _logEnabled_k__BackingField;
    LogType__Enum _filterLogType_k__BackingField;
    
};

struct Logger {
    struct Logger__Class *klass;
    MonitorData *monitor;
    struct Logger__Fields fields;
};

struct ILogHandler {
    struct ILogHandler__Class *klass;
    MonitorData *monitor;
};

struct ILogHandler__VTable {
    VirtualInvokeData LogFormat;
    VirtualInvokeData LogException;
};

struct ILogHandler__StaticFields {
};

struct ILogHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILogHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILogHandler__VTable vtable;
};

struct Logger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_logHandler;
    VirtualInvokeData set_logHandler;
    VirtualInvokeData Log;
    VirtualInvokeData Log_1;
    VirtualInvokeData LogFormat;
    VirtualInvokeData LogFormat_1;
    VirtualInvokeData LogException;
    VirtualInvokeData get_logEnabled;
    VirtualInvokeData set_logEnabled;
    VirtualInvokeData get_filterLogType;
    VirtualInvokeData set_filterLogType;
    VirtualInvokeData IsLogTypeAllowed;
};

struct Logger__StaticFields {
};

struct Logger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Logger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Logger__VTable vtable;
};

struct __declspec(align(8)) MessageEventArgs__Fields {
    int32_t playerId;
    struct Byte__Array *data;
};

struct MessageEventArgs {
    struct MessageEventArgs__Class *klass;
    MonitorData *monitor;
    struct MessageEventArgs__Fields fields;
};

struct MessageEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MessageEventArgs__StaticFields {
};

struct MessageEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MessageEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MessageEventArgs__VTable vtable;
};

struct PlayerConnection__Fields {
    struct ScriptableObject__Fields _;
    struct PlayerEditorConnectionEvents *m_PlayerEditorConnectionEvents;
    struct List_1_System_Int32_ *m_connectedPlayers;
    bool m_IsInitilized;
};

struct PlayerConnection {
    struct PlayerConnection__Class *klass;
    MonitorData *monitor;
    struct PlayerConnection__Fields fields;
};

struct IPlayerEditorConnectionNative {
    struct IPlayerEditorConnectionNative__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlayerEditorConnectionEvents__Fields {
    struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_ *messageTypeSubscribers;
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent *connectionEvent;
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent *disconnectionEvent;
};

struct PlayerEditorConnectionEvents {
    struct PlayerEditorConnectionEvents__Class *klass;
    MonitorData *monitor;
    struct PlayerEditorConnectionEvents__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers___Fields {
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_ {
    struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers___Fields fields;
};

struct __declspec(align(8)) PlayerEditorConnectionEvents_MessageTypeSubscribers__Fields {
    struct String *m_messageTypeId;
    int32_t subscriberCount;
    struct PlayerEditorConnectionEvents_MessageEvent *messageCallback;
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers {
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Class *klass;
    MonitorData *monitor;
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Fields fields;
};

struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Fields {
    struct UnityEventBase__Fields _;
    struct Object__Array *m_InvokeArray;
};

struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ {
    struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Class *klass;
    MonitorData *monitor;
    struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Fields fields;
};

struct PlayerEditorConnectionEvents_MessageEvent__Fields {
    struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Fields _;
};

struct PlayerEditorConnectionEvents_MessageEvent {
    struct PlayerEditorConnectionEvents_MessageEvent__Class *klass;
    MonitorData *monitor;
    struct PlayerEditorConnectionEvents_MessageEvent__Fields fields;
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Array {
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers *vector[32];
};

struct IEnumerator_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_ {
    struct IEnumerator_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers___Class *klass;
    MonitorData *monitor;
};

struct UnityEvent_1_System_Int32___Fields {
    struct UnityEventBase__Fields _;
    struct Object__Array *m_InvokeArray;
};

struct UnityEvent_1_System_Int32_ {
    struct UnityEvent_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct UnityEvent_1_System_Int32___Fields fields;
};

struct PlayerEditorConnectionEvents_ConnectionChangeEvent__Fields {
    struct UnityEvent_1_System_Int32___Fields _;
};

struct PlayerEditorConnectionEvents_ConnectionChangeEvent {
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent__Class *klass;
    MonitorData *monitor;
    struct PlayerEditorConnectionEvents_ConnectionChangeEvent__Fields fields;
};

struct UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ {
    struct UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Class *klass;
    MonitorData *monitor;
    struct UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Fields fields;
};

struct UnityAction_1_System_Int32___Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityAction_1_System_Int32_ {
    struct UnityAction_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct UnityAction_1_System_Int32___Fields fields;
};

struct IPlayerEditorConnectionNative__VTable {
    VirtualInvokeData Initialize;
    VirtualInvokeData DisconnectAll;
    VirtualInvokeData SendMessage;
    VirtualInvokeData TrySendMessage;
    VirtualInvokeData Poll;
    VirtualInvokeData RegisterInternal;
    VirtualInvokeData UnregisterInternal;
    VirtualInvokeData IsConnected;
};

struct IPlayerEditorConnectionNative__StaticFields {
};

struct IPlayerEditorConnectionNative__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPlayerEditorConnectionNative__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPlayerEditorConnectionNative__VTable vtable;
};

struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
    VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
    VirtualInvokeData FindMethod_Impl;
    VirtualInvokeData GetDelegate;
};

struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___StaticFields {
};

struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___VTable vtable;
};

struct PlayerEditorConnectionEvents_MessageEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
    VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
    VirtualInvokeData FindMethod_Impl;
    VirtualInvokeData GetDelegate;
};

struct PlayerEditorConnectionEvents_MessageEvent__StaticFields {
};

struct PlayerEditorConnectionEvents_MessageEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerEditorConnectionEvents_MessageEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerEditorConnectionEvents_MessageEvent__VTable vtable;
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__StaticFields {
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerEditorConnectionEvents_MessageTypeSubscribers__VTable vtable;
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__VTable {
};

struct PlayerEditorConnectionEvents_MessageTypeSubscribers__Array__StaticFields {
};

}
