#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeBuildInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeBuildInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation_DEFINED)
#include <Modloader/app/structs/RuntimeBuildInformation__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeBuildInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeBuildInformation_DEFINED
struct RuntimeBuildInformation__Class;
struct RuntimeBuildInformation {
    struct RuntimeBuildInformation__Class* klass;
    MonitorData* monitor;
    struct RuntimeBuildInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation_FWDDECL)
#define IL2CPP_STRUCT_RuntimeBuildInformation_FWDDECL
#include <Modloader/app/structs/RuntimeBuildInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeBuildInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeBuildInformation_FWDDECL)
#include <Modloader/app/structs/RuntimeBuildInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeBuildInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
