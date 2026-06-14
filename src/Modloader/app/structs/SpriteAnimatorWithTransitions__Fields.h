#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_DEFINED
struct TextureAnimationWithTransitions_TextureAnimationPair;
struct Mesh;
struct Renderer;
struct AnimationMeshingSettings;
struct AtlasSpriteTextureBinder;
struct AtlasSpriteTexture;
struct TextureAnimationWithTransitions;
struct TextureAnimator;
struct Action_1_TextureAnimation_;
struct MeshFilter;
struct SpriteAnimatorWithTransitions__Fields {
    struct Suspendable__Fields _;
    bool UseSpriteSpaceUvs;
    bool m_useSpriteSpaceUvs;
    struct TextureAnimationWithTransitions_TextureAnimationPair* m_transition;
    struct Mesh* m_mesh;
    struct Renderer* m_renderer;
    bool m_editorEnabled;
    struct AnimationMeshingSettings* MeshSettings;
    struct AtlasSpriteTextureBinder* m_binder;
    float m_lastTime;
    struct AtlasSpriteTexture* m_lastTexture;
    struct TextureAnimationWithTransitions* DefaultAnimation;
    struct TextureAnimationWithTransitions* CurrentTextureAnimationTransitions;
    struct TextureAnimationWithTransitions* PreviousTextureAnimationTransitions;
    struct TextureAnimator* m_animator;
    bool Flip;
    bool m_isInScene;
    struct Action_1_TextureAnimation_* OnAnimationEndEvent;
    struct Action_1_TextureAnimation_* OnAnimationLoopEvent;
    bool m_isSuspended;
    struct MeshFilter* m_meshFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_TextureAnimation_.h>
#include <Modloader/app/structs/AnimationMeshingSettings.h>
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#include <Modloader/app/structs/AtlasSpriteTextureBinder.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair.h>
#include <Modloader/app/structs/TextureAnimator.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimatorWithTransitions__Fields_FWDDECL)
#include <Modloader/app/structs/SpriteAnimatorWithTransitions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimatorWithTransitions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
