#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonGuid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGuid_DEFINED)
#include <Modloader/app/structs/MoonGuid__Fields.h>
#if defined(IL2CPP_STRUCT_MoonGuid__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonGuid_DEFINED
struct MoonGuid__Class;
struct MoonGuid {
    struct MoonGuid__Class* klass;
    MonitorData* monitor;
    struct MoonGuid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonGuid_FWDDECL)
#define IL2CPP_STRUCT_MoonGuid_FWDDECL
#include <Modloader/app/structs/MoonGuid__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGuid_DEFINED) && !defined(IL2CPP_STRUCT_MoonGuid_FWDDECL)
#include <Modloader/app/structs/MoonGuid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonGuid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
