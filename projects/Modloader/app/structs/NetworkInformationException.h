#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkInformationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkInformationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkInformationException_DEFINED)
#include <Modloader/app/structs/NetworkInformationException__Fields.h>
#if defined(IL2CPP_STRUCT_NetworkInformationException__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkInformationException_DEFINED
struct NetworkInformationException__Class;
struct NetworkInformationException {
    struct NetworkInformationException__Class* klass;
    MonitorData* monitor;
    struct NetworkInformationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetworkInformationException_FWDDECL)
#define IL2CPP_STRUCT_NetworkInformationException_FWDDECL
#include <Modloader/app/structs/NetworkInformationException__Class.h>
#endif
#undef IL2CPP_STRUCT_NetworkInformationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkInformationException_DEFINED) && !defined(IL2CPP_STRUCT_NetworkInformationException_FWDDECL)
#include <Modloader/app/structs/NetworkInformationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkInformationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
