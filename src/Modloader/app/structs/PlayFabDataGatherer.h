#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabDataGatherer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabDataGatherer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer_DEFINED)
#include <Modloader/app/structs/PlayFabDataGatherer__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabDataGatherer__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabDataGatherer_DEFINED
struct PlayFabDataGatherer__Class;
struct PlayFabDataGatherer {
    struct PlayFabDataGatherer__Class* klass;
    MonitorData* monitor;
    struct PlayFabDataGatherer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer_FWDDECL)
#define IL2CPP_STRUCT_PlayFabDataGatherer_FWDDECL
#include <Modloader/app/structs/PlayFabDataGatherer__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabDataGatherer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDataGatherer_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabDataGatherer_FWDDECL)
#include <Modloader/app/structs/PlayFabDataGatherer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabDataGatherer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
