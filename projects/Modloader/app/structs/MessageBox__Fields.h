#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBox__Fields_DEFINED)
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Language__Enum_DEFINED) && defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED)
#define IL2CPP_STRUCT_MessageBox__Fields_DEFINED
struct MessageBoxLanguageStyles;
struct WriteOutTextBox;
struct MessageBoxVisibility;
struct TextBox;
struct Transform;
struct MessageProvider;
struct AnimationCurve;
struct Action;
struct GameObject;
struct SoundHost;
struct Action_1_MessageBox_HideAction_;
struct GameObject__Array;
struct BaseAnimator;
struct String;
struct MessageDescriptor__Array;
struct MessageBox__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBoxLanguageStyles* LanguageStyles;
    struct WriteOutTextBox* WriteOutTextBox;
    struct MessageBoxVisibility* Visibility;
    struct TextBox* TextBox;
    struct Transform* Avatar;
    int32_t MessageIndex;
    struct MessageProvider* MessageProvider;
    struct AnimationCurve* ScaleOverLetterCount;
    struct Action* OnFinishWriting;
    struct Action* OnTextRefreshed;
    struct GameObject* Button;
    struct GameObject* Separator;
    bool ShouldWriteOut;
    struct SoundHost* _SoundHost_k__BackingField;
    float m_remainingWaitTime;
    bool IsInteractive;
    bool LockInput;
    int32_t StartId;
    int32_t EndId;
    struct GameObject* m_avatar;
    struct Action_1_MessageBox_HideAction_* OnMessageScreenHide;
    struct Action* OnNextMessage;
    struct Action_1_MessageBox_HideAction_* OnMessageDestroyed;
    struct GameObject__Array* m_avatarPrefabs;
    struct BaseAnimator* NextMessageAnimator;
    bool FormatText;
    bool WrapText;
    bool ConvertToCapitals;
    bool m_forceLanguage;
    bool m_forceSystemLanguage;
    Language__Enum m_language;

    float FadeSpread;
    struct String* OverrideText;
    struct String* m_previousOverrideText;
    float OverrideSize;
    struct MessageDescriptor__Array* m_messageDescriptors;
    struct MessageDescriptor m_currentMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageBox__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/MessageBoxLanguageStyles.h>
#include <Modloader/app/structs/MessageBoxVisibility.h>
#include <Modloader/app/structs/MessageDescriptor__Array.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WriteOutTextBox.h>
#endif
#undef IL2CPP_STRUCT_MessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageBox__Fields_FWDDECL)
#include <Modloader/app/structs/MessageBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
