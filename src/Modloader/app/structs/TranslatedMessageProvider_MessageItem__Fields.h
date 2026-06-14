#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_DEFINED)
#include <Modloader/app/structs/EmotionType__Enum.h>
#if defined(IL2CPP_STRUCT_EmotionType__Enum_DEFINED)
#define IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_DEFINED
struct String;
struct SoundProvider;
struct Event_1;
struct __declspec(align(8)) TranslatedMessageProvider_MessageItem__Fields {
    struct String* English;
    struct String* French;
    struct String* Italian;
    struct String* German;
    struct String* Spanish;
    struct String* Japanese;
    struct String* Portuguese;
    struct String* Chinese;
    struct String* Russian;
    struct String* TraditionalChinese;
    struct String* Czech;
    struct String* Danish;
    struct String* Dutch;
    struct String* Finnish;
    struct String* Hungarian;
    struct String* Korean;
    struct String* Norwegian;
    struct String* Polish;
    struct String* SpanishSpain;
    struct String* Swedish;
    struct String* Turkish;
    EmotionType__Enum Emotion;

    struct SoundProvider* Sound;
    struct Event_1* WWiseEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TranslatedMessageProvider_MessageItem__Fields_FWDDECL)
#include <Modloader/app/structs/TranslatedMessageProvider_MessageItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TranslatedMessageProvider_MessageItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
