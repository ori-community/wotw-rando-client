#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowGameplayCamera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowGameplayCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowGameplayCamera_DEFINED)
#include <Modloader/app/structs/FollowGameplayCamera__Fields.h>
#if defined(IL2CPP_STRUCT_FollowGameplayCamera__Fields_DEFINED)
#define IL2CPP_STRUCT_FollowGameplayCamera_DEFINED
struct FollowGameplayCamera__Class;
struct FollowGameplayCamera {
    struct FollowGameplayCamera__Class* klass;
    MonitorData* monitor;
    struct FollowGameplayCamera__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FollowGameplayCamera_FWDDECL)
#define IL2CPP_STRUCT_FollowGameplayCamera_FWDDECL
#include <Modloader/app/structs/FollowGameplayCamera__Class.h>
#endif
#undef IL2CPP_STRUCT_FollowGameplayCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowGameplayCamera_DEFINED) && !defined(IL2CPP_STRUCT_FollowGameplayCamera_FWDDECL)
#include <Modloader/app/structs/FollowGameplayCamera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowGameplayCamera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
