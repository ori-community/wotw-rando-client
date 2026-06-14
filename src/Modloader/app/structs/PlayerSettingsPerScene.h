#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerSettingsPerScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerSettingsPerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSettingsPerScene_DEFINED)
#include <Modloader/app/structs/PlayerSettingsPerScene__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerSettingsPerScene__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerSettingsPerScene_DEFINED
struct PlayerSettingsPerScene__Class;
struct PlayerSettingsPerScene {
    struct PlayerSettingsPerScene__Class* klass;
    MonitorData* monitor;
    struct PlayerSettingsPerScene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerSettingsPerScene_FWDDECL)
#define IL2CPP_STRUCT_PlayerSettingsPerScene_FWDDECL
#include <Modloader/app/structs/PlayerSettingsPerScene__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerSettingsPerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSettingsPerScene_DEFINED) && !defined(IL2CPP_STRUCT_PlayerSettingsPerScene_FWDDECL)
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
