#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageSoundSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageSoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSoundSource__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageSoundSource__Fields_DEFINED
struct DamageBasedSoundProvider;
struct SoundPlayer;
struct DamageSoundSource__Fields {
    struct MonoBehaviour__Fields _;
    struct DamageBasedSoundProvider* DamageSound;
    struct SoundPlayer* m_lastDamageSound;
    bool OneSoundOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageSoundSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageSoundSource__Fields_FWDDECL
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_DamageSoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSoundSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageSoundSource__Fields_FWDDECL)
#include <Modloader/app/structs/DamageSoundSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageSoundSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
