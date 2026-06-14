#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemySounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySounds__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemySounds__Fields_DEFINED
struct SoundProvider;
struct SoundSource;
struct __declspec(align(8)) RammingEnemySounds__Fields {
    struct SoundProvider* Alert;
    struct SoundProvider* Brake;
    struct SoundSource* Idle;
    struct SoundSource* Run;
    struct SoundProvider* HitSein;
    struct SoundProvider* Hurt;
    struct SoundProvider* Deflected;
    struct SoundProvider* Dash;
    struct SoundProvider* OnHitWall;
};
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemySounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemySounds__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemySounds__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemySounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemySounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
