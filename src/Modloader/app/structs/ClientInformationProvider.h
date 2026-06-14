#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientInformationProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientInformationProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientInformationProvider_DEFINED)
#include <Modloader/app/structs/ClientInformationProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ClientInformationProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientInformationProvider_DEFINED
struct ClientInformationProvider__Class;
struct ClientInformationProvider {
    struct ClientInformationProvider__Class* klass;
    MonitorData* monitor;
    struct ClientInformationProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientInformationProvider_FWDDECL)
#define IL2CPP_STRUCT_ClientInformationProvider_FWDDECL
#include <Modloader/app/structs/ClientInformationProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientInformationProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientInformationProvider_DEFINED) && !defined(IL2CPP_STRUCT_ClientInformationProvider_FWDDECL)
#include <Modloader/app/structs/ClientInformationProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientInformationProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
