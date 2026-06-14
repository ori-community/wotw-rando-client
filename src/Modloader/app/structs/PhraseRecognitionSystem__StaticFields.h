#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_DEFINED
struct PhraseRecognitionSystem_ErrorDelegate;
struct PhraseRecognitionSystem_StatusDelegate;
struct PhraseRecognitionSystem__StaticFields {
    struct PhraseRecognitionSystem_ErrorDelegate* OnError;
    struct PhraseRecognitionSystem_StatusDelegate* OnStatusChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/PhraseRecognitionSystem_ErrorDelegate.h>
#include <Modloader/app/structs/PhraseRecognitionSystem_StatusDelegate.h>
#endif
#undef IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PhraseRecognitionSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/PhraseRecognitionSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhraseRecognitionSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
