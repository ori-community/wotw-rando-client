#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_DEFINED
struct EnemyArenaController;
struct DesiredUberStateGeneric;
struct Dictionary_2_System_Int32_System_Single_;
struct EnemyArenaWaveVirtualAnimator__Fields {
    struct VirtualMoonTimeline__Fields _;
    struct EnemyArenaController* _Controller_k__BackingField;
    int32_t _WaveIndex_k__BackingField;
    struct DesiredUberStateGeneric* _DesiredState_k__BackingField;
    bool m_rebuildingHiearachy;
    struct Dictionary_2_System_Int32_System_Single_* _EventBoard_k__BackingField;
    struct Nullable_1_Single_ _CustomStart_k__BackingField;
    struct Nullable_1_Single_ _CustomEnd_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Single_.h>
#include <Modloader/app/structs/EnemyArenaController.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaWaveVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
