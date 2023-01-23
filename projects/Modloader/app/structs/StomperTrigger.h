#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperTrigger_DEFINED)
#include <Modloader/app/structs/StomperTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_StomperTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_StomperTrigger_DEFINED
struct StomperTrigger__Class;
struct StomperTrigger {
    struct StomperTrigger__Class* klass;
    MonitorData* monitor;
    struct StomperTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperTrigger_FWDDECL)
#define IL2CPP_STRUCT_StomperTrigger_FWDDECL
#include <Modloader/app/structs/StomperTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_StomperTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperTrigger_DEFINED) && !defined(IL2CPP_STRUCT_StomperTrigger_FWDDECL)
#include <Modloader/app/structs/StomperTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
