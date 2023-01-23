#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabDataInstanceAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabDataInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataInstanceAPI_DEFINED)
#include <Modloader/app/structs/PlayFabDataInstanceAPI__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabDataInstanceAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabDataInstanceAPI_DEFINED
struct PlayFabDataInstanceAPI__Class;
struct PlayFabDataInstanceAPI {
    struct PlayFabDataInstanceAPI__Class* klass;
    MonitorData* monitor;
    struct PlayFabDataInstanceAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabDataInstanceAPI_FWDDECL)
#define IL2CPP_STRUCT_PlayFabDataInstanceAPI_FWDDECL
#include <Modloader/app/structs/PlayFabDataInstanceAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabDataInstanceAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataInstanceAPI_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabDataInstanceAPI_FWDDECL)
#include <Modloader/app/structs/PlayFabDataInstanceAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabDataInstanceAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
