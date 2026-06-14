#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneItem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UnlockedCutscenes__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UnlockedCutscenes__Enum_DEFINED)
#define IL2CPP_STRUCT_CutsceneItem__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct MessageBox;
struct ActionMethod;
struct CutsceneItem__Fields {
    struct MonoBehaviour__Fields _;
    UnlockedCutscenes__Enum Cutscene;

    struct GameObject* LockTexture;
    struct MessageProvider* TitleMessageProvider;
    struct MessageBox* TitleLabel;
    struct ActionMethod* Pressed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CutsceneItem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_CutsceneItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneItem__Fields_FWDDECL)
#include <Modloader/app/structs/CutsceneItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
