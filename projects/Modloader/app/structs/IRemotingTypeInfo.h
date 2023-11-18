#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRemotingTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRemotingTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRemotingTypeInfo_DEFINED)
#define IL2CPP_STRUCT_IRemotingTypeInfo_DEFINED
struct IRemotingTypeInfo__Class;
struct IRemotingTypeInfo {
    struct IRemotingTypeInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRemotingTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_IRemotingTypeInfo_FWDDECL
#include <Modloader/app/structs/IRemotingTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IRemotingTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRemotingTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_IRemotingTypeInfo_FWDDECL)
#include <Modloader/app/structs/IRemotingTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRemotingTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
