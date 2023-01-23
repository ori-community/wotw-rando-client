#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRScreenshots_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRScreenshots_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRScreenshots_DEFINED)
#include <Modloader/app/structs/CVRScreenshots__Fields.h>
#if defined(IL2CPP_STRUCT_CVRScreenshots__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRScreenshots_DEFINED
struct CVRScreenshots__Class;
struct CVRScreenshots {
    struct CVRScreenshots__Class* klass;
    MonitorData* monitor;
    struct CVRScreenshots__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRScreenshots_FWDDECL)
#define IL2CPP_STRUCT_CVRScreenshots_FWDDECL
#include <Modloader/app/structs/CVRScreenshots__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRScreenshots_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRScreenshots_DEFINED) && !defined(IL2CPP_STRUCT_CVRScreenshots_FWDDECL)
#include <Modloader/app/structs/CVRScreenshots.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRScreenshots.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
