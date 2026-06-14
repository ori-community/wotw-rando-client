#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneState_DEFINED)
#include <Modloader/app/structs/CutsceneState__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneState__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneState_DEFINED
struct CutsceneState__Class;
struct CutsceneState {
    struct CutsceneState__Class* klass;
    MonitorData* monitor;
    struct CutsceneState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneState_FWDDECL)
#define IL2CPP_STRUCT_CutsceneState_FWDDECL
#include <Modloader/app/structs/CutsceneState__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneState_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneState_FWDDECL)
#include <Modloader/app/structs/CutsceneState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
