#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeBuildInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeBuildInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeBuildInformation__Fields_DEFINED
struct String;
struct __declspec(align(8)) RuntimeBuildInformation__Fields {
    struct String* revision;
    struct String* coreRevision;
    struct String* lastRevisionTime;
    int32_t buildServerBuildId;
    struct String* teamCityBuildConfiguration;
    bool cheatsEnabled;
    bool finalBuild;
    bool developmentBuild;
    bool il2Cpp;
    struct String* sceneSettings;
    bool tlc;
    bool wwiseEnable;
    bool shouldRebindPrefabs;
    bool shouldStripPrefabs;
    struct String* atlasPlatform;
    int64_t BuildNumber;
    struct String* TeamCityProjectName;
    struct String* TeamCityBuildConfName;
    struct String* EngineVersion;
    struct String* GraphicsAPI;
    bool ScriptDebugging;
    bool MoonProfiling;
    bool ExperimentalBuild;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeBuildInformation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RuntimeBuildInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeBuildInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeBuildInformation__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeBuildInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeBuildInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
