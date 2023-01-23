#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/SpriteAnimatorCondition_SpriteAnimatorMode__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpriteAnimatorCondition_SpriteAnimatorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_DEFINED
struct SpriteAnimator;
struct SpriteAnimatorCondition__Fields {
    struct Condition_1__Fields _;
    SpriteAnimatorCondition_SpriteAnimatorMode__Enum Mode;

    struct SpriteAnimator* Animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_FWDDECL
#include <Modloader/app/structs/SpriteAnimator.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_FWDDECL)
#include <Modloader/app/structs/SpriteAnimatorCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimatorCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
