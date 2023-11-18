#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedInformation_DEFINED)
#define IL2CPP_STRUCT_SharedInformation_DEFINED
struct SharedInformation__Class;
struct SharedInformation {
    struct SharedInformation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedInformation_FWDDECL)
#define IL2CPP_STRUCT_SharedInformation_FWDDECL
#include <Modloader/app/structs/SharedInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedInformation_DEFINED) && !defined(IL2CPP_STRUCT_SharedInformation_FWDDECL)
#include <Modloader/app/structs/SharedInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
