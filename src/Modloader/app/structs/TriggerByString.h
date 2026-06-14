#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerByString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerByString_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString_DEFINED)
#include <Modloader/app/structs/TriggerByString__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerByString__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerByString_DEFINED
struct TriggerByString__Class;
struct TriggerByString {
    struct TriggerByString__Class* klass;
    MonitorData* monitor;
    struct TriggerByString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerByString_FWDDECL)
#define IL2CPP_STRUCT_TriggerByString_FWDDECL
#include <Modloader/app/structs/TriggerByString__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerByString_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString_DEFINED) && !defined(IL2CPP_STRUCT_TriggerByString_FWDDECL)
#include <Modloader/app/structs/TriggerByString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerByString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
