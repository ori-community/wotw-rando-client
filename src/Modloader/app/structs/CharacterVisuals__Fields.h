#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterVisuals__Fields_DEFINED
struct CharacterSpriteMirror;
struct CharacterAnimationSystem;
struct MoonAnimator;
struct SeinSpriteRotationController;
struct GameObject;
struct Renderer;
struct Renderer__Array;
struct PerspectiveRotationAdjustment;
struct __declspec(align(8)) CharacterVisuals__Fields {
    struct CharacterSpriteMirror* SpriteMirror;
    struct CharacterAnimationSystem* Animation;
    struct MoonAnimator* Animator;
    struct SeinSpriteRotationController* SpriteRotater;
    struct GameObject* Sprite;
    struct Renderer* SpriteRenderer;
    struct Renderer__Array* Renderers;
    struct PerspectiveRotationAdjustment* PerspectiveAdjustment;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterVisuals__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/SeinSpriteRotationController.h>
#endif
#undef IL2CPP_STRUCT_CharacterVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
