#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED)
#define IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED
struct MoonAnimatorDefinition;
struct GameObject;
struct AnimationTransition__Array;
struct AnimationPostprocessGroup__Array;
struct AnimationPostprocessGroupModifier__Array;
struct AnimationTransition;
struct MoonAnimation__Fields {
    struct ScriptableObject__Fields _;
    struct MoonAnimatorDefinition* AnimatorDefinition;
    struct GameObject* PreviewObject;
    struct AnimationTransition__Array* Transitions;
    float AdditiveWeightMultiplier;
    struct MoonAnimatorLayerName m_layer;
    float m_layerBlendInDuration;
    float m_layerBlendOutDuration;
    float m_defaultTransitionInDuration;
    struct AnimationPostprocessGroup__Array* m_disabledPostprocessGroups;
    struct AnimationPostprocessGroupModifier__Array* m_postprocessGroupModifiers;
    bool m_useDefaultTransitionIn;
    struct AnimationTransition* m_defaultTransitionIn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Array.h>
#include <Modloader/app/structs/AnimationPostprocessGroup__Array.h>
#include <Modloader/app/structs/AnimationTransition.h>
#include <Modloader/app/structs/AnimationTransition__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
