#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DfaContentValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DfaContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DfaContentValidator__Fields_DEFINED)
#include <Modloader/app/structs/ContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_DfaContentValidator__Fields_DEFINED
struct Int32__Array__Array;
struct SymbolsDictionary;
struct DfaContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct Int32__Array__Array* transitionTable;
    struct SymbolsDictionary* symbols;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DfaContentValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DfaContentValidator__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#endif
#undef IL2CPP_STRUCT_DfaContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DfaContentValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DfaContentValidator__Fields_FWDDECL)
#include <Modloader/app/structs/DfaContentValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DfaContentValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
