#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BanUsersResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BanUsersResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanUsersResult_DEFINED)
#include <Modloader/app/structs/BanUsersResult__Fields.h>
#if defined(IL2CPP_STRUCT_BanUsersResult__Fields_DEFINED)
#define IL2CPP_STRUCT_BanUsersResult_DEFINED
struct BanUsersResult__Class;
struct BanUsersResult {
    struct BanUsersResult__Class* klass;
    MonitorData* monitor;
    struct BanUsersResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BanUsersResult_FWDDECL)
#define IL2CPP_STRUCT_BanUsersResult_FWDDECL
#include <Modloader/app/structs/BanUsersResult__Class.h>
#endif
#undef IL2CPP_STRUCT_BanUsersResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanUsersResult_DEFINED) && !defined(IL2CPP_STRUCT_BanUsersResult_FWDDECL)
#include <Modloader/app/structs/BanUsersResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BanUsersResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
