#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalRemotingServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalRemotingServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalRemotingServices_DEFINED)
#define IL2CPP_STRUCT_InternalRemotingServices_DEFINED
struct InternalRemotingServices__Class;
struct InternalRemotingServices {
    struct InternalRemotingServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalRemotingServices_FWDDECL)
#define IL2CPP_STRUCT_InternalRemotingServices_FWDDECL
#include <Modloader/app/structs/InternalRemotingServices__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalRemotingServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalRemotingServices_DEFINED) && !defined(IL2CPP_STRUCT_InternalRemotingServices_FWDDECL)
#include <Modloader/app/structs/InternalRemotingServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalRemotingServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
