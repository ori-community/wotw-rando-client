#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyHealthBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyHealthBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHealthBar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyHealthBar__Fields_DEFINED
struct FloatValueProvider;
struct BaseAnimator;
struct List_1_LegacyMaterialColorGradientAnimator_;
struct Transform;
struct LegacyHealthBar__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatValueProvider* ValueProvider;
    struct BaseAnimator* OnChangeAnimator;
    struct BaseAnimator* MaxAnimator;
    struct BaseAnimator* MinAnimator;
    struct List_1_LegacyMaterialColorGradientAnimator_* Gradients;
    float ValueChangeRate;
    bool HideOnFastMovement;
    bool HideOnReachingZero;
    float ReachZeroSpeedOverride;
    float Rotation;
    float m_minValue;
    float m_maxValue;
    struct Transform* m_transform;
    struct Vector3 m_lastPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyHealthBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyHealthBar__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/List_1_LegacyMaterialColorGradientAnimator_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyHealthBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHealthBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyHealthBar__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyHealthBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyHealthBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
