#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallContextSecurityData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallContextSecurityData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextSecurityData_DEFINED)
#include <Modloader/app/structs/CallContextSecurityData__Fields.h>
#if defined(IL2CPP_STRUCT_CallContextSecurityData__Fields_DEFINED)
#define IL2CPP_STRUCT_CallContextSecurityData_DEFINED
struct CallContextSecurityData__Class;
struct CallContextSecurityData {
    struct CallContextSecurityData__Class* klass;
    MonitorData* monitor;
    struct CallContextSecurityData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallContextSecurityData_FWDDECL)
#define IL2CPP_STRUCT_CallContextSecurityData_FWDDECL
#include <Modloader/app/structs/CallContextSecurityData__Class.h>
#endif
#undef IL2CPP_STRUCT_CallContextSecurityData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextSecurityData_DEFINED) && !defined(IL2CPP_STRUCT_CallContextSecurityData_FWDDECL)
#include <Modloader/app/structs/CallContextSecurityData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallContextSecurityData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
