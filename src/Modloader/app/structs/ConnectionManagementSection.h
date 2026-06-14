#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionManagementSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionManagementSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementSection_DEFINED)
#define IL2CPP_STRUCT_ConnectionManagementSection_DEFINED
struct ConnectionManagementSection__Class;
struct ConnectionManagementSection {
    struct ConnectionManagementSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConnectionManagementSection_FWDDECL)
#define IL2CPP_STRUCT_ConnectionManagementSection_FWDDECL
#include <Modloader/app/structs/ConnectionManagementSection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectionManagementSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementSection_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionManagementSection_FWDDECL)
#include <Modloader/app/structs/ConnectionManagementSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionManagementSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
