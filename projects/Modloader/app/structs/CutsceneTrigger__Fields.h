#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneTrigger__Fields_DEFINED
struct CutsceneController;
struct CutsceneState;
struct CutsceneTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct CutsceneController* Cutscene;
    struct CutsceneState* State;
    bool m_wasTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_CutsceneTrigger__Fields_FWDDECL
#include <Modloader/app/structs/CutsceneController.h>
#include <Modloader/app/structs/CutsceneState.h>
#endif
#undef IL2CPP_STRUCT_CutsceneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/CutsceneTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
