#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurveType__Enum.h>
#include <Modloader/app/structs/UberInteractionModifier_Interaction.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberInteractionManager_InteractionCurveType__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberInteractionModifier_Interaction_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED
struct UberInteractionModifier__Fields {
    struct UberShaderModifier__Fields _;
    float SizeShrink;
    UberInteractionManager_InteractionCurveType__Enum CurveType;

    struct UberInteractionModifier_Interaction m_interactionA;
    struct UberInteractionModifier_Interaction m_interactionB;
    float m_maxRadius;
    struct Rect m_velRect;
    struct Rect m_rendRect;
    struct Vector3 m_pos;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    bool _WantsToRegister_k__BackingField;
    struct Bounds m_bounds;
    struct Vector3 m_boundsMin;
    struct Vector3 m_boundsMax;
    bool m_boundsSet;
    float m_prevSetTimeA;
    float m_lastStrengthA;
    float m_prevSetTimeB;
    float m_lastStrengthB;
    float m_duration;
    int32_t m_posId;
    int32_t m_velId;
    int32_t m_paramsId;
    int32_t m_params2Id;
    bool m_didInitializeMaterialParameterShadowCopy;
    struct Vector4 m_posShadowCopy;
    struct Vector4 m_velShadowCopy;
    struct Vector4 m_paramsShadowCopy;
    struct Vector4 m_params2ShadowCopy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionModifier__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberInteractionModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
