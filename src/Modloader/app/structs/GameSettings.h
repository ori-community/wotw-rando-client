#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings_DEFINED)
#include <Modloader/app/structs/GameSettings__Fields.h>
#if defined(IL2CPP_STRUCT_GameSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSettings_DEFINED
struct GameSettings__Class;
struct GameSettings {
    struct GameSettings__Class* klass;
    MonitorData* monitor;
    struct GameSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameSettings_FWDDECL)
#define IL2CPP_STRUCT_GameSettings_FWDDECL
#include <Modloader/app/structs/GameSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GameSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings_DEFINED) && !defined(IL2CPP_STRUCT_GameSettings_FWDDECL)
#include <Modloader/app/structs/GameSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
