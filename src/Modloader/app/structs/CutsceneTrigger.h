#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTrigger_DEFINED)
#include <Modloader/app/structs/CutsceneTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneTrigger_DEFINED
struct CutsceneTrigger__Class;
struct CutsceneTrigger {
    struct CutsceneTrigger__Class* klass;
    MonitorData* monitor;
    struct CutsceneTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneTrigger_FWDDECL)
#define IL2CPP_STRUCT_CutsceneTrigger_FWDDECL
#include <Modloader/app/structs/CutsceneTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneTrigger_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneTrigger_FWDDECL)
#include <Modloader/app/structs/CutsceneTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
