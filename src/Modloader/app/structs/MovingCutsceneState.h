#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingCutsceneState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingCutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingCutsceneState_DEFINED)
#include <Modloader/app/structs/MovingCutsceneState__Fields.h>
#if defined(IL2CPP_STRUCT_MovingCutsceneState__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingCutsceneState_DEFINED
struct MovingCutsceneState__Class;
struct MovingCutsceneState {
    struct MovingCutsceneState__Class* klass;
    MonitorData* monitor;
    struct MovingCutsceneState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingCutsceneState_FWDDECL)
#define IL2CPP_STRUCT_MovingCutsceneState_FWDDECL
#include <Modloader/app/structs/MovingCutsceneState__Class.h>
#endif
#undef IL2CPP_STRUCT_MovingCutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingCutsceneState_DEFINED) && !defined(IL2CPP_STRUCT_MovingCutsceneState_FWDDECL)
#include <Modloader/app/structs/MovingCutsceneState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingCutsceneState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
