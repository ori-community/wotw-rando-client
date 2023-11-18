#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonSwarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarmer_DEFINED)
#include <Modloader/app/structs/MoonSwarmer__Fields.h>
#if defined(IL2CPP_STRUCT_MoonSwarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonSwarmer_DEFINED
struct MoonSwarmer__Class;
struct MoonSwarmer {
    struct MoonSwarmer__Class* klass;
    MonitorData* monitor;
    struct MoonSwarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonSwarmer_FWDDECL)
#define IL2CPP_STRUCT_MoonSwarmer_FWDDECL
#include <Modloader/app/structs/MoonSwarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarmer_DEFINED) && !defined(IL2CPP_STRUCT_MoonSwarmer_FWDDECL)
#include <Modloader/app/structs/MoonSwarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonSwarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
