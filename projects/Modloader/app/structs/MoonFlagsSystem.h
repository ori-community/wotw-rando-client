#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonFlagsSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonFlagsSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_DEFINED)
#include <Modloader/app/structs/MoonFlagsSystem__Fields.h>
#if defined(IL2CPP_STRUCT_MoonFlagsSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonFlagsSystem_DEFINED
struct MoonFlagsSystem__Class;
struct MoonFlagsSystem {
    struct MoonFlagsSystem__Class* klass;
    MonitorData* monitor;
    struct MoonFlagsSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_FWDDECL)
#define IL2CPP_STRUCT_MoonFlagsSystem_FWDDECL
#include <Modloader/app/structs/MoonFlagsSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonFlagsSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_DEFINED) && !defined(IL2CPP_STRUCT_MoonFlagsSystem_FWDDECL)
#include <Modloader/app/structs/MoonFlagsSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonFlagsSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
