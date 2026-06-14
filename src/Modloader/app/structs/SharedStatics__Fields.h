#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedStatics__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedStatics__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStatics__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedStatics__Fields_DEFINED
struct Tokenizer_StringMaker;
struct __declspec(align(8)) SharedStatics__Fields {
    struct Tokenizer_StringMaker* _maker;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedStatics__Fields_FWDDECL)
#define IL2CPP_STRUCT_SharedStatics__Fields_FWDDECL
#include <Modloader/app/structs/Tokenizer_StringMaker.h>
#endif
#undef IL2CPP_STRUCT_SharedStatics__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStatics__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SharedStatics__Fields_FWDDECL)
#include <Modloader/app/structs/SharedStatics__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedStatics__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
