#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TheGiftSetupController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TheGiftSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TheGiftSetupController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TheGiftSetupController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct ActionMethod;
struct GameObject;
struct Transform;
struct TheGiftSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* FindSeinSpriteAnimator;
    struct SpriteAnimator* GlowSpriteAnimator;
    struct TextureAnimation* FindSeinTextureAnimation;
    struct TextureAnimation* GlowTextureAnimation;
    struct ActionMethod* OnNaruCollidedAction;
    struct ActionMethod* OnFinishedAction;
    struct GameObject* Leaf;
    struct Transform* CameraTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TheGiftSetupController__Fields_FWDDECL)
#define IL2CPP_STRUCT_TheGiftSetupController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TheGiftSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TheGiftSetupController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TheGiftSetupController__Fields_FWDDECL)
#include <Modloader/app/structs/TheGiftSetupController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TheGiftSetupController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
