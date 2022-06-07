namespace app {
struct CombinedMessageProvider_GetMessages_d_3__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CombinedMessageProvider_GetMessages_d_3__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CombinedMessageProvider_GetMessages_d_3__VTable vtable;
};

struct ForceLanguageTranslatedMessageProvider__Fields {
    struct TranslatedMessageProvider__Fields _;
    Language__Enum Language;
    
};

struct ForceLanguageTranslatedMessageProvider {
    struct ForceLanguageTranslatedMessageProvider__Class *klass;
    MonitorData *monitor;
    struct ForceLanguageTranslatedMessageProvider__Fields fields;
};

struct ForceLanguageTranslatedMessageProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetAllMessages;
    VirtualInvokeData GetMessages;
};

struct ForceLanguageTranslatedMessageProvider__StaticFields {
};

struct ForceLanguageTranslatedMessageProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ForceLanguageTranslatedMessageProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ForceLanguageTranslatedMessageProvider__VTable vtable;
};

struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem_ {
    struct List_1_TranslatedMessageProvider_MessageItem_ *list;
    int32_t index;
    int32_t version;
    struct TranslatedMessageProvider_MessageItem *current;
};

struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___Boxed {
    struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___Class *klass;
    MonitorData *monitor;
    struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem_ fields;
};

struct __declspec(align(8)) ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Fields {
    int32_t __1__state;
    struct MessageDescriptor __2__current;
    int32_t __l__initialThreadId;
    struct ForceLanguageTranslatedMessageProvider *__4__this;
    struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem_ __7__wrap1;
};

struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1 {
    struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class *klass;
    MonitorData *monitor;
    struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Fields fields;
};

struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Current;
    VirtualInvokeData Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___StaticFields {
};

struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_TranslatedMessageProvider_MessageItem___VTable vtable;
};

struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_MessageDescriptor__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_MessageDescriptor__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__StaticFields {
};

struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ForceLanguageTranslatedMessageProvider_GetMessages_d_1__VTable vtable;
};

struct InputBasedStringProvider__Fields {
    struct MessageProvider__Fields _;
    struct MessageProvider *Keyboard;
    struct MessageProvider *Xbox360Controller;
    struct MessageProvider *XboxOneController;
    struct MessageProvider *TouchDevice;
};

struct InputBasedStringProvider {
    struct InputBasedStringProvider__Class *klass;
    MonitorData *monitor;
    struct InputBasedStringProvider__Fields fields;
};

struct InputBasedStringProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetAllMessages;
    VirtualInvokeData GetMessages;
};

struct InputBasedStringProvider__StaticFields {
};

struct InputBasedStringProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InputBasedStringProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InputBasedStringProvider__VTable vtable;
};

enum class QuestMessageIcon_QuestMode__Enum : int32_t {
    NewQuest = 0x00000000,
    UpdatedQuest = 0x00000001,
    CompletedQuest = 0x00000002,
};

struct QuestMessageIcon_QuestMode__Enum__Boxed {
    struct QuestMessageIcon_QuestMode__Enum__Class *klass;
    MonitorData *monitor;
    QuestMessageIcon_QuestMode__Enum value;
    
};

struct QuestMessageIcon_QuestMode__Enum__VTable {
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

struct QuestMessageIcon_QuestMode__Enum__StaticFields {
};

struct QuestMessageIcon_QuestMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QuestMessageIcon_QuestMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QuestMessageIcon_QuestMode__Enum__VTable vtable;
};

struct MessageBox_c {
    struct MessageBox_c__Class *klass;
    MonitorData *monitor;
};

struct MessageBox_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MessageBox_c__StaticFields {
    struct MessageBox_c *__9;
    struct Action *__9__89_0;
    struct Action *__9__89_1;
    struct Action_1_MessageBox_HideAction_ *__9__89_2;
    struct Action *__9__89_3;
    struct Action_1_MessageBox_HideAction_ *__9__89_4;
};

struct MessageBox_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MessageBox_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MessageBox_c__VTable vtable;
};

struct OriSpeechSounds__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox *MessageBox;
    struct OriSpeechSounds_EmotionSounds *HappySoundSet;
    struct OriSpeechSounds_EmotionSounds *NeutralSoundSet;
    struct OriSpeechSounds_EmotionSounds *SadSoundSet;
    struct OriSpeechSounds_EmotionSounds *ScaredSoundSet;
    struct OriSpeechSounds_EmotionSounds *UrgentSoundSet;
    struct OriSpeechSounds_EmotionSounds *m_emotionSounds;
    int32_t MaxTextLengthShortSpeech;
    int32_t MaxTextLengthMedSpeech;
    struct SoundSource *ExtraSoundSource;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost *SoundHost;
};

struct OriSpeechSounds {
    struct OriSpeechSounds__Class *klass;
    MonitorData *monitor;
    struct OriSpeechSounds__Fields fields;
};

struct __declspec(align(8)) OriSpeechSounds_EmotionSounds__Fields {
    struct SoundSource *OriSpeechShortSound;
    struct SoundSource *OriSpeechMedSound;
    struct SoundSource *OriSpeechLongSound;
};

struct OriSpeechSounds_EmotionSounds {
    struct OriSpeechSounds_EmotionSounds__Class *klass;
    MonitorData *monitor;
    struct OriSpeechSounds_EmotionSounds__Fields fields;
};

struct OriSpeechSounds_EmotionSounds__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OriSpeechSounds_EmotionSounds__StaticFields {
};

struct OriSpeechSounds_EmotionSounds__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriSpeechSounds_EmotionSounds__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriSpeechSounds_EmotionSounds__VTable vtable;
};

struct OriSpeechSounds__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OriSpeechSounds__StaticFields {
};

struct OriSpeechSounds__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriSpeechSounds__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriSpeechSounds__VTable vtable;
};

struct PickupMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer *IconRenderer;
    struct MessageBox *PickupName;
    struct MessageBox *SubText;
    struct MessageBox *Description;
    struct MessageProvider *PowerupMessage;
    struct MessageProvider *QuestItemFoundMessage;
    struct MessageProvider *ShardFoundMessage;
};

struct PickupMessageIcon {
    struct PickupMessageIcon__Class *klass;
    MonitorData *monitor;
    struct PickupMessageIcon__Fields fields;
};

struct PickupMessageIcon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PickupMessageIcon__StaticFields {
};

struct PickupMessageIcon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PickupMessageIcon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PickupMessageIcon__VTable vtable;
};

struct QuestMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer *IconRenderer;
    struct MessageBox *SpellName;
    struct MessageBox *SubText;
    struct MessageBox *Description;
    struct GameObject *Checkmark;
    struct CompoundMessageProvider *NewQuest;
    struct CompoundMessageProvider *QuestUpdate;
    struct CompoundMessageProvider *QuestComplete;
    struct CompoundMessageProvider *NewSideQuest;
    struct CompoundMessageProvider *SideQuestUpdate;
    struct CompoundMessageProvider *SideQuestComplete;
    struct CompoundMessageProvider *NewRumor;
    struct CompoundMessageProvider *RumorUpdate;
    struct CompoundMessageProvider *RumorComplete;
    struct CompoundMessageProvider *CurrentProvider;
    struct MessageProvider *ClickToShowRumorProvider;
};

struct QuestMessageIcon {
    struct QuestMessageIcon__Class *klass;
    MonitorData *monitor;
    struct QuestMessageIcon__Fields fields;
};

struct CompoundMessageProvider__Fields {
    struct MessageProvider__Fields _;
    struct MessageProvider *Prefix;
    bool NewLine;
    struct MessageProvider *Suffix;
    bool HighlightPrefix;
    bool HighlightMessage;
    struct MessageProvider *m_messageProvider;
};

struct CompoundMessageProvider {
    struct CompoundMessageProvider__Class *klass;
    MonitorData *monitor;
    struct CompoundMessageProvider__Fields fields;
};

struct CompoundMessageProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetAllMessages;
    VirtualInvokeData GetMessages;
};

struct CompoundMessageProvider__StaticFields {
};

struct CompoundMessageProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompoundMessageProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompoundMessageProvider__VTable vtable;
};

struct QuestMessageIcon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct QuestMessageIcon__StaticFields {
};

struct QuestMessageIcon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QuestMessageIcon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QuestMessageIcon__VTable vtable;
};

struct RaceFinishIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer *IconRenderer;
    struct MessageBox *TimeStamp;
    struct MessageBox *TrialReward;
    int32_t rewardAmount;
};

struct RaceFinishIcon {
    struct RaceFinishIcon__Class *klass;
    MonitorData *monitor;
    struct RaceFinishIcon__Fields fields;
};

struct RaceFinishIcon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RaceFinishIcon__StaticFields {
};

struct RaceFinishIcon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceFinishIcon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceFinishIcon__VTable vtable;
};

struct ScaleToTextBox__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Background;
    struct TextBox *TextBox;
    struct Vector2 TopLeftPadding;
    struct Vector2 BottomRightPadding;
    float MinWidth;
    float MinHeight;
};

struct ScaleToTextBox {
    struct ScaleToTextBox__Class *klass;
    MonitorData *monitor;
    struct ScaleToTextBox__Fields fields;
};

struct ScaleToTextBox__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ScaleToTextBox__StaticFields {
};

struct ScaleToTextBox__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScaleToTextBox__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScaleToTextBox__VTable vtable;
};

struct ShowMessageBoxAction__Fields {
    struct ActionMethod__Fields _;
    struct MessageProvider *MessageProvider;
    struct GameObject *MessageBox;
};

struct ShowMessageBoxAction {
    struct ShowMessageBoxAction__Class *klass;
    MonitorData *monitor;
    struct ShowMessageBoxAction__Fields fields;
};

struct ShowMessageBoxAction__VTable {
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

struct ShowMessageBoxAction__StaticFields {
};

struct ShowMessageBoxAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowMessageBoxAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowMessageBoxAction__VTable vtable;
};

struct SpellMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer *IconRenderer;
    struct MessageBox *SpellName;
    struct MessageBox *SubText;
    struct MessageBox *Description;
    struct MessageProvider *PassiveType;
    struct MessageProvider *AbilityType;
};

struct SpellMessageIcon {
    struct SpellMessageIcon__Class *klass;
    MonitorData *monitor;
    struct SpellMessageIcon__Fields fields;
};

struct SpellMessageIcon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpellMessageIcon__StaticFields {
};

struct SpellMessageIcon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpellMessageIcon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpellMessageIcon__VTable vtable;
};

struct UIComponent__Fields {
    struct MonoBehaviour__Fields _;
    bool m_active;
};

struct UIComponent {
    struct UIComponent__Class *klass;
    MonitorData *monitor;
    struct UIComponent__Fields fields;
};

enum class UberShaderDrivenComponent_ViewMode__Enum : int32_t {
    OptimisedView = 0x00000000,
    AdvancedView = 0x00000001,
};

struct UberShaderDrivenComponent_ViewMode__Enum__Boxed {
    struct UberShaderDrivenComponent_ViewMode__Enum__Class *klass;
    MonitorData *monitor;
    UberShaderDrivenComponent_ViewMode__Enum value;
    
};

struct UberShaderDrivenComponent__Fields {
    struct UIComponent__Fields _;
    struct LegacyTimelineSequence *DisabledSequence;
    struct LegacyTimelineSequence *NormalSequence;
    UberShaderDrivenComponent_ViewMode__Enum SpriteViewMode;
    
};

struct UberShaderDrivenComponent {
    struct UberShaderDrivenComponent__Class *klass;
    MonitorData *monitor;
    struct UberShaderDrivenComponent__Fields fields;
};

enum class AlignmentMode__Enum_1 : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
    Justify = 0x00000003,
};

struct AlignmentMode__Enum_1__Boxed {
    struct AlignmentMode__Enum_1__Class *klass;
    MonitorData *monitor;
    AlignmentMode__Enum_1 value;
    
};

enum class HorizontalAnchorMode__Enum_1 : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
};

struct HorizontalAnchorMode__Enum_1__Boxed {
    struct HorizontalAnchorMode__Enum_1__Class *klass;
    MonitorData *monitor;
    HorizontalAnchorMode__Enum_1 value;
    
};

enum class VerticalAnchorMode__Enum_1 : int32_t {
    Top = 0x00000000,
    Middle = 0x00000001,
    Bottom = 0x00000002,
};

struct VerticalAnchorMode__Enum_1__Boxed {
    struct VerticalAnchorMode__Enum_1__Class *klass;
    MonitorData *monitor;
    VerticalAnchorMode__Enum_1 value;
    
};

struct Text_1__Fields {
    struct UberShaderDrivenComponent__Fields _;
    AlignmentMode__Enum_1 alignment;
    
    HorizontalAnchorMode__Enum_1 horizontalAnchor;
    
    VerticalAnchorMode__Enum_1 verticalAnchor;
    
    struct String *defaultText;
    float tabSize;
    float width;
    float paddingLeft;
    float paddingRight;
    float paddingTop;
    float paddingBottom;
    float boundsLeft;
    float boundsRight;
    float boundsTop;
    float boundsBottom;
    struct Vector2__Array *leftContour;
    struct Vector2__Array *rightContour;
    float maxHeight;
    struct Text_1 *overflowBox;
    struct TextStyleCollection *styleCollection;
    bool m_initializeAfterEnabling;
    int32_t textLength;
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_ *styleStack;
    struct AppliedTextStyle currentStyle;
    struct StringBuilder *styleStatementBuffer;
    struct List_1_CatlikeCoding_TextBox_LineDescent_ *wordCache;
    struct List_1_Moon_UI_TextBoxLine_ *lines;
    struct CharMetaData__Array *charMetaData;
    struct TextRenderer__Array *textRenderers;
    struct Text_1 *overflowFromBox;
    bool overflowed;
    float size;
    struct Color color;
    float LineSpacing;
};

struct Text_1 {
    struct Text_1__Class *klass;
    MonitorData *monitor;
    struct Text_1__Fields fields;
};

struct Image_1__Fields {
    struct UberShaderDrivenComponent__Fields _;
    bool PreserveAspect;
};

struct Image_1 {
    struct Image_1__Class *klass;
    MonitorData *monitor;
    struct Image_1__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_UI_TextBoxLine___Fields {
    struct TextBoxLine_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_UI_TextBoxLine_ {
    struct List_1_Moon_UI_TextBoxLine___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_UI_TextBoxLine___Fields fields;
};

struct TextBoxLine_1 {
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    float top;
    float bottom;
    float baseline;
    float horizontalStart;
    float horizontalEnd;
};

struct TextBoxLine_1__Boxed {
    struct TextBoxLine_1__Class *klass;
    MonitorData *monitor;
    struct TextBoxLine_1 fields;
};

struct TextBoxLine_1__Array {
    struct TextBoxLine_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TextBoxLine_1 vector[32];
};

struct IEnumerator_1_Moon_UI_TextBoxLine_ {
    struct IEnumerator_1_Moon_UI_TextBoxLine___Class *klass;
    MonitorData *monitor;
};

struct UIComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_RectTransform;
    VirtualInvokeData get_Active;
    VirtualInvokeData set_Active;
    VirtualInvokeData Awake;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
};

struct UIComponent__StaticFields {
};

struct UIComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UIComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UIComponent__VTable vtable;
};

struct UberShaderDrivenComponent_ViewMode__Enum__VTable {
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

struct UberShaderDrivenComponent_ViewMode__Enum__StaticFields {
};

struct UberShaderDrivenComponent_ViewMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderDrivenComponent_ViewMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderDrivenComponent_ViewMode__Enum__VTable vtable;
};

struct Image_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_RectTransform;
    VirtualInvokeData get_Active;
    VirtualInvokeData set_Active;
    VirtualInvokeData Awake;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Update;
    VirtualInvokeData RefreshSprite;
    VirtualInvokeData OnSpriteCreated;
    VirtualInvokeData get_Sprite;
};

struct Image_1__StaticFields {
};

struct Image_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Image_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Image_1__VTable vtable;
};

struct UberShaderDrivenComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_RectTransform;
    VirtualInvokeData get_Active;
    VirtualInvokeData set_Active;
    VirtualInvokeData Awake;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Update;
    VirtualInvokeData __unknown;
    VirtualInvokeData OnSpriteCreated;
    VirtualInvokeData get_Sprite;
};

struct UberShaderDrivenComponent__StaticFields {
};

struct UberShaderDrivenComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberShaderDrivenComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberShaderDrivenComponent__VTable vtable;
};

struct AlignmentMode__Enum_1__VTable {
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

struct AlignmentMode__Enum_1__StaticFields {
};

struct AlignmentMode__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AlignmentMode__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AlignmentMode__Enum_1__VTable vtable;
};

struct HorizontalAnchorMode__Enum_1__VTable {
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

struct HorizontalAnchorMode__Enum_1__StaticFields {
};

struct HorizontalAnchorMode__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HorizontalAnchorMode__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HorizontalAnchorMode__Enum_1__VTable vtable;
};

struct VerticalAnchorMode__Enum_1__VTable {
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

struct VerticalAnchorMode__Enum_1__StaticFields {
};

struct VerticalAnchorMode__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalAnchorMode__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalAnchorMode__Enum_1__VTable vtable;
};

struct TextBoxLine_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TextBoxLine_1__StaticFields {
};

struct TextBoxLine_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextBoxLine_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextBoxLine_1__VTable vtable;
};

struct TextBoxLine_1__Array__VTable {
};

struct TextBoxLine_1__Array__StaticFields {
};

}
