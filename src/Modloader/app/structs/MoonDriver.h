#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver_DEFINED)
#include <Modloader/app/structs/MoonDriver__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDriver_DEFINED
struct MoonDriver__Class;
struct MoonDriver {
    struct MoonDriver__Class* klass;
    MonitorData* monitor;
    struct MoonDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDriver_FWDDECL)
#define IL2CPP_STRUCT_MoonDriver_FWDDECL
#include <Modloader/app/structs/MoonDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver_DEFINED) && !defined(IL2CPP_STRUCT_MoonDriver_FWDDECL)
#include <Modloader/app/structs/MoonDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
