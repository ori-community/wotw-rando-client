#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_DEFINED
struct SoundProvider;
struct Condition_1;
struct ConditionBasedSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct SoundProvider* TrueSoundProvider;
    struct SoundProvider* FalseSoundProvider;
    struct Condition_1* Condition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionBasedSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionBasedSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
