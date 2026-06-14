#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Parser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Parser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser__Fields_DEFINED)
#define IL2CPP_STRUCT_Parser__Fields_DEFINED
struct SecurityDocument;
struct Tokenizer;
struct __declspec(align(8)) Parser__Fields {
    struct SecurityDocument* _doc;
    struct Tokenizer* _t;
};
#endif
#if !defined(IL2CPP_STRUCT_Parser__Fields_FWDDECL)
#define IL2CPP_STRUCT_Parser__Fields_FWDDECL
#include <Modloader/app/structs/SecurityDocument.h>
#include <Modloader/app/structs/Tokenizer.h>
#endif
#undef IL2CPP_STRUCT_Parser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Parser__Fields_FWDDECL)
#include <Modloader/app/structs/Parser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Parser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
