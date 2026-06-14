#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayCamera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCamera_DEFINED)
#include <Modloader/app/structs/GameplayCamera__Fields.h>
#if defined(IL2CPP_STRUCT_GameplayCamera__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplayCamera_DEFINED
struct GameplayCamera__Class;
struct GameplayCamera {
    struct GameplayCamera__Class* klass;
    MonitorData* monitor;
    struct GameplayCamera__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayCamera_FWDDECL)
#define IL2CPP_STRUCT_GameplayCamera_FWDDECL
#include <Modloader/app/structs/GameplayCamera__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplayCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCamera_DEFINED) && !defined(IL2CPP_STRUCT_GameplayCamera_FWDDECL)
#include <Modloader/app/structs/GameplayCamera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayCamera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
