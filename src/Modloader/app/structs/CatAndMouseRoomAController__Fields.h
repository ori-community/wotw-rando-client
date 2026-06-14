#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct SoundProvider;
struct Transform;
struct CatAndMouseRoomAController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* AttackSpriteAnimator;
    struct SpriteAnimator* EscapedSpriteAnimator;
    struct TextureAnimation* AttackTextureAnimation;
    struct TextureAnimation* EscapedTextureAnimation;
    struct TextureAnimation* FlyAwayTextureAnimation;
    struct SoundProvider* AttackSoundProvider;
    struct SoundProvider* EscapedSoundProvider;
    struct Transform* RoomCenter;
    float KuroSpriteYOffSet;
    bool AttackAtSeinPositionX;
    bool AttackAtSeinPositionY;
    bool FaceLeftRightBasedOnRoomCenter;
    struct Vector3 m_originalLocalScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseRoomAController__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseRoomAController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseRoomAController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
