#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BanUsersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BanUsersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanUsersRequest_DEFINED)
#include <Modloader/app/structs/BanUsersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_BanUsersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_BanUsersRequest_DEFINED
struct BanUsersRequest__Class;
struct BanUsersRequest {
    struct BanUsersRequest__Class* klass;
    MonitorData* monitor;
    struct BanUsersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BanUsersRequest_FWDDECL)
#define IL2CPP_STRUCT_BanUsersRequest_FWDDECL
#include <Modloader/app/structs/BanUsersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_BanUsersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanUsersRequest_DEFINED) && !defined(IL2CPP_STRUCT_BanUsersRequest_FWDDECL)
#include <Modloader/app/structs/BanUsersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BanUsersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
