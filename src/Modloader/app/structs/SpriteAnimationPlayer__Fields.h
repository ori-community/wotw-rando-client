#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_DEFINED
struct AnimationMeshingSettings;
struct AtlasSpriteTextureBinder;
struct Renderer;
struct Mesh;
struct TextureAnimation;
struct GameObject;
struct TextureAnimator;
struct SoundProvider;
struct Action;
struct ActionMethod;
struct MeshFilter;
struct AtlasSpriteTexture;
struct SpriteAnimationPlayer__Fields {
    struct TimelineEntity__Fields _;
    bool HideWhenNotPlaying;
    bool UseSpriteSpaceUvs;
    float Speed;
    struct AnimationMeshingSettings* MeshSettings;
    struct AtlasSpriteTextureBinder* m_binder;
    bool m_useSpriteSpaceUvs;
    struct Renderer* m_renderer;
    bool m_editorEnabled;
    struct Mesh* m_mesh;
    struct TextureAnimation* DefaultAnimation;
    struct GameObject* DestroyTargetOnAnimationEnd;
    struct TextureAnimator* m_animator;
    struct SoundProvider* AnimationStartSound;
    struct Action* OnAnimationEndEvent;
    struct ActionMethod* AnimationEndAction;
    float PlaybackTime;
    struct MeshFilter* m_meshFilter;
    bool _HasAnimationEndedTriggered_k__BackingField;
    float m_hideCooldown;
    struct AtlasSpriteTexture* m_currentAtlasSpriteTexture;
    float m_lastTime;
    struct TextureAnimation* m_lastAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AnimationMeshingSettings.h>
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#include <Modloader/app/structs/AtlasSpriteTextureBinder.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimator.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SpriteAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
