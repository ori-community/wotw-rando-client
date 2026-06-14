#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhraseRecognizedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs_DEFINED)
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_ConfidenceLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs_DEFINED
struct SemanticMeaning__Array;
struct String;
struct PhraseRecognizedEventArgs {
    ConfidenceLevel__Enum confidence;

    struct SemanticMeaning__Array* semanticMeanings;
    struct String* text;
    struct DateTime phraseStartTime;
    struct TimeSpan phraseDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs_FWDDECL
#include <Modloader/app/structs/SemanticMeaning__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PhraseRecognizedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs_FWDDECL)
#include <Modloader/app/structs/PhraseRecognizedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhraseRecognizedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
