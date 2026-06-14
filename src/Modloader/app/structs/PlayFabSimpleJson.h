#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSimpleJson_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSimpleJson_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_DEFINED)
#define IL2CPP_STRUCT_PlayFabSimpleJson_DEFINED
struct PlayFabSimpleJson__Class;
struct PlayFabSimpleJson {
    struct PlayFabSimpleJson__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSimpleJson_FWDDECL
#include <Modloader/app/structs/PlayFabSimpleJson__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSimpleJson_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSimpleJson_FWDDECL)
#include <Modloader/app/structs/PlayFabSimpleJson.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSimpleJson.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
