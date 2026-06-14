#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabResultCommon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabResultCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabResultCommon_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabResultCommon_DEFINED
struct PlayFabResultCommon__Class;
struct PlayFabResultCommon {
    struct PlayFabResultCommon__Class* klass;
    MonitorData* monitor;
    struct PlayFabResultCommon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabResultCommon_FWDDECL)
#define IL2CPP_STRUCT_PlayFabResultCommon_FWDDECL
#include <Modloader/app/structs/PlayFabResultCommon__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabResultCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabResultCommon_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabResultCommon_FWDDECL)
#include <Modloader/app/structs/PlayFabResultCommon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabResultCommon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
