#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayUISystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayUISystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayUISystem_DEFINED)
#include <Modloader/app/structs/GameplayUISystem__Fields.h>
#if defined(IL2CPP_STRUCT_GameplayUISystem__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplayUISystem_DEFINED
struct GameplayUISystem__Class;
struct GameplayUISystem {
    struct GameplayUISystem__Class* klass;
    MonitorData* monitor;
    struct GameplayUISystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayUISystem_FWDDECL)
#define IL2CPP_STRUCT_GameplayUISystem_FWDDECL
#include <Modloader/app/structs/GameplayUISystem__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplayUISystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayUISystem_DEFINED) && !defined(IL2CPP_STRUCT_GameplayUISystem_FWDDECL)
#include <Modloader/app/structs/GameplayUISystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayUISystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
