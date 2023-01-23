#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionManagementElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionManagementElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementElement_DEFINED)
#define IL2CPP_STRUCT_ConnectionManagementElement_DEFINED
struct ConnectionManagementElement__Class;
struct ConnectionManagementElement {
    struct ConnectionManagementElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConnectionManagementElement_FWDDECL)
#define IL2CPP_STRUCT_ConnectionManagementElement_FWDDECL
#include <Modloader/app/structs/ConnectionManagementElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectionManagementElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementElement_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionManagementElement_FWDDECL)
#include <Modloader/app/structs/ConnectionManagementElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionManagementElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
