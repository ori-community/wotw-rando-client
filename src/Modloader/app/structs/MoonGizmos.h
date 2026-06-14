#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonGizmos_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonGizmos_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGizmos_DEFINED)
#include <Modloader/app/structs/MoonGizmos__Fields.h>
#if defined(IL2CPP_STRUCT_MoonGizmos__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonGizmos_DEFINED
struct MoonGizmos__Class;
struct MoonGizmos {
    struct MoonGizmos__Class* klass;
    MonitorData* monitor;
    struct MoonGizmos__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonGizmos_FWDDECL)
#define IL2CPP_STRUCT_MoonGizmos_FWDDECL
#include <Modloader/app/structs/MoonGizmos__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonGizmos_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGizmos_DEFINED) && !defined(IL2CPP_STRUCT_MoonGizmos_FWDDECL)
#include <Modloader/app/structs/MoonGizmos.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonGizmos.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
