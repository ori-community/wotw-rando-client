#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/SoundAction_CommandType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_SoundAction_CommandType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundAction__Fields_DEFINED
struct SoundSource;
struct SoundAction__Fields {
    struct ActionMethod__Fields _;
    SoundAction_CommandType__Enum Command;

    struct SoundSource* Sound;
    float FadeDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundAction__Fields_FWDDECL
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SoundAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundAction__Fields_FWDDECL)
#include <Modloader/app/structs/SoundAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
