#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureBasedOnHealth__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureBasedOnHealth__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureBasedOnHealth__Fields_DEFINED
struct LegacyEntity;
struct Texture__Array;
struct AnimationCurve;
struct Renderer;
struct TextureBasedOnHealth__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyEntity* Entity;
    struct Texture__Array* Textures;
    struct AnimationCurve* HealthToIndex;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureBasedOnHealth__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Texture__Array.h>
#endif
#undef IL2CPP_STRUCT_TextureBasedOnHealth__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureBasedOnHealth__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureBasedOnHealth__Fields_FWDDECL)
#include <Modloader/app/structs/TextureBasedOnHealth__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureBasedOnHealth__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
