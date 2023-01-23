#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerShakeAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerShakeAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerShakeAsset__Fields_DEFINED
struct AnimationCurve;
struct ControllerShakeAsset__Fields {
    struct ScriptableObject__Fields _;
    struct AnimationCurve* ShakeCurve;
    float m_duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControllerShakeAsset__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ControllerShakeAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControllerShakeAsset__Fields_FWDDECL)
#include <Modloader/app/structs/ControllerShakeAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerShakeAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
