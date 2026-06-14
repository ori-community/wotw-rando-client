#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictationRecognizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictationRecognizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationRecognizer_DEFINED)
#include <Modloader/app/structs/DictationRecognizer__Fields.h>
#if defined(IL2CPP_STRUCT_DictationRecognizer__Fields_DEFINED)
#define IL2CPP_STRUCT_DictationRecognizer_DEFINED
struct DictationRecognizer__Class;
struct DictationRecognizer {
    struct DictationRecognizer__Class* klass;
    MonitorData* monitor;
    struct DictationRecognizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DictationRecognizer_FWDDECL)
#define IL2CPP_STRUCT_DictationRecognizer_FWDDECL
#include <Modloader/app/structs/DictationRecognizer__Class.h>
#endif
#undef IL2CPP_STRUCT_DictationRecognizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictationRecognizer_DEFINED) && !defined(IL2CPP_STRUCT_DictationRecognizer_FWDDECL)
#include <Modloader/app/structs/DictationRecognizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictationRecognizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
