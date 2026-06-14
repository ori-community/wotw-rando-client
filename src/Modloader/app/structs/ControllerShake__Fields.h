#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerShake__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerShake__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShake__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerShake__Fields_DEFINED
struct ControllerShakeAsset;
struct ControllerShake__Fields {
    struct BaseAnimator__Fields _;
    bool ShakeOnlyIfVisibleToCamera;
    bool AffectedByDistance;
    float ShakeObjectSize;
    float ImpactRadius;
    float Strength;
    struct ControllerShakeAsset* Shake;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerShake__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControllerShake__Fields_FWDDECL
#include <Modloader/app/structs/ControllerShakeAsset.h>
#endif
#undef IL2CPP_STRUCT_ControllerShake__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShake__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControllerShake__Fields_FWDDECL)
#include <Modloader/app/structs/ControllerShake__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerShake__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
