#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonString_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonString_DEFINED)
#include <Modloader/app/structs/MoonString__Fields.h>
#if defined(IL2CPP_STRUCT_MoonString__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonString_DEFINED
struct MoonString__Class;
struct MoonString {
    struct MoonString__Class* klass;
    MonitorData* monitor;
    struct MoonString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonString_FWDDECL)
#define IL2CPP_STRUCT_MoonString_FWDDECL
#include <Modloader/app/structs/MoonString__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonString_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonString_DEFINED) && !defined(IL2CPP_STRUCT_MoonString_FWDDECL)
#include <Modloader/app/structs/MoonString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
