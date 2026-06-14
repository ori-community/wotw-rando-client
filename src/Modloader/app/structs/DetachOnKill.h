#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DetachOnKill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DetachOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachOnKill_DEFINED)
#include <Modloader/app/structs/DetachOnKill__Fields.h>
#if defined(IL2CPP_STRUCT_DetachOnKill__Fields_DEFINED)
#define IL2CPP_STRUCT_DetachOnKill_DEFINED
struct DetachOnKill__Class;
struct DetachOnKill {
    struct DetachOnKill__Class* klass;
    MonitorData* monitor;
    struct DetachOnKill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DetachOnKill_FWDDECL)
#define IL2CPP_STRUCT_DetachOnKill_FWDDECL
#include <Modloader/app/structs/DetachOnKill__Class.h>
#endif
#undef IL2CPP_STRUCT_DetachOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachOnKill_DEFINED) && !defined(IL2CPP_STRUCT_DetachOnKill_FWDDECL)
#include <Modloader/app/structs/DetachOnKill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DetachOnKill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
