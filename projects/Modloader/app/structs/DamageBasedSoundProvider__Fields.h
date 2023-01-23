#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_DEFINED
struct List_1_DamageTypeSoundPair_;
struct SoundProvider;
struct Switch_1;
struct DamageBasedSoundProvider__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_DamageTypeSoundPair_* SoundPairs;
    struct SoundProvider* DefaultSoundProvider;
    struct Switch_1* FallBackSwitch;
    struct SoundProvider* WWiseSoundProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DamageTypeSoundPair_.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageBasedSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DamageBasedSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageBasedSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
