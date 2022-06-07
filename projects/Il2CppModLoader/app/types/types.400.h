namespace app {
struct EmotionType__Enum__Boxed {
    struct EmotionType__Enum__Class *klass;
    MonitorData *monitor;
    EmotionType__Enum value;
    
};

struct MessageDescriptor {
    struct String *Message;
    EmotionType__Enum Emotion;
    
    struct SoundProvider *Sound;
    struct Event_1 *WWiseEvent;
};

struct MessageDescriptor__Boxed {
    struct MessageDescriptor__Class *klass;
    MonitorData *monitor;
    struct MessageDescriptor fields;
};

struct MessageBox__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBoxLanguageStyles *LanguageStyles;
    struct WriteOutTextBox *WriteOutTextBox;
    struct MessageBoxVisibility *Visibility;
    struct TextBox *TextBox;
    struct Transform *Avatar;
    int32_t MessageIndex;
    struct MessageProvider *MessageProvider;
    struct AnimationCurve *ScaleOverLetterCount;
    struct Action *OnFinishWriting;
    struct Action *OnTextRefreshed;
    struct GameObject *Button;
    struct GameObject *Separator;
    bool ShouldWriteOut;
    struct SoundHost *_SoundHost_k__BackingField;
    float m_remainingWaitTime;
    bool IsInteractive;
    bool LockInput;
    int32_t StartId;
    int32_t EndId;
    struct GameObject *m_avatar;
    struct Action_1_MessageBox_HideAction_ *OnMessageScreenHide;
    struct Action *OnNextMessage;
    struct Action_1_MessageBox_HideAction_ *OnMessageDestroyed;
    struct GameObject__Array *m_avatarPrefabs;
    struct BaseAnimator *NextMessageAnimator;
    bool FormatText;
    bool WrapText;
    bool ConvertToCapitals;
    bool m_forceLanguage;
    bool m_forceSystemLanguage;
    Language__Enum m_language;
    
    float FadeSpread;
    struct String *OverrideText;
    struct String *m_previousOverrideText;
    float OverrideSize;
    struct MessageDescriptor__Array *m_messageDescriptors;
    struct MessageDescriptor m_currentMessage;
};

struct MessageBox {
    struct MessageBox__Class *klass;
    MonitorData *monitor;
    struct MessageBox__Fields fields;
};

struct MessageBoxLanguageStyles__Fields {
    struct ScriptableObject__Fields _;
    struct TextStyleCollection *English;
    struct TextStyleCollection *German;
    struct TextStyleCollection *Spanish;
    struct TextStyleCollection *French;
    struct TextStyleCollection *Italian;
    struct TextStyleCollection *Portuguese;
    struct TextStyleCollection *Russian;
    int32_t Space;
    struct TextStyleCollection *Japanese;
    struct TextStyleCollection *Chinese;
    struct TextStyleCollection *TraditionalChinese;
    struct TextStyleCollection *Czech;
    struct TextStyleCollection *Danish;
    struct TextStyleCollection *Dutch;
    struct TextStyleCollection *Finnish;
    struct TextStyleCollection *Hungarian;
    struct TextStyleCollection *Korean;
    struct TextStyleCollection *Norwegian;
    struct TextStyleCollection *Polish;
    struct TextStyleCollection *SpanishSpain;
    struct TextStyleCollection *Swedish;
    struct TextStyleCollection *Turkish;
};

struct MessageBoxLanguageStyles {
    struct MessageBoxLanguageStyles__Class *klass;
    MonitorData *monitor;
    struct MessageBoxLanguageStyles__Fields fields;
};

struct TextStyleCollection__Fields {
    struct ScriptableObject__Fields _;
    struct TextStyle__Array *styles;
    int32_t rendererCount;
};

struct TextStyleCollection {
    struct TextStyleCollection__Class *klass;
    MonitorData *monitor;
    struct TextStyleCollection__Fields fields;
};

struct __declspec(align(8)) TextStyle__Fields {
    struct String *name;
    struct Color32 color;
    struct BitmapFont *font;
    struct TextRenderer *renderer;
    float letterSpacing;
    float fontScale;
    bool absoluteFontScale;
    float lineScale;
    bool hasColor;
    bool hasLetterSpacing;
    bool hasFontScale;
    bool hasLineScale;
    int32_t rendererId;
};

struct TextStyle {
    struct TextStyle__Class *klass;
    MonitorData *monitor;
    struct TextStyle__Fields fields;
};

struct BitmapFont__Fields {
    struct ScriptableObject__Fields _;
    struct BitmapFontChar__Array *asciiChars;
    struct BitmapFontChar__Array *otherChars;
    float pixelLineHeight;
    float baseline;
    float baselineToBottom;
    float spaceAdvance;
    bool hasImportedKerningData;
    float importOffsetX;
    float importOffsetY;
    float importOffsetAdvance;
    float importLineHeightAdjustment;
    struct BitmapFontChar *missing;
};

struct BitmapFont {
    struct BitmapFont__Class *klass;
    MonitorData *monitor;
    struct BitmapFont__Fields fields;
};

struct __declspec(align(8)) BitmapFontChar__Fields {
    int32_t id;
    struct String *emoji;
    float uMin;
    float uMax;
    float vMin;
    float vMax;
    float xOffset;
    float yOffset;
    float width;
    float height;
    float advance;
    struct Int32__Array *kerningIds;
    struct Single__Array *kernings;
};

struct BitmapFontChar {
    struct BitmapFontChar__Class *klass;
    MonitorData *monitor;
    struct BitmapFontChar__Fields fields;
};

struct BitmapFontChar__Array {
    struct BitmapFontChar__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BitmapFontChar *vector[32];
};

struct TextRenderer__Fields {
    struct MonoBehaviour__Fields _;
    int32_t renderedCharCount;
};

struct TextRenderer {
    struct TextRenderer__Class *klass;
    MonitorData *monitor;
    struct TextRenderer__Fields fields;
};

enum class CharType__Enum : int32_t {
    Style = 0x00000000,
    Visible = 0x00000001,
    Whitespace = 0x00000002,
};

struct CharType__Enum__Boxed {
    struct CharType__Enum__Class *klass;
    MonitorData *monitor;
    CharType__Enum value;
    
};

struct CharMetaData {
    uint16_t id;
    int32_t unstyledIndex;
    CharType__Enum type;
    
    struct Color32 color;
    float scale;
    struct Vector2 positionInBox;
    struct BitmapFont *font;
    struct TextRenderer *renderer;
};

struct CharMetaData__Boxed {
    struct CharMetaData__Class *klass;
    MonitorData *monitor;
    struct CharMetaData fields;
};

struct TextStyle__Array {
    struct TextStyle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TextStyle *vector[32];
};

struct BaseAnimator__Fields {
    struct Suspendable__Fields _;
    struct GameObject *ExternalDriverGameObject;
    struct IAnimatorDriver *m_externalDriver;
    struct AnimatorDriver *m_animatorDriver;
    float m_extendedDuration;
    bool SampleOnStart;
    bool _IsInitialized_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool m_isInScene;
    bool _SampledByParent_k__BackingField;
    struct BaseAnimator *_ParentAnimator_k__BackingField;
    float _CurrentTime_k__BackingField;
    struct Action *OnStopEvent;
    float timelineSpeed;
    bool m_isRegistered;
    float TimeOffset;
    float AnimatorSpeed;
    bool PlayAtStart;
    bool m_isSuspended;
};

struct BaseAnimator {
    struct BaseAnimator__Class *klass;
    MonitorData *monitor;
    struct BaseAnimator__Fields fields;
};

struct WriteOutTextBox__Fields {
    struct BaseAnimator__Fields _;
    struct MessageBox *MessageBox;
    float LettersPerSecond;
    float m_lastLetterIndex;
};

struct WriteOutTextBox {
    struct WriteOutTextBox__Class *klass;
    MonitorData *monitor;
    struct WriteOutTextBox__Fields fields;
};

struct IAnimatorDriver {
    struct IAnimatorDriver__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) AnimatorDriver__Fields {
    bool PlayOnStart;
    bool m_isPlaying;
    int32_t m_loopNumber;
    struct Action_1_Boolean_ *OnPlayStateChanged;
    struct BaseAnimator *Animator;
    float Speed;
    float m_time;
    bool m_sampledThisFrame;
};

struct AnimatorDriver {
    struct AnimatorDriver__Class *klass;
    MonitorData *monitor;
    struct AnimatorDriver__Fields fields;
};

struct CameraShake__Fields {
    struct BaseAnimator__Fields _;
    bool ShakeOnlyIfVisibleToCamera;
    bool AffectedByDistance;
    float ShakeObjectSize;
    float ImpactRadius;
    float Strength;
    struct CameraShakeAsset *Shake;
    float m_time;
};

struct CameraShake {
    struct CameraShake__Class *klass;
    MonitorData *monitor;
    struct CameraShake__Fields fields;
};

struct __declspec(align(8)) AllContainer_1_CameraShake___Fields {
    struct List_1_CameraShake_ *m_objects;
};

struct AllContainer_1_CameraShake_ {
    struct AllContainer_1_CameraShake___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_CameraShake___Fields fields;
};

struct __declspec(align(8)) List_1_CameraShake___Fields {
    struct CameraShake__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraShake_ {
    struct List_1_CameraShake___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraShake___Fields fields;
};

struct CameraShake__Array {
    struct CameraShake__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraShake *vector[32];
};

struct IEnumerator_1_CameraShake_ {
    struct IEnumerator_1_CameraShake___Class *klass;
    MonitorData *monitor;
};

struct CameraShakeAsset__Fields {
    struct ScriptableObject__Fields _;
    struct AnimationCurve *PositionX;
    struct AnimationCurve *PositionY;
    struct AnimationCurve *PositionZ;
    struct AnimationCurve *RotationX;
    struct AnimationCurve *RotationY;
    struct AnimationCurve *RotationZ;
    float m_duration;
};

struct CameraShakeAsset {
    struct CameraShakeAsset__Class *klass;
    MonitorData *monitor;
    struct CameraShakeAsset__Fields fields;
};

struct MessageBoxVisibility__Fields {
    struct MonoBehaviour__Fields _;
    float TransitionInDuration;
    float TransitionOutDuration;
    float WaitDuration;
    struct AnimationCurve *ScaleIn;
    struct AnimationCurve *OpacityIn;
    struct AnimationCurve *ScaleOut;
    struct AnimationCurve *OpacityOut;
    bool DestroyOnHide;
    struct UberDelegate *OnHide;
    bool IsHint;
    float m_time;
    float m_previousTime;
    float m_timeSpeed;
    float m_delayTime;
    struct Vector3 m_originalScale;
    struct Renderer__Array *m_renderers;
    struct Single__Array *m_rendererAlphas;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct MessageBoxVisibility {
    struct MessageBoxVisibility__Class *klass;
    MonitorData *monitor;
    struct MessageBoxVisibility__Fields fields;
};

struct __declspec(align(8)) UberDelegate__Fields {
    struct List_1_System_Action_ *m_registers;
    struct List_1_System_Action_ *m_registersToDelete;
    bool m_isIterating;
};

struct UberDelegate {
    struct UberDelegate__Class *klass;
    MonitorData *monitor;
    struct UberDelegate__Fields fields;
};

enum class AlignmentMode__Enum : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
    Justify = 0x00000003,
};

struct AlignmentMode__Enum__Boxed {
    struct AlignmentMode__Enum__Class *klass;
    MonitorData *monitor;
    AlignmentMode__Enum value;
    
};

enum class HorizontalAnchorMode__Enum : int32_t {
    Left = 0x00000000,
    Center = 0x00000001,
    Right = 0x00000002,
};

struct HorizontalAnchorMode__Enum__Boxed {
    struct HorizontalAnchorMode__Enum__Class *klass;
    MonitorData *monitor;
    HorizontalAnchorMode__Enum value;
    
};

enum class VerticalAnchorMode__Enum : int32_t {
    Top = 0x00000000,
    Middle = 0x00000001,
    Bottom = 0x00000002,
};

struct VerticalAnchorMode__Enum__Boxed {
    struct VerticalAnchorMode__Enum__Class *klass;
    MonitorData *monitor;
    VerticalAnchorMode__Enum value;
    
};

struct LineDescent {
    float baseline;
    float baselineToBottom;
};

struct LineDescent__Boxed {
    struct LineDescent__Class *klass;
    MonitorData *monitor;
    struct LineDescent fields;
};

struct AppliedTextStyle {
    struct Color32 color;
    struct BitmapFont *font;
    struct TextRenderer *renderer;
    float size;
    float letterSpacing;
    float lineHeight;
    struct LineDescent lineDescent;
};

struct AppliedTextStyle__Boxed {
    struct AppliedTextStyle__Class *klass;
    MonitorData *monitor;
    struct AppliedTextStyle fields;
};

struct TextBox__Fields {
    struct MonoBehaviour__Fields _;
    AlignmentMode__Enum alignment;
    
    HorizontalAnchorMode__Enum horizontalAnchor;
    
    VerticalAnchorMode__Enum verticalAnchor;
    
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
    struct TextBox *overflowBox;
    struct TextStyleCollection *styleCollection;
    float _TextFadeTime_k__BackingField;
    bool WrapText;
    bool m_initializeAfterEnabling;
    int32_t textLength;
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_ *styleStack;
    struct AppliedTextStyle currentStyle;
    struct StringBuilder *styleStatementBuffer;
    struct List_1_CatlikeCoding_TextBox_LineDescent_ *wordCache;
    struct List_1_CatlikeCoding_TextBox_TextBoxLine_ *lines;
    struct CharMetaData__Array *charMetaData;
    struct TextRenderer__Array *textRenderers;
    struct Renderer__Array *renderers;
    struct TextBox *overflowFromBox;
    bool overflowed;
    float size;
    struct Color color;
    float LineSpacing;
};

struct TextBox {
    struct TextBox__Class *klass;
    MonitorData *monitor;
    struct TextBox__Fields fields;
};

struct __declspec(align(8)) Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___Fields {
    struct AppliedTextStyle__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_ {
    struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___Class *klass;
    MonitorData *monitor;
    struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___Fields fields;
};

struct AppliedTextStyle__Array {
    struct AppliedTextStyle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AppliedTextStyle vector[32];
};

struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle_ {
    struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CatlikeCoding_TextBox_LineDescent___Fields {
    struct LineDescent__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CatlikeCoding_TextBox_LineDescent_ {
    struct List_1_CatlikeCoding_TextBox_LineDescent___Class *klass;
    MonitorData *monitor;
    struct List_1_CatlikeCoding_TextBox_LineDescent___Fields fields;
};

struct LineDescent__Array {
    struct LineDescent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LineDescent vector[32];
};

struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent_ {
    struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CatlikeCoding_TextBox_TextBoxLine___Fields {
    struct TextBoxLine__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CatlikeCoding_TextBox_TextBoxLine_ {
    struct List_1_CatlikeCoding_TextBox_TextBoxLine___Class *klass;
    MonitorData *monitor;
    struct List_1_CatlikeCoding_TextBox_TextBoxLine___Fields fields;
};

struct TextBoxLine {
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    float top;
    float bottom;
    float baseline;
    float horizontalStart;
    float horizontalEnd;
};

struct TextBoxLine__Boxed {
    struct TextBoxLine__Class *klass;
    MonitorData *monitor;
    struct TextBoxLine fields;
};

struct TextBoxLine__Array {
    struct TextBoxLine__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TextBoxLine vector[32];
};

struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine_ {
    struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___Class *klass;
    MonitorData *monitor;
};

struct CharMetaData__Array {
    struct CharMetaData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CharMetaData vector[32];
};

struct TextRenderer__Array {
    struct TextRenderer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TextRenderer *vector[32];
};

struct MessageProvider__Fields {
    struct ScriptableObject__Fields _;
    struct String__Array *m_messages;
};

struct MessageProvider {
    struct MessageProvider__Class *klass;
    MonitorData *monitor;
    struct MessageProvider__Fields fields;
};

struct AchievementsTestMessageProvider__Fields {
    struct MessageProvider__Fields _;
    struct MessageDescriptor MessageDescriptor;
};

struct AchievementsTestMessageProvider {
    struct AchievementsTestMessageProvider__Class *klass;
    MonitorData *monitor;
    struct AchievementsTestMessageProvider__Fields fields;
};

struct SoundProvider__Fields {
    struct MonoBehaviour__Fields _;
    bool ShouldPauseEditorOnPlay;
    bool ShowMessageOnPlay;
    struct SoundDescriptor *Descriptor;
};

struct SoundProvider {
    struct SoundProvider__Class *klass;
    MonitorData *monitor;
    struct SoundProvider__Fields fields;
};

struct SoundProvider_CallbackFunction__Fields {
    struct MulticastDelegate__Fields _;
};

struct SoundProvider_CallbackFunction {
    struct SoundProvider_CallbackFunction__Class *klass;
    MonitorData *monitor;
    struct SoundProvider_CallbackFunction__Fields fields;
};

enum class MixerGroupType__Enum : int32_t {
    Unspecified = 0x00000000,
    AmbienceQuad = 0x00000064,
    AmbiencePoint = 0x0000006e,
    Foley = 0x000000c8,
    Footsteps = 0x000000c9,
    EnemiesAttack = 0x000000d2,
    EnemiesFoley = 0x000000d3,
    Attacks = 0x000000dc,
    Destruction = 0x000000e6,
    UI = 0x000000f0,
    SpiritTree = 0x000000fa,
    Sein = 0x00000118,
    Doors = 0x00000190,
    Cutscenes = 0x000001f4,
    Props = 0x00000258,
    Collectibles = 0x000002bc,
    MusicStingers = 0x0000032a,
    MusicLoops = 0x00000334,
};

struct MixerGroupType__Enum__Boxed {
    struct MixerGroupType__Enum__Class *klass;
    MonitorData *monitor;
    MixerGroupType__Enum value;
    
};

struct __declspec(align(8)) SoundDescriptor__Fields {
    bool IsWWiseEvent;
    struct Event_1 *Event;
    struct Switch_1 *Switch;
    struct Trigger *Trigger;
    struct AudioClip *AudioClip;
    struct SoundSize *SoundSize;
    struct LowPassFilterSettings *LowPassFilterSettings;
    struct SoundProvider *SoundProvider;
    float Volume;
    bool m_ownSoundSize;
    bool ShouldBePanned;
    float Pitch;
    bool m_ownLowPass;
    bool SyncToTime;
    MixerGroupType__Enum MixerGroup;
    
};

struct SoundDescriptor {
    struct SoundDescriptor__Class *klass;
    MonitorData *monitor;
    struct SoundDescriptor__Fields fields;
};

struct __declspec(align(8)) BaseType__Fields {
    struct Byte__Array *valueGuid;
    bool hashed;
    uint32_t hash;
    bool forceId;
    uint32_t forcedId;
    bool m_unexpectedlyInvalid;
};

struct BaseType {
    struct BaseType__Class *klass;
    MonitorData *monitor;
    struct BaseType__Fields fields;
};

struct Event_1__Fields {
    struct BaseType__Fields _;
    bool IgnoreHostLifetime;
};

struct Event_1 {
    struct Event_1__Class *klass;
    MonitorData *monitor;
    struct Event_1__Fields fields;
};

struct AcousticTexture__Fields {
    struct BaseType__Fields _;
};

struct AcousticTexture {
    struct AcousticTexture__Class *klass;
    MonitorData *monitor;
    struct AcousticTexture__Fields fields;
};

enum class WwiseObjectType__Enum : int32_t {
    None = 0x00000000,
    AuxBus = 0x00000001,
    Bus = 0x00000002,
    Event = 0x00000003,
    Folder = 0x00000004,
    PhysicalFolder = 0x00000005,
    Project = 0x00000006,
    Soundbank = 0x00000007,
    State = 0x00000008,
    StateGroup = 0x00000009,
    Switch = 0x0000000a,
    SwitchGroup = 0x0000000b,
    WorkUnit = 0x0000000c,
    GameParameter = 0x0000000d,
    Trigger = 0x0000000e,
    AcousticTexture = 0x0000000f,
};

struct WwiseObjectType__Enum__Boxed {
    struct WwiseObjectType__Enum__Class *klass;
    MonitorData *monitor;
    WwiseObjectType__Enum value;
    
};

struct BaseGroupType__Fields {
    struct BaseType__Fields _;
    struct Byte__Array *groupGuid;
    bool hashed2;
    uint32_t hash2;
    bool forceId2;
    uint32_t forcedId2;
};

struct BaseGroupType {
    struct BaseGroupType__Class *klass;
    MonitorData *monitor;
    struct BaseGroupType__Fields fields;
};

struct Switch_1__Fields {
    struct BaseGroupType__Fields _;
};

struct Switch_1 {
    struct Switch_1__Class *klass;
    MonitorData *monitor;
    struct Switch_1__Fields fields;
};

struct State__Fields {
    struct BaseGroupType__Fields _;
};

struct State {
    struct State__Class *klass;
    MonitorData *monitor;
    struct State__Fields fields;
};

struct Trigger__Fields {
    struct BaseType__Fields _;
};

struct Trigger {
    struct Trigger__Class *klass;
    MonitorData *monitor;
    struct Trigger__Fields fields;
};

struct __declspec(align(8)) SoundSize__Fields {
    float Radius;
    float FalloffMargin;
    struct AnimationCurve *FalloffCurve;
};

struct SoundSize {
    struct SoundSize__Class *klass;
    MonitorData *monitor;
    struct SoundSize__Fields fields;
};

struct __declspec(align(8)) LowPassFilterSettings__Fields {
    struct AnimationCurve *CutoffFrequency;
    struct AnimationCurve *LowpassResonance;
    bool Active;
};

struct LowPassFilterSettings {
    struct LowPassFilterSettings__Class *klass;
    MonitorData *monitor;
    struct LowPassFilterSettings__Fields fields;
};

struct CollisionBasedSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct List_1_CollisionMaterialSoundPair_ *SoundPairs;
    struct AnimationCurve *ForceToVolumeCurve;
};

struct CollisionBasedSoundProvider {
    struct CollisionBasedSoundProvider__Class *klass;
    MonitorData *monitor;
    struct CollisionBasedSoundProvider__Fields fields;
};

struct __declspec(align(8)) List_1_CollisionMaterialSoundPair___Fields {
    struct CollisionMaterialSoundPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CollisionMaterialSoundPair_ {
    struct List_1_CollisionMaterialSoundPair___Class *klass;
    MonitorData *monitor;
    struct List_1_CollisionMaterialSoundPair___Fields fields;
};

struct __declspec(align(8)) CollisionMaterialSoundPair__Fields {
    struct Vector2 Normal;
    float CosAngle;
    struct SoundProvider *IndependantSoundProvider;
};

struct CollisionMaterialSoundPair {
    struct CollisionMaterialSoundPair__Class *klass;
    MonitorData *monitor;
    struct CollisionMaterialSoundPair__Fields fields;
};

struct CollisionMaterialSoundPair__Array {
    struct CollisionMaterialSoundPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CollisionMaterialSoundPair *vector[32];
};

struct IEnumerator_1_CollisionMaterialSoundPair_ {
    struct IEnumerator_1_CollisionMaterialSoundPair___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_MessageDescriptor_ {
    struct IEnumerable_1_MessageDescriptor___Class *klass;
    MonitorData *monitor;
};

struct SoundHost__Fields {
    struct MonoBehaviour__Fields _;
    bool SyncPosition;
    struct Event_1__Array *StartEvents;
    struct Transform *m_transform;
    struct GameObject *m_gameObject;
    bool m_isListener;
    bool _IsActive_k__BackingField;
    int32_t _Version_k__BackingField;
    uint64_t m_id;
    struct AkAuxSendArray *AuxSendArray;
    struct List_1_System_UInt32_ *m_playingIDsToStopOnDisable;
    bool m_isRegistered;
    int32_t m_framesWithCount0;
};

struct SoundHost {
    struct SoundHost__Class *klass;
    MonitorData *monitor;
    struct SoundHost__Fields fields;
};

struct Event_1__Array {
    struct Event_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Event_1 *vector[32];
};

struct __declspec(align(8)) AkAuxSendArray__Fields {
    int32_t SIZE_OF_AKAUXSENDVALUE;
    void *m_Buffer;
    int32_t m_Count;
    struct Action_1_Int32_ *OnCountChanged;
};

struct AkAuxSendArray {
    struct AkAuxSendArray__Class *klass;
    MonitorData *monitor;
    struct AkAuxSendArray__Fields fields;
};

struct __declspec(align(8)) List_1_System_UInt32___Fields {
    struct UInt32__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_UInt32_ {
    struct List_1_System_UInt32___Class *klass;
    MonitorData *monitor;
    struct List_1_System_UInt32___Fields fields;
};

struct ISoundListener {
    struct ISoundListener__Class *klass;
    MonitorData *monitor;
};

struct Action_1_MessageBox_HideAction___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_MessageBox_HideAction_ {
    struct Action_1_MessageBox_HideAction___Class *klass;
    MonitorData *monitor;
    struct Action_1_MessageBox_HideAction___Fields fields;
};

enum class MessageBox_HideAction__Enum : int32_t {
    Normal = 0x00000000,
    Cancel = 0x00000001,
    Inventory = 0x00000002,
};

}
