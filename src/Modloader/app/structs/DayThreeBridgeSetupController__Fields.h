#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct GameObject;
struct Collider;
struct Naru;
struct Transform;
struct DayThreeBridgeSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* NaruCollapseSpriteAnimator;
    struct SpriteAnimator* BridgeCollapseASpriteAnimator;
    struct SpriteAnimator* BridgeCollapseBSpriteAnimator;
    struct TextureAnimation* BridgeCollapseAAnimation;
    struct TextureAnimation* BridgeCollapseBAnimation;
    struct TextureAnimation* BridgeCollapseNaruAnimation;
    struct GameObject* Bridge;
    struct Collider* SurfaceColliderBeforeCrash;
    struct Collider* SurfaceColliderAfterCrash;
    struct Naru* Naru;
    struct Transform* NaruSpawnPisition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_FWDDECL)
#define IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DayThreeBridgeSetupController__Fields_FWDDECL)
#include <Modloader/app/structs/DayThreeBridgeSetupController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DayThreeBridgeSetupController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
