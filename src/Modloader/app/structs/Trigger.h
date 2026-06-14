#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trigger_DEFINED)
#include <Modloader/app/structs/Trigger__Fields.h>
#if defined(IL2CPP_STRUCT_Trigger__Fields_DEFINED)
#define IL2CPP_STRUCT_Trigger_DEFINED
struct Trigger__Class;
struct Trigger {
    struct Trigger__Class* klass;
    MonitorData* monitor;
    struct Trigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trigger_FWDDECL)
#define IL2CPP_STRUCT_Trigger_FWDDECL
#include <Modloader/app/structs/Trigger__Class.h>
#endif
#undef IL2CPP_STRUCT_Trigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trigger_DEFINED) && !defined(IL2CPP_STRUCT_Trigger_FWDDECL)
#include <Modloader/app/structs/Trigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
