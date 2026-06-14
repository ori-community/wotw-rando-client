#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleAddedGameBuildEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleAddedGameBuildEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAddedGameBuildEventData_DEFINED)
#include <Modloader/app/structs/TitleAddedGameBuildEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleAddedGameBuildEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleAddedGameBuildEventData_DEFINED
struct TitleAddedGameBuildEventData__Class;
struct TitleAddedGameBuildEventData {
    struct TitleAddedGameBuildEventData__Class* klass;
    MonitorData* monitor;
    struct TitleAddedGameBuildEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleAddedGameBuildEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleAddedGameBuildEventData_FWDDECL
#include <Modloader/app/structs/TitleAddedGameBuildEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleAddedGameBuildEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAddedGameBuildEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleAddedGameBuildEventData_FWDDECL)
#include <Modloader/app/structs/TitleAddedGameBuildEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleAddedGameBuildEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
