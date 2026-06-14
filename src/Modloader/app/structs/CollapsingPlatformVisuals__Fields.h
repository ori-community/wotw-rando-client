#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_DEFINED
struct GameObject;
struct ParticleSystem;
struct CollapsingPlatformVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Platform;
    struct GameObject* AnimatedVisuals;
    struct ParticleSystem* Particles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollapsingPlatformVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/CollapsingPlatformVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollapsingPlatformVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
