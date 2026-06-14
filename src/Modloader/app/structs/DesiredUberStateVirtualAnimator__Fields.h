#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_DEFINED
struct List_1_IDesiredUberState_;
struct PlaybackStatus;
struct __declspec(align(8)) DesiredUberStateVirtualAnimator__Fields {
    struct List_1_IDesiredUberState_* m_desiredStates;
    bool _UseCustomTimeRange_k__BackingField;
    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_IDesiredUberState_.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
