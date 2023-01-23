#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapTransitionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapTransitionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager_DEFINED)
#include <Modloader/app/structs/GameMapTransitionManager__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapTransitionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapTransitionManager_DEFINED
struct GameMapTransitionManager__Class;
struct GameMapTransitionManager {
    struct GameMapTransitionManager__Class* klass;
    MonitorData* monitor;
    struct GameMapTransitionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager_FWDDECL)
#define IL2CPP_STRUCT_GameMapTransitionManager_FWDDECL
#include <Modloader/app/structs/GameMapTransitionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapTransitionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager_DEFINED) && !defined(IL2CPP_STRUCT_GameMapTransitionManager_FWDDECL)
#include <Modloader/app/structs/GameMapTransitionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapTransitionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
