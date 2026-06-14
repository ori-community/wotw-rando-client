#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhraseRecognizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhraseRecognizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizer__Fields_DEFINED)
#define IL2CPP_STRUCT_PhraseRecognizer__Fields_DEFINED
struct PhraseRecognizer_PhraseRecognizedDelegate;
struct __declspec(align(8)) PhraseRecognizer__Fields {
    void* m_Recognizer;
    struct PhraseRecognizer_PhraseRecognizedDelegate* OnPhraseRecognized;
};
#endif
#if !defined(IL2CPP_STRUCT_PhraseRecognizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhraseRecognizer__Fields_FWDDECL
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate.h>
#endif
#undef IL2CPP_STRUCT_PhraseRecognizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhraseRecognizer__Fields_FWDDECL)
#include <Modloader/app/structs/PhraseRecognizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhraseRecognizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
