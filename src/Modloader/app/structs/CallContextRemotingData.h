#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallContextRemotingData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallContextRemotingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextRemotingData_DEFINED)
#include <Modloader/app/structs/CallContextRemotingData__Fields.h>
#if defined(IL2CPP_STRUCT_CallContextRemotingData__Fields_DEFINED)
#define IL2CPP_STRUCT_CallContextRemotingData_DEFINED
struct CallContextRemotingData__Class;
struct CallContextRemotingData {
    struct CallContextRemotingData__Class* klass;
    MonitorData* monitor;
    struct CallContextRemotingData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallContextRemotingData_FWDDECL)
#define IL2CPP_STRUCT_CallContextRemotingData_FWDDECL
#include <Modloader/app/structs/CallContextRemotingData__Class.h>
#endif
#undef IL2CPP_STRUCT_CallContextRemotingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextRemotingData_DEFINED) && !defined(IL2CPP_STRUCT_CallContextRemotingData_FWDDECL)
#include <Modloader/app/structs/CallContextRemotingData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallContextRemotingData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
