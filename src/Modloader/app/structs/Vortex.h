#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vortex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vortex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vortex_DEFINED)
#include <Modloader/app/structs/Vortex__Fields.h>
#if defined(IL2CPP_STRUCT_Vortex__Fields_DEFINED)
#define IL2CPP_STRUCT_Vortex_DEFINED
struct Vortex__Class;
struct Vortex {
    struct Vortex__Class* klass;
    MonitorData* monitor;
    struct Vortex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vortex_FWDDECL)
#define IL2CPP_STRUCT_Vortex_FWDDECL
#include <Modloader/app/structs/Vortex__Class.h>
#endif
#undef IL2CPP_STRUCT_Vortex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vortex_DEFINED) && !defined(IL2CPP_STRUCT_Vortex_FWDDECL)
#include <Modloader/app/structs/Vortex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vortex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
