#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonPhysics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonPhysics_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonPhysics_DEFINED)
#define IL2CPP_STRUCT_MoonPhysics_DEFINED
struct MoonPhysics__Class;
struct MoonPhysics {
    struct MoonPhysics__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonPhysics_FWDDECL)
#define IL2CPP_STRUCT_MoonPhysics_FWDDECL
#include <Modloader/app/structs/MoonPhysics__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonPhysics_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonPhysics_DEFINED) && !defined(IL2CPP_STRUCT_MoonPhysics_FWDDECL)
#include <Modloader/app/structs/MoonPhysics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonPhysics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
