#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispTrigger_DEFINED)
#include <Modloader/app/structs/WispTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_WispTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_WispTrigger_DEFINED
struct WispTrigger__Class;
struct WispTrigger {
    struct WispTrigger__Class* klass;
    MonitorData* monitor;
    struct WispTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispTrigger_FWDDECL)
#define IL2CPP_STRUCT_WispTrigger_FWDDECL
#include <Modloader/app/structs/WispTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_WispTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispTrigger_DEFINED) && !defined(IL2CPP_STRUCT_WispTrigger_FWDDECL)
#include <Modloader/app/structs/WispTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
