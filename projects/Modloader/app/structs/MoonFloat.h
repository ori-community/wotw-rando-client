#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFloat_DEFINED)
#include <Modloader/app/structs/MoonFloat__Fields.h>
#if defined(IL2CPP_STRUCT_MoonFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonFloat_DEFINED
struct MoonFloat__Class;
struct MoonFloat {
    struct MoonFloat__Class* klass;
    MonitorData* monitor;
    struct MoonFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonFloat_FWDDECL)
#define IL2CPP_STRUCT_MoonFloat_FWDDECL
#include <Modloader/app/structs/MoonFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFloat_DEFINED) && !defined(IL2CPP_STRUCT_MoonFloat_FWDDECL)
#include <Modloader/app/structs/MoonFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
