#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HybridDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HybridDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HybridDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_HybridDictionary__Fields_DEFINED
struct ListDictionary;
struct Hashtable;
struct __declspec(align(8)) HybridDictionary__Fields {
    struct ListDictionary* list;
    struct Hashtable* hashtable;
    bool caseInsensitive;
};
#endif
#if !defined(IL2CPP_STRUCT_HybridDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_HybridDictionary__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ListDictionary.h>
#endif
#undef IL2CPP_STRUCT_HybridDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HybridDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HybridDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/HybridDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HybridDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
