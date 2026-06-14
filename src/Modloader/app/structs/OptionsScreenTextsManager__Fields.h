#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_DEFINED
struct MessageBox;
struct TranslatedMessageProvider;
struct MessageProvider;
struct OptionsScreenTextsManager__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* ResolutionMessageBox;
    struct MessageBox* FullScreenMessageBox;
    struct MessageBox* SoundVolumeMessageBox;
    struct MessageBox* MusicVolumeMessageBox;
    struct MessageBox* ControlStyleMessageBox;
    struct MessageBox* KeyboardLayoutMessageBox;
    struct MessageBox* VibrationMessageBox;
    struct MessageBox* DamageTextsMessageBox;
    struct MessageBox* MapTrailTextsMessageBox;
    struct MessageBox* LanguageMessageBox;
    struct MessageBox* VSyncMessageBox;
    struct MessageBox* ShowHudMessageBox;
    struct MessageBox* HDRMessageBox;
    struct MessageBox* SpeakerSetupMessageBox;
    struct MessageBox* SpeakerSetupMessageBoxConsoles;
    struct MessageBox* WindowsSpatialMessageBox;
    struct MessageBox* ExternalHDRMessageBox;
    struct MessageBox* AudioAPIMessageBox;
    struct MessageBox* DynamicGraphicsToggleMessageBox;
    struct MessageBox* QualityToggleSMessageBox;
    struct MessageBox* QualityToggleXMessageBox;
    struct MessageBox* QualityTogglePCMessageBox;
    struct MessageBox* ExternalQualityToggleSMessageBox;
    struct MessageBox* ExternalQualityToggleXMessageBox;
    struct MessageBox* ExternalQualityTogglePCMessageBox;
    struct MessageBox* AchievementToastEnabledMessageBox;
    struct MessageBox* AudioQualityMessageBox;
    struct TranslatedMessageProvider* BorderlessMessageProvider;
    struct TranslatedMessageProvider* WindowedMessageProvider;
    struct TranslatedMessageProvider* ExclusiveMessageProvider;
    struct TranslatedMessageProvider* OnMessageProvider;
    struct TranslatedMessageProvider* OnForDamageValuesMessageProvider;
    struct TranslatedMessageProvider* DynamicMessageProvider;
    struct TranslatedMessageProvider* OffMessageProvider;
    struct TranslatedMessageProvider* SoundVolumeMessageProvider;
    struct TranslatedMessageProvider* MusicVolumeMessageProvider;
    struct TranslatedMessageProvider* SpeakerSetupSpeakersMessageProvider;
    struct TranslatedMessageProvider* SpeakerSetupHeadphonesMessageProvider;
    struct TranslatedMessageProvider* NotActiveMessageProvider;
    struct TranslatedMessageProvider* AudioQualityEfficientMessageProvider;
    struct TranslatedMessageProvider* AudioQualityBalancedMessageProvider;
    struct TranslatedMessageProvider* AudioQualityMaximumMessageProvider;
    struct TranslatedMessageProvider* HUDOnMessageProvider;
    struct TranslatedMessageProvider* HUDOffMessageProvider;
    struct TranslatedMessageProvider* QualityToggleEnabledSMessageProvider;
    struct TranslatedMessageProvider* QualityToggleEnabledXMessageProvider;
    struct TranslatedMessageProvider* QualityToggleEnabledPCMessageProvider;
    struct TranslatedMessageProvider* QualityToggleDisabledSMessageProvider;
    struct TranslatedMessageProvider* QualityToggleDisabledXMessageProvider;
    struct TranslatedMessageProvider* QualityToggleDisabledPCMessageProvider;
    struct TranslatedMessageProvider* ControlStyleControllerMessageProvider;
    struct TranslatedMessageProvider* ControlStyleKeyboardMessageProvider;
    struct TranslatedMessageProvider* ControlStyleKeyboardAndMouseMessageProvider;
    struct TranslatedMessageProvider* KeyboardLayoutQwertyMessageProvider;
    struct TranslatedMessageProvider* KeyboardLayoutAzertyMessageProvider;
    struct TranslatedMessageProvider* EnglishMessageProvider;
    struct TranslatedMessageProvider* FrenchMessageProvider;
    struct TranslatedMessageProvider* ItalianMessageProvider;
    struct TranslatedMessageProvider* GermanMessageProvider;
    struct TranslatedMessageProvider* SpanishMessageProvider;
    struct TranslatedMessageProvider* JapaneseMessageProvider;
    struct TranslatedMessageProvider* PortugueseMessageProvider;
    struct TranslatedMessageProvider* ChineseMessageProvider;
    struct TranslatedMessageProvider* RussianMessageProvider;
    struct TranslatedMessageProvider* TraditionalChineseMessageProvider;
    struct TranslatedMessageProvider* CzechMessageProvider;
    struct TranslatedMessageProvider* DanishMessageProvider;
    struct TranslatedMessageProvider* DutchMessageProvider;
    struct TranslatedMessageProvider* FinnishMessageProvider;
    struct TranslatedMessageProvider* HungarianMessageProvider;
    struct TranslatedMessageProvider* KoreanMessageProvider;
    struct TranslatedMessageProvider* NorwegianMessageProvider;
    struct TranslatedMessageProvider* PolishMessageProvider;
    struct TranslatedMessageProvider* SpanishSpainMessageProvider;
    struct TranslatedMessageProvider* SwedishMessageProvider;
    struct TranslatedMessageProvider* TurkishMessageProvider;
    struct MessageProvider* AudioAPIWasapiMessageProvider;
    struct MessageProvider* AudioAPIXAudio2MessageProvider;
    struct MessageProvider* AudioAPIDirectSoundMessageProvider;
    struct MessageProvider* AudioAPIDefaultMessageProvider;
    struct MessageProvider* StaticMessageProvider;
    bool m_IsHDRCompatibleAndAllowed;
    bool m_IsHDRCompatibleAndEnabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#endif
#undef IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OptionsScreenTextsManager__Fields_FWDDECL)
#include <Modloader/app/structs/OptionsScreenTextsManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionsScreenTextsManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
