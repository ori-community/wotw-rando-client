#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlatformUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlatformUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformUser_DEFINED)
#define IL2CPP_STRUCT_IPlatformUser_DEFINED
struct IPlatformUser__Class;
struct IPlatformUser {
    struct IPlatformUser__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlatformUser_FWDDECL)
#define IL2CPP_STRUCT_IPlatformUser_FWDDECL
#include <Modloader/app/structs/IPlatformUser__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlatformUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformUser_DEFINED) && !defined(IL2CPP_STRUCT_IPlatformUser_FWDDECL)
#include <Modloader/app/structs/IPlatformUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlatformUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
