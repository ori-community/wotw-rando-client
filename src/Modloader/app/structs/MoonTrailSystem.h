#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_DEFINED)
#include <Modloader/app/structs/MoonTrailSystem__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTrailSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTrailSystem_DEFINED
struct MoonTrailSystem__Class;
struct MoonTrailSystem {
    struct MoonTrailSystem__Class* klass;
    MonitorData* monitor;
    struct MoonTrailSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailSystem_FWDDECL
#include <Modloader/app/structs/MoonTrailSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailSystem_FWDDECL)
#include <Modloader/app/structs/MoonTrailSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
