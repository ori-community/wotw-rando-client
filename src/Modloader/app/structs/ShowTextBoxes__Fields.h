#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowTextBoxes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowTextBoxes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextBoxes__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/ShowTextBoxes_VoiceType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ShowTextBoxes_VoiceType__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowTextBoxes__Fields_DEFINED
struct TextBoxMessage;
struct GameObject;
struct String__Array;
struct TimedActionSequence;
struct ShowTextBoxes__Fields {
    struct PerformingAction__Fields _;
    struct TextBoxMessage* Message;
    struct Vector3 MessageBoxOffset;
    struct GameObject* textSetupGameObject;
    struct Vector3 Position;
    bool PositionAtPlayer;
    struct String__Array* Strings;
    struct TimedActionSequence* PauseSequence;
    ShowTextBoxes_VoiceType__Enum Voice;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowTextBoxes__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowTextBoxes__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TextBoxMessage.h>
#include <Modloader/app/structs/TimedActionSequence.h>
#endif
#undef IL2CPP_STRUCT_ShowTextBoxes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextBoxes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowTextBoxes__Fields_FWDDECL)
#include <Modloader/app/structs/ShowTextBoxes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowTextBoxes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
