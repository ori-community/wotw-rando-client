#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLoginResultCommon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLoginResultCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoginResultCommon_DEFINED)
#include <Modloader/app/structs/PlayFabLoginResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabLoginResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabLoginResultCommon_DEFINED
struct PlayFabLoginResultCommon__Class;
struct PlayFabLoginResultCommon {
    struct PlayFabLoginResultCommon__Class* klass;
    MonitorData* monitor;
    struct PlayFabLoginResultCommon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLoginResultCommon_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLoginResultCommon_FWDDECL
#include <Modloader/app/structs/PlayFabLoginResultCommon__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabLoginResultCommon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoginResultCommon_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLoginResultCommon_FWDDECL)
#include <Modloader/app/structs/PlayFabLoginResultCommon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLoginResultCommon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
