#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_DEFINED
struct EnemyArenaController;
struct EnemyArenaVirtualAnimator__Fields {
    struct VirtualMoonTimeline__Fields _;
    struct EnemyArenaController* _Controller_k__BackingField;
    bool m_rebuildingHiearachy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/EnemyArenaController.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyArenaVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
