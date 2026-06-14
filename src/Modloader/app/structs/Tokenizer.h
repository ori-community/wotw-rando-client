#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokenizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_DEFINED)
#include <Modloader/app/structs/Tokenizer__Fields.h>
#if defined(IL2CPP_STRUCT_Tokenizer__Fields_DEFINED)
#define IL2CPP_STRUCT_Tokenizer_DEFINED
struct Tokenizer__Class;
struct Tokenizer {
    struct Tokenizer__Class* klass;
    MonitorData* monitor;
    struct Tokenizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tokenizer_FWDDECL)
#define IL2CPP_STRUCT_Tokenizer_FWDDECL
#include <Modloader/app/structs/Tokenizer__Class.h>
#endif
#undef IL2CPP_STRUCT_Tokenizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_DEFINED) && !defined(IL2CPP_STRUCT_Tokenizer_FWDDECL)
#include <Modloader/app/structs/Tokenizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokenizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
