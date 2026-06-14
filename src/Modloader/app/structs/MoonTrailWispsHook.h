#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailWispsHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailWispsHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook_DEFINED)
#include <Modloader/app/structs/MoonTrailWispsHook__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTrailWispsHook__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTrailWispsHook_DEFINED
struct MoonTrailWispsHook__Class;
struct MoonTrailWispsHook {
    struct MoonTrailWispsHook__Class* klass;
    MonitorData* monitor;
    struct MoonTrailWispsHook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailWispsHook_FWDDECL
#include <Modloader/app/structs/MoonTrailWispsHook__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailWispsHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailWispsHook_FWDDECL)
#include <Modloader/app/structs/MoonTrailWispsHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailWispsHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
