#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserPrivateAccountInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserPrivateAccountInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserPrivateAccountInfo_DEFINED)
#include <Modloader/app/structs/UserPrivateAccountInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserPrivateAccountInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserPrivateAccountInfo_DEFINED
struct UserPrivateAccountInfo__Class;
struct UserPrivateAccountInfo {
    struct UserPrivateAccountInfo__Class* klass;
    MonitorData* monitor;
    struct UserPrivateAccountInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserPrivateAccountInfo_FWDDECL)
#define IL2CPP_STRUCT_UserPrivateAccountInfo_FWDDECL
#include <Modloader/app/structs/UserPrivateAccountInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserPrivateAccountInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserPrivateAccountInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserPrivateAccountInfo_FWDDECL)
#include <Modloader/app/structs/UserPrivateAccountInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserPrivateAccountInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
