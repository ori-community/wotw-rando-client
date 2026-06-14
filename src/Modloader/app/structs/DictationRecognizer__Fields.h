#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictationRecognizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictationRecognizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationRecognizer__Fields_DEFINED)
#define IL2CPP_STRUCT_DictationRecognizer__Fields_DEFINED
struct DictationRecognizer_DictationHypothesisDelegate;
struct DictationRecognizer_DictationResultDelegate;
struct DictationRecognizer_DictationCompletedDelegate;
struct DictationRecognizer_DictationErrorHandler;
struct __declspec(align(8)) DictationRecognizer__Fields {
    void* m_Recognizer;
    struct DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis;
    struct DictationRecognizer_DictationResultDelegate* DictationResult;
    struct DictationRecognizer_DictationCompletedDelegate* DictationComplete;
    struct DictationRecognizer_DictationErrorHandler* DictationError;
};
#endif
#if !defined(IL2CPP_STRUCT_DictationRecognizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_DictationRecognizer__Fields_FWDDECL
#include <Modloader/app/structs/DictationRecognizer_DictationCompletedDelegate.h>
#include <Modloader/app/structs/DictationRecognizer_DictationErrorHandler.h>
#include <Modloader/app/structs/DictationRecognizer_DictationHypothesisDelegate.h>
#include <Modloader/app/structs/DictationRecognizer_DictationResultDelegate.h>
#endif
#undef IL2CPP_STRUCT_DictationRecognizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationRecognizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DictationRecognizer__Fields_FWDDECL)
#include <Modloader/app/structs/DictationRecognizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictationRecognizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
