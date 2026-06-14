#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunOverride_DEFINED)
#include <Modloader/app/structs/RunOverride__Fields.h>
#if defined(IL2CPP_STRUCT_RunOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_RunOverride_DEFINED
struct RunOverride__Class;
struct RunOverride {
    struct RunOverride__Class* klass;
    MonitorData* monitor;
    struct RunOverride__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunOverride_FWDDECL)
#define IL2CPP_STRUCT_RunOverride_FWDDECL
#include <Modloader/app/structs/RunOverride__Class.h>
#endif
#undef IL2CPP_STRUCT_RunOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunOverride_DEFINED) && !defined(IL2CPP_STRUCT_RunOverride_FWDDECL)
#include <Modloader/app/structs/RunOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
