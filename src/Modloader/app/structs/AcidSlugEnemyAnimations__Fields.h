#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) AcidSlugEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions* Crawling;
    struct TextureAnimationWithTransitions* Charging;
    struct TextureAnimationWithTransitions* Shooting;
};
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/AcidSlugEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
