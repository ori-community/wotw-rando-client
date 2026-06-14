#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRApplications_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRApplications_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRApplications_DEFINED)
#include <Modloader/app/structs/CVRApplications__Fields.h>
#if defined(IL2CPP_STRUCT_CVRApplications__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRApplications_DEFINED
struct CVRApplications__Class;
struct CVRApplications {
    struct CVRApplications__Class* klass;
    MonitorData* monitor;
    struct CVRApplications__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRApplications_FWDDECL)
#define IL2CPP_STRUCT_CVRApplications_FWDDECL
#include <Modloader/app/structs/CVRApplications__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRApplications_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRApplications_DEFINED) && !defined(IL2CPP_STRUCT_CVRApplications_FWDDECL)
#include <Modloader/app/structs/CVRApplications.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRApplications.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
