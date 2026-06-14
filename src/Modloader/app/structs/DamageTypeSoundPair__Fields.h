#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypeSoundPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypeSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair__Fields_DEFINED)
#include <Modloader/app/structs/SoundDamageType__Enum.h>
#if defined(IL2CPP_STRUCT_SoundDamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageTypeSoundPair__Fields_DEFINED
struct Switch_1;
struct SoundProvider;
struct __declspec(align(8)) DamageTypeSoundPair__Fields {
    struct Switch_1* Switch;
    SoundDamageType__Enum DamageType;

    struct SoundProvider* IndependantSoundProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageTypeSoundPair__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_DamageTypeSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypeSoundPair__Fields_FWDDECL)
#include <Modloader/app/structs/DamageTypeSoundPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypeSoundPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
