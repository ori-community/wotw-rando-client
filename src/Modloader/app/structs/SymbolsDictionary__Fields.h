#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymbolsDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymbolsDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolsDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_SymbolsDictionary__Fields_DEFINED
struct Hashtable;
struct ArrayList;
struct Object;
struct __declspec(align(8)) SymbolsDictionary__Fields {
    int32_t last;
    struct Hashtable* names;
    struct Hashtable* wildcards;
    struct ArrayList* particles;
    struct Object* particleLast;
    bool isUpaEnforced;
};
#endif
#if !defined(IL2CPP_STRUCT_SymbolsDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_SymbolsDictionary__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_SymbolsDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymbolsDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SymbolsDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/SymbolsDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymbolsDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
