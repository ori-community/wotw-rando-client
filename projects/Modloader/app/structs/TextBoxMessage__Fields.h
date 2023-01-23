#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxMessage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TextBoxMessage__Fields_DEFINED
struct CCText;
struct CCMoonTextColorer;
struct SoundSource;
struct GameObject;
struct List_1_LegacyAnimator_;
struct TextBoxMessage_States;
struct Queue_1_System_String_;
struct StateMachine_2;
struct String;
struct Action;
struct TextBoxMessage__Fields {
    struct MonoBehaviour__Fields _;
    struct CCText* Text;
    struct CCMoonTextColorer* TextColorer;
    struct SoundSource* MessageFinishedSound;
    struct SoundSource* OriSpeechShortSound;
    struct SoundSource* OriSpeechMedSound;
    struct SoundSource* OriSpeechLongSound;
    int32_t MaxTextLengthShortSpeech;
    int32_t MaxTextLengthMedSpeech;
    struct GameObject* Background;
    struct GameObject* Button;
    struct List_1_LegacyAnimator_* m_backgroundAnimators;
    struct List_1_LegacyAnimator_* m_buttonAnimators;
    struct TextBoxMessage_States* State;
    float LettersPerSecond;
    struct Queue_1_System_String_* Messages;
    float m_remainingWaitTime;
    struct StateMachine_2* Logic;
    struct String* CurrentMessage;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Action* OnCompleteEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextBoxMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextBoxMessage__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CCMoonTextColorer.h>
#include <Modloader/app/structs/CCText.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_LegacyAnimator_.h>
#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextBoxMessage_States.h>
#endif
#undef IL2CPP_STRUCT_TextBoxMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxMessage__Fields_FWDDECL)
#include <Modloader/app/structs/TextBoxMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
