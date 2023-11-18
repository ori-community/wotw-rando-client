#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressACutsceneState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressACutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressACutsceneState_DEFINED)
#include <Modloader/app/structs/PressACutsceneState__Fields.h>
#if defined(IL2CPP_STRUCT_PressACutsceneState__Fields_DEFINED)
#define IL2CPP_STRUCT_PressACutsceneState_DEFINED
struct PressACutsceneState__Class;
struct PressACutsceneState {
    struct PressACutsceneState__Class* klass;
    MonitorData* monitor;
    struct PressACutsceneState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressACutsceneState_FWDDECL)
#define IL2CPP_STRUCT_PressACutsceneState_FWDDECL
#include <Modloader/app/structs/PressACutsceneState__Class.h>
#endif
#undef IL2CPP_STRUCT_PressACutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressACutsceneState_DEFINED) && !defined(IL2CPP_STRUCT_PressACutsceneState_FWDDECL)
#include <Modloader/app/structs/PressACutsceneState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressACutsceneState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
