#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentSoundPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair__Fields_DEFINED)
#include <Modloader/app/structs/EnvironmentType__Enum.h>
#if defined(IL2CPP_STRUCT_EnvironmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_EnvironmentSoundPair__Fields_DEFINED
struct SoundProvider;
struct __declspec(align(8)) EnvironmentSoundPair__Fields {
    EnvironmentType__Enum EnvironmentType;

    struct SoundProvider* SoundProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentSoundPair__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentSoundPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentSoundPair__Fields_FWDDECL)
#include <Modloader/app/structs/EnvironmentSoundPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentSoundPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
