#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuPushWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuPushWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPushWall_DEFINED)
#include <Modloader/app/structs/KuPushWall__Fields.h>
#if defined(IL2CPP_STRUCT_KuPushWall__Fields_DEFINED)
#define IL2CPP_STRUCT_KuPushWall_DEFINED
struct KuPushWall__Class;
struct KuPushWall {
    struct KuPushWall__Class* klass;
    MonitorData* monitor;
    struct KuPushWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuPushWall_FWDDECL)
#define IL2CPP_STRUCT_KuPushWall_FWDDECL
#include <Modloader/app/structs/KuPushWall__Class.h>
#endif
#undef IL2CPP_STRUCT_KuPushWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPushWall_DEFINED) && !defined(IL2CPP_STRUCT_KuPushWall_FWDDECL)
#include <Modloader/app/structs/KuPushWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuPushWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
