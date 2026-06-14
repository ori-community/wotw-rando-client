#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Verlet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Verlet_INITIALIZING
#if !defined(IL2CPP_STRUCT_Verlet_DEFINED)
#include <Modloader/app/structs/Verlet__Fields.h>
#if defined(IL2CPP_STRUCT_Verlet__Fields_DEFINED)
#define IL2CPP_STRUCT_Verlet_DEFINED
struct Verlet__Class;
struct Verlet {
    struct Verlet__Class* klass;
    MonitorData* monitor;
    struct Verlet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Verlet_FWDDECL)
#define IL2CPP_STRUCT_Verlet_FWDDECL
#include <Modloader/app/structs/Verlet__Class.h>
#endif
#undef IL2CPP_STRUCT_Verlet_INITIALIZING
#if !defined(IL2CPP_STRUCT_Verlet_DEFINED) && !defined(IL2CPP_STRUCT_Verlet_FWDDECL)
#include <Modloader/app/structs/Verlet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Verlet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
