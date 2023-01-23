#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRequestCommon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRequestCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRequestCommon_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabRequestCommon_DEFINED
struct PlayFabRequestCommon__Class;
struct PlayFabRequestCommon {
    struct PlayFabRequestCommon__Class* klass;
    MonitorData* monitor;
    struct PlayFabRequestCommon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRequestCommon_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRequestCommon_FWDDECL
#include <Modloader/app/structs/PlayFabRequestCommon__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRequestCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRequestCommon_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRequestCommon_FWDDECL)
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
