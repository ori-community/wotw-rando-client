#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILeachable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILeachable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILeachable_DEFINED)
#define IL2CPP_STRUCT_ILeachable_DEFINED
struct ILeachable__Class;
struct ILeachable {
    struct ILeachable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILeachable_FWDDECL)
#define IL2CPP_STRUCT_ILeachable_FWDDECL
#include <Modloader/app/structs/ILeachable__Class.h>
#endif
#undef IL2CPP_STRUCT_ILeachable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILeachable_DEFINED) && !defined(IL2CPP_STRUCT_ILeachable_FWDDECL)
#include <Modloader/app/structs/ILeachable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILeachable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
