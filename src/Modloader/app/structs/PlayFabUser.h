#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUser_DEFINED)
#include <Modloader/app/structs/PlayFabUser__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabUser__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabUser_DEFINED
struct PlayFabUser__Class;
struct PlayFabUser {
    struct PlayFabUser__Class* klass;
    MonitorData* monitor;
    struct PlayFabUser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabUser_FWDDECL)
#define IL2CPP_STRUCT_PlayFabUser_FWDDECL
#include <Modloader/app/structs/PlayFabUser__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUser_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabUser_FWDDECL)
#include <Modloader/app/structs/PlayFabUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
