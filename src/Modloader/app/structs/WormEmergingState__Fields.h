#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormEmergingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormEmergingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEmergingState__Fields_DEFINED)
#include <Modloader/app/structs/WormState__Fields.h>
#if defined(IL2CPP_STRUCT_WormState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormEmergingState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct PrefabSpawner;
struct SoundSource;
struct WormEmergingState__Fields {
    struct WormState__Fields _;
    struct TextureAnimationWithTransitions* m_emerging;
    struct PrefabSpawner* m_emergingEffect;
    struct SoundSource* m_emergingSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormEmergingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WormEmergingState__Fields_FWDDECL
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_WormEmergingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEmergingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WormEmergingState__Fields_FWDDECL)
#include <Modloader/app/structs/WormEmergingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormEmergingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
