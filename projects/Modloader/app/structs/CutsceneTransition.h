#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTransition_DEFINED)
#include <Modloader/app/structs/CutsceneTransition__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneTransition_DEFINED
struct CutsceneTransition__Class;
struct CutsceneTransition {
    struct CutsceneTransition__Class* klass;
    MonitorData* monitor;
    struct CutsceneTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneTransition_FWDDECL)
#define IL2CPP_STRUCT_CutsceneTransition_FWDDECL
#include <Modloader/app/structs/CutsceneTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTransition_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneTransition_FWDDECL)
#include <Modloader/app/structs/CutsceneTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
