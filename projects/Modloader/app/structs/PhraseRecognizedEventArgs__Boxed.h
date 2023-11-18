#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/PhraseRecognizedEventArgs.h>
#if defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_DEFINED
struct PhraseRecognizedEventArgs__Class;
struct PhraseRecognizedEventArgs__Boxed {
    struct PhraseRecognizedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PhraseRecognizedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/PhraseRecognizedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PhraseRecognizedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/PhraseRecognizedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhraseRecognizedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
