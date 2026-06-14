#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabStatistics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabStatistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabStatistics_DEFINED)
#include <Modloader/app/structs/PlayFabStatistics__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabStatistics__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabStatistics_DEFINED
struct PlayFabStatistics__Class;
struct PlayFabStatistics {
    struct PlayFabStatistics__Class* klass;
    MonitorData* monitor;
    struct PlayFabStatistics__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabStatistics_FWDDECL)
#define IL2CPP_STRUCT_PlayFabStatistics_FWDDECL
#include <Modloader/app/structs/PlayFabStatistics__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabStatistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabStatistics_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabStatistics_FWDDECL)
#include <Modloader/app/structs/PlayFabStatistics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabStatistics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
