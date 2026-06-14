#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Version_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Version_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version_DEFINED)
#include <Modloader/app/structs/Version__Fields.h>
#if defined(IL2CPP_STRUCT_Version__Fields_DEFINED)
#define IL2CPP_STRUCT_Version_DEFINED
struct Version__Class;
struct Version {
    struct Version__Class* klass;
    MonitorData* monitor;
    struct Version__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Version_FWDDECL)
#define IL2CPP_STRUCT_Version_FWDDECL
#include <Modloader/app/structs/Version__Class.h>
#endif
#undef IL2CPP_STRUCT_Version_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version_DEFINED) && !defined(IL2CPP_STRUCT_Version_FWDDECL)
#include <Modloader/app/structs/Version.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Version.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
