#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISuspendable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISuspendable_DEFINED)
#define IL2CPP_STRUCT_ISuspendable_DEFINED
struct ISuspendable__Class;
struct ISuspendable {
    struct ISuspendable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISuspendable_FWDDECL)
#define IL2CPP_STRUCT_ISuspendable_FWDDECL
#include <Modloader/app/structs/ISuspendable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISuspendable_DEFINED) && !defined(IL2CPP_STRUCT_ISuspendable_FWDDECL)
#include <Modloader/app/structs/ISuspendable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISuspendable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
