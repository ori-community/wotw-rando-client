#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientInformation_DEFINED)
#define IL2CPP_STRUCT_ClientInformation_DEFINED
struct ClientInformation__Class;
struct ClientInformation {
    struct ClientInformation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientInformation_FWDDECL)
#define IL2CPP_STRUCT_ClientInformation_FWDDECL
#include <Modloader/app/structs/ClientInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientInformation_DEFINED) && !defined(IL2CPP_STRUCT_ClientInformation_FWDDECL)
#include <Modloader/app/structs/ClientInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
