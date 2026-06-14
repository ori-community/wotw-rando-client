#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_DEFINED)
#define IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_DEFINED
struct Atlas;
struct AtlasSpriteTexture;
struct SeinNaruComboAnimator_AtlasAndSpriteTexture {
    struct Atlas* Atlas;
    struct AtlasSpriteTexture* AtlasSpriteTexture;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_FWDDECL)
#define IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_FWDDECL
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#endif
#undef IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_DEFINED) && !defined(IL2CPP_STRUCT_SeinNaruComboAnimator_AtlasAndSpriteTexture_FWDDECL)
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
