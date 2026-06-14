#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicBrightnessSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicBrightnessSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_DynamicBrightnessSource__Fields_DEFINED
struct WeightController;
struct DynamicBrightnessSource__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 Size;
    float Radius;
    float FalloffSize;
    float Brigthness;
    struct WeightController* TimeFadeController;
    float m_currentInfluenceMultiplier;
    float m_currentDistanceToCamera;
    struct Bounds m_bounds;
    bool m_insideFrustum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicBrightnessSource__Fields_FWDDECL
#include <Modloader/app/structs/WeightController.h>
#endif
#undef IL2CPP_STRUCT_DynamicBrightnessSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicBrightnessSource__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicBrightnessSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicBrightnessSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
