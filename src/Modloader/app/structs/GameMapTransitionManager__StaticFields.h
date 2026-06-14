#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_DEFINED
struct GameMapTransitionManager;
struct GameMapTransitionManager__StaticFields {
    struct GameMapTransitionManager* Instance;
    bool WorldMapEnabled;
};
#endif
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_FWDDECL
#include <Modloader/app/structs/GameMapTransitionManager.h>
#endif
#undef IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapTransitionManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/GameMapTransitionManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapTransitionManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
