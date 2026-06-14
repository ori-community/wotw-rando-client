#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_DEFINED)
#include <Modloader/app/structs/UberInteractionManager_InteractionCurveType__Enum.h>
#if defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurveType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_DEFINED
struct AnimationCurve;
struct Texture2D;
struct __declspec(align(8)) UberInteractionManager_InteractionCurve__Fields {
    UberInteractionManager_InteractionCurveType__Enum Type;

    struct AnimationCurve* Curve;
    struct Texture2D* m_curveTex;
    float _Scale_k__BackingField;
    int32_t m_curveName;
    int32_t m_curveSettingsName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurve__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
