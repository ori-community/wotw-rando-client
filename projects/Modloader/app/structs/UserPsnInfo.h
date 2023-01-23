#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserPsnInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserPsnInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserPsnInfo_DEFINED)
#include <Modloader/app/structs/UserPsnInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserPsnInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserPsnInfo_DEFINED
struct UserPsnInfo__Class;
struct UserPsnInfo {
    struct UserPsnInfo__Class* klass;
    MonitorData* monitor;
    struct UserPsnInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserPsnInfo_FWDDECL)
#define IL2CPP_STRUCT_UserPsnInfo_FWDDECL
#include <Modloader/app/structs/UserPsnInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserPsnInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserPsnInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserPsnInfo_FWDDECL)
#include <Modloader/app/structs/UserPsnInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserPsnInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
