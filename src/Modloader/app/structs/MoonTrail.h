#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_DEFINED)
#include <Modloader/app/structs/MoonTrail__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTrail_DEFINED
struct MoonTrail__Class;
struct MoonTrail {
    struct MoonTrail__Class* klass;
    MonitorData* monitor;
    struct MoonTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrail_FWDDECL)
#define IL2CPP_STRUCT_MoonTrail_FWDDECL
#include <Modloader/app/structs/MoonTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrail_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrail_FWDDECL)
#include <Modloader/app/structs/MoonTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
