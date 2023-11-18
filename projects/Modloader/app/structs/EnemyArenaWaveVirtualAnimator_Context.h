#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_DEFINED
struct EnemyArenaController;
struct EnemyArenaWaveVirtualAnimator_Context {
    struct EnemyArenaController* Controller;
    int32_t Index;
};
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_FWDDECL
#include <Modloader/app/structs/EnemyArenaController.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator_Context_FWDDECL)
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
