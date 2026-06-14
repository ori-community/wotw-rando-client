#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationEndedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationEndedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationEndedCondition__Fields_DEFINED
struct SpriteAnimatorWithTransitions;
struct __declspec(align(8)) AnimationEndedCondition__Fields {
    struct SpriteAnimatorWithTransitions* m_spriteAnimator;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationEndedCondition__Fields_FWDDECL
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_AnimationEndedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationEndedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationEndedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationEndedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
