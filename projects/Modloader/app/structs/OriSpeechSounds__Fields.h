#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriSpeechSounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriSpeechSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_OriSpeechSounds__Fields_DEFINED
struct MessageBox;
struct OriSpeechSounds_EmotionSounds;
struct SoundSource;
struct SoundHost;
struct OriSpeechSounds__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* MessageBox;
    struct OriSpeechSounds_EmotionSounds* HappySoundSet;
    struct OriSpeechSounds_EmotionSounds* NeutralSoundSet;
    struct OriSpeechSounds_EmotionSounds* SadSoundSet;
    struct OriSpeechSounds_EmotionSounds* ScaredSoundSet;
    struct OriSpeechSounds_EmotionSounds* UrgentSoundSet;
    struct OriSpeechSounds_EmotionSounds* m_emotionSounds;
    int32_t MaxTextLengthShortSpeech;
    int32_t MaxTextLengthMedSpeech;
    struct SoundSource* ExtraSoundSource;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost* SoundHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriSpeechSounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriSpeechSounds__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_OriSpeechSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriSpeechSounds__Fields_FWDDECL)
#include <Modloader/app/structs/OriSpeechSounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriSpeechSounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
