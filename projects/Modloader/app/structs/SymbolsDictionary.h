#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymbolsDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymbolsDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolsDictionary_DEFINED)
#include <Modloader/app/structs/SymbolsDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_SymbolsDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_SymbolsDictionary_DEFINED
struct SymbolsDictionary__Class;
struct SymbolsDictionary {
    struct SymbolsDictionary__Class* klass;
    MonitorData* monitor;
    struct SymbolsDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymbolsDictionary_FWDDECL)
#define IL2CPP_STRUCT_SymbolsDictionary_FWDDECL
#include <Modloader/app/structs/SymbolsDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_SymbolsDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolsDictionary_DEFINED) && !defined(IL2CPP_STRUCT_SymbolsDictionary_FWDDECL)
#include <Modloader/app/structs/SymbolsDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymbolsDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
