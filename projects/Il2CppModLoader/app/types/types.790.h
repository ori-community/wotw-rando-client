namespace app {
struct SavePedestal__StaticFields {
    struct List_1_SavePedestal_ *All;
};

struct SavePedestal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SavePedestal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SavePedestal__VTable vtable;
};

struct MarkSavePedestalAsUsedAction__VTable {
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

struct MarkSavePedestalAsUsedAction__StaticFields {
};

struct MarkSavePedestalAsUsedAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarkSavePedestalAsUsedAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarkSavePedestalAsUsedAction__VTable vtable;
};

struct RunActionCondition__Fields {
    struct ActionMethod__Fields _;
    struct ActionMethod *Action;
    struct ActionMethod *ElseAction;
    struct Condition_1 *Condition;
    bool TriggerActionOnce;
    bool TriggerElseActionOnce;
    bool m_actionTriggered;
    bool m_elseActionTriggered;
};

struct RunActionCondition {
    struct RunActionCondition__Class *klass;
    MonitorData *monitor;
    struct RunActionCondition__Fields fields;
};

struct RunActionCondition__VTable {
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

struct RunActionCondition__StaticFields {
};

struct RunActionCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RunActionCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RunActionCondition__VTable vtable;
};

struct SaveGameAction__Fields {
    struct ActionMethod__Fields _;
};

struct SaveGameAction {
    struct SaveGameAction__Class *klass;
    MonitorData *monitor;
    struct SaveGameAction__Fields fields;
};

struct SaveGameAction__VTable {
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

struct SaveGameAction__StaticFields {
};

struct SaveGameAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SaveGameAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SaveGameAction__VTable vtable;
};

struct SeinMaxSpeedBasedOnDistance__Fields {
    struct MonoBehaviour__Fields _;
    bool m_registered;
    struct Transform *Target;
    struct AnimationCurve *SpeedOverDistance;
    float Distance;
};

struct SeinMaxSpeedBasedOnDistance {
    struct SeinMaxSpeedBasedOnDistance__Class *klass;
    MonitorData *monitor;
    struct SeinMaxSpeedBasedOnDistance__Fields fields;
};

struct SeinMaxSpeedBasedOnDistance__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinMaxSpeedBasedOnDistance__StaticFields {
};

struct SeinMaxSpeedBasedOnDistance__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinMaxSpeedBasedOnDistance__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinMaxSpeedBasedOnDistance__VTable vtable;
};

struct SelectedSaveValidCondition__Fields {
    struct Condition_1__Fields _;
};

struct SelectedSaveValidCondition {
    struct SelectedSaveValidCondition__Class *klass;
    MonitorData *monitor;
    struct SelectedSaveValidCondition__Fields fields;
};

struct SelectedSaveValidCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct SelectedSaveValidCondition__StaticFields {
};

struct SelectedSaveValidCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SelectedSaveValidCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SelectedSaveValidCondition__VTable vtable;
};

struct SetMusicAction__Fields {
    struct ActionMethod__Fields _;
    struct MusicZone *MusicZone;
    struct SoundProvider *Music;
};

struct SetMusicAction {
    struct SetMusicAction__Class *klass;
    MonitorData *monitor;
    struct SetMusicAction__Fields fields;
};

struct MusicZone__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider *SoundProvider;
    float FadeInDuration;
    float FadeOutDuration;
    int32_t Priority;
    bool ActivateOnEnable;
    struct Music_Layer *m_musicLayer;
    bool _Activated_k__BackingField;
    struct Rect Bounds;
};

struct MusicZone {
    struct MusicZone__Class *klass;
    MonitorData *monitor;
    struct MusicZone__Fields fields;
};

struct __declspec(align(8)) List_1_MusicZone___Fields {
    struct MusicZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_MusicZone_ {
    struct List_1_MusicZone___Class *klass;
    MonitorData *monitor;
    struct List_1_MusicZone___Fields fields;
};

struct MusicZone__Array {
    struct MusicZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MusicZone *vector[32];
};

struct IEnumerator_1_MusicZone_ {
    struct IEnumerator_1_MusicZone___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Music_Layer__Fields {
    int32_t Priority;
    struct List_1_Core_Music_Layer_Track_ *m_tracks;
};

struct Music_Layer {
    struct Music_Layer__Class *klass;
    MonitorData *monitor;
    struct Music_Layer__Fields fields;
};

struct __declspec(align(8)) List_1_Core_Music_Layer_Track___Fields {
    struct Music_Layer_Track__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Core_Music_Layer_Track_ {
    struct List_1_Core_Music_Layer_Track___Class *klass;
    MonitorData *monitor;
    struct List_1_Core_Music_Layer_Track___Fields fields;
};

struct __declspec(align(8)) Music_Layer_Track__Fields {
    struct SoundProvider *SoundProvider;
    struct Music_MusicTrack *m_musicTrack;
    float FadeInDuration;
    float FadeOutDuration;
};

struct Music_Layer_Track {
    struct Music_Layer_Track__Class *klass;
    MonitorData *monitor;
    struct Music_Layer_Track__Fields fields;
};

struct __declspec(align(8)) Music_MusicTrack__Fields {
    struct SoundDescriptor *SoundDescriptor;
    struct SoundPlayer *SoundPlayer;
    int32_t ReferenceCount;
    float FadeInDuration;
    float FadeOutDuration;
    float WWiseFadeOutDurection;
    struct Action *m_soundToNull;
};

struct Music_MusicTrack {
    struct Music_MusicTrack__Class *klass;
    MonitorData *monitor;
    struct Music_MusicTrack__Fields fields;
};

struct Music_Layer_Track__Array {
    struct Music_Layer_Track__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Music_Layer_Track *vector[32];
};

struct IEnumerator_1_Core_Music_Layer_Track_ {
    struct IEnumerator_1_Core_Music_Layer_Track___Class *klass;
    MonitorData *monitor;
};

struct MusicZone__Array__VTable {
};

struct MusicZone__Array__StaticFields {
};

struct MusicZone__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MusicZone__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MusicZone__Array__VTable vtable;
};

struct IEnumerator_1_MusicZone___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_MusicZone___StaticFields {
};

struct IEnumerator_1_MusicZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_MusicZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_MusicZone___VTable vtable;
};

struct List_1_MusicZone___VTable {
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

struct List_1_MusicZone___StaticFields {
    struct MusicZone__Array *_emptyArray;
};

struct List_1_MusicZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_MusicZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_MusicZone___VTable vtable;
};

struct Music_MusicTrack__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Music_MusicTrack__StaticFields {
};

struct Music_MusicTrack__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Music_MusicTrack__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Music_MusicTrack__VTable vtable;
};

struct Music_Layer_Track__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Music_Layer_Track__StaticFields {
};

struct Music_Layer_Track__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Music_Layer_Track__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Music_Layer_Track__VTable vtable;
};

struct Music_Layer_Track__Array__VTable {
};

struct Music_Layer_Track__Array__StaticFields {
};

struct Music_Layer_Track__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Music_Layer_Track__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Music_Layer_Track__Array__VTable vtable;
};

struct IEnumerator_1_Core_Music_Layer_Track___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Core_Music_Layer_Track___StaticFields {
};

struct IEnumerator_1_Core_Music_Layer_Track___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Core_Music_Layer_Track___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Core_Music_Layer_Track___VTable vtable;
};

struct List_1_Core_Music_Layer_Track___VTable {
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

struct List_1_Core_Music_Layer_Track___StaticFields {
    struct Music_Layer_Track__Array *_emptyArray;
};

struct List_1_Core_Music_Layer_Track___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Core_Music_Layer_Track___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Core_Music_Layer_Track___VTable vtable;
};

struct Music_Layer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Music_Layer__StaticFields {
};

struct Music_Layer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Music_Layer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Music_Layer__VTable vtable;
};

struct MusicZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Category;
};

struct MusicZone__StaticFields {
    struct List_1_MusicZone_ *All;
};

struct MusicZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MusicZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MusicZone__VTable vtable;
};

struct SetMusicAction__VTable {
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

struct SetMusicAction__StaticFields {
};

struct SetMusicAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetMusicAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetMusicAction__VTable vtable;
};

struct SetSeinColliderHeight__Fields {
    struct ActionMethod__Fields _;
    float Height;
};

struct SetSeinColliderHeight {
    struct SetSeinColliderHeight__Class *klass;
    MonitorData *monitor;
    struct SetSeinColliderHeight__Fields fields;
};

struct SetSeinColliderHeight__VTable {
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

struct SetSeinColliderHeight__StaticFields {
};

struct SetSeinColliderHeight__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetSeinColliderHeight__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetSeinColliderHeight__VTable vtable;
};

struct SetUberStateValueStoreAction__Fields {
    struct ActionMethod__Fields _;
};

struct SetUberStateValueStoreAction {
    struct SetUberStateValueStoreAction__Class *klass;
    MonitorData *monitor;
    struct SetUberStateValueStoreAction__Fields fields;
};

struct SetUberStateValueStoreAction__VTable {
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

struct SetUberStateValueStoreAction__StaticFields {
};

struct SetUberStateValueStoreAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetUberStateValueStoreAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetUberStateValueStoreAction__VTable vtable;
};

struct ShowAchievementsAction__Fields {
    struct ActionMethod__Fields _;
};

struct ShowAchievementsAction {
    struct ShowAchievementsAction__Class *klass;
    MonitorData *monitor;
    struct ShowAchievementsAction__Fields fields;
};

struct ShowAchievementsAction__VTable {
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

struct ShowAchievementsAction__StaticFields {
};

struct ShowAchievementsAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowAchievementsAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowAchievementsAction__VTable vtable;
};

struct ShowHelpAction__Fields {
    struct ActionMethod__Fields _;
};

struct ShowHelpAction {
    struct ShowHelpAction__Class *klass;
    MonitorData *monitor;
    struct ShowHelpAction__Fields fields;
};

struct ShowHelpAction__VTable {
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

struct ShowHelpAction__StaticFields {
};

struct ShowHelpAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowHelpAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowHelpAction__VTable vtable;
};

enum class ShowTextBoxes_VoiceType__Enum : int32_t {
    Ori = 0x00000000,
    SpiritTree = 0x00000001,
};

struct ShowTextBoxes_VoiceType__Enum__Boxed {
    struct ShowTextBoxes_VoiceType__Enum__Class *klass;
    MonitorData *monitor;
    ShowTextBoxes_VoiceType__Enum value;
    
};

struct ShowTextBoxes__Fields {
    struct PerformingAction__Fields _;
    struct TextBoxMessage *Message;
    struct Vector3 MessageBoxOffset;
    struct GameObject *textSetupGameObject;
    struct Vector3 Position;
    bool PositionAtPlayer;
    struct String__Array *Strings;
    struct TimedActionSequence *PauseSequence;
    ShowTextBoxes_VoiceType__Enum Voice;
    
};

struct ShowTextBoxes {
    struct ShowTextBoxes__Class *klass;
    MonitorData *monitor;
    struct ShowTextBoxes__Fields fields;
};

struct TimedActionSequence__Fields {
    struct ActionWithDuration__Fields _;
    struct List_1_TimedActionExecuter_ *Actions;
    float _SequenceCurrentTime_k__BackingField;
    bool _IsSequenceRunning_k__BackingField;
    int32_t _Pause_k__BackingField;
    bool ShowCreateActions;
};

struct TimedActionSequence {
    struct TimedActionSequence__Class *klass;
    MonitorData *monitor;
    struct TimedActionSequence__Fields fields;
};

struct __declspec(align(8)) List_1_TimedActionExecuter___Fields {
    struct TimedActionExecuter__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_TimedActionExecuter_ {
    struct List_1_TimedActionExecuter___Class *klass;
    MonitorData *monitor;
    struct List_1_TimedActionExecuter___Fields fields;
};

struct TimedActionExecuter__Array {
    struct TimedActionExecuter__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimedActionExecuter *vector[32];
};

struct IEnumerator_1_TimedActionExecuter_ {
    struct IEnumerator_1_TimedActionExecuter___Class *klass;
    MonitorData *monitor;
};

struct TimedActionExecuter__Array__VTable {
};

struct TimedActionExecuter__Array__StaticFields {
};

struct TimedActionExecuter__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimedActionExecuter__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimedActionExecuter__Array__VTable vtable;
};

struct IEnumerator_1_TimedActionExecuter___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_TimedActionExecuter___StaticFields {
};

struct IEnumerator_1_TimedActionExecuter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_TimedActionExecuter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_TimedActionExecuter___VTable vtable;
};

struct List_1_TimedActionExecuter___VTable {
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

struct List_1_TimedActionExecuter___StaticFields {
    struct TimedActionExecuter__Array *_emptyArray;
};

struct List_1_TimedActionExecuter___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_TimedActionExecuter___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_TimedActionExecuter___VTable vtable;
};

struct TimedActionSequence__VTable {
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData set_Duration;
    VirtualInvokeData get_Duration;
};

struct TimedActionSequence__StaticFields {
};

struct TimedActionSequence__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimedActionSequence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimedActionSequence__VTable vtable;
};

struct ShowTextBoxes_VoiceType__Enum__VTable {
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

struct ShowTextBoxes_VoiceType__Enum__StaticFields {
};

struct ShowTextBoxes_VoiceType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowTextBoxes_VoiceType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowTextBoxes_VoiceType__Enum__VTable vtable;
};

struct ShowTextBoxes__VTable {
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

struct ShowTextBoxes__StaticFields {
};

struct ShowTextBoxes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowTextBoxes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowTextBoxes__VTable vtable;
};

struct SpawnTextBoxes__Fields {
    struct PerformingAction__Fields _;
    struct GameObject *MessagePrefab;
    struct GameObject *m_messageInstance;
    struct Vector3 MessageBoxOffset;
    struct Vector3 Position;
    struct String__Array *Strings;
    struct TextBoxMessage *m_textBoxMessage;
};

struct SpawnTextBoxes {
    struct SpawnTextBoxes__Class *klass;
    MonitorData *monitor;
    struct SpawnTextBoxes__Fields fields;
};

struct SpawnTextBoxes__VTable {
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

struct SpawnTextBoxes__StaticFields {
};

}
