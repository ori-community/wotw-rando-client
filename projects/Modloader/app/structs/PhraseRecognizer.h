#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhraseRecognizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhraseRecognizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizer_DEFINED)
#include <Modloader/app/structs/PhraseRecognizer__Fields.h>
#if defined(IL2CPP_STRUCT_PhraseRecognizer__Fields_DEFINED)
#define IL2CPP_STRUCT_PhraseRecognizer_DEFINED
struct PhraseRecognizer__Class;
struct PhraseRecognizer {
    struct PhraseRecognizer__Class* klass;
    MonitorData* monitor;
    struct PhraseRecognizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhraseRecognizer_FWDDECL)
#define IL2CPP_STRUCT_PhraseRecognizer_FWDDECL
#include <Modloader/app/structs/PhraseRecognizer__Class.h>
#endif
#undef IL2CPP_STRUCT_PhraseRecognizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizer_DEFINED) && !defined(IL2CPP_STRUCT_PhraseRecognizer_FWDDECL)
#include <Modloader/app/structs/PhraseRecognizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhraseRecognizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
