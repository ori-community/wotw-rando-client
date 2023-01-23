#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_DEFINED)
#define IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_DEFINED
struct SoundSource;
struct __declspec(align(8)) OriSpeechSounds_EmotionSounds__Fields {
    struct SoundSource* OriSpeechShortSound;
    struct SoundSource* OriSpeechMedSound;
    struct SoundSource* OriSpeechLongSound;
};
#endif
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_FWDDECL
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriSpeechSounds_EmotionSounds__Fields_FWDDECL)
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
