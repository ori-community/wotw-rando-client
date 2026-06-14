#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Activator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Activator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Activator_DEFINED)
#define IL2CPP_STRUCT_Activator_DEFINED
struct Activator__Class;
struct Activator {
    struct Activator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Activator_FWDDECL)
#define IL2CPP_STRUCT_Activator_FWDDECL
#include <Modloader/app/structs/Activator__Class.h>
#endif
#undef IL2CPP_STRUCT_Activator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Activator_DEFINED) && !defined(IL2CPP_STRUCT_Activator_FWDDECL)
#include <Modloader/app/structs/Activator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Activator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
