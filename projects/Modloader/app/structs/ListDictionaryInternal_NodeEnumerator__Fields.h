#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_DEFINED
struct ListDictionaryInternal;
struct ListDictionaryInternal_DictionaryNode;
struct __declspec(align(8)) ListDictionaryInternal_NodeEnumerator__Fields {
    struct ListDictionaryInternal* list;
    struct ListDictionaryInternal_DictionaryNode* current;
    int32_t version;
    bool start;
};
#endif
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/ListDictionaryInternal.h>
#include <Modloader/app/structs/ListDictionaryInternal_DictionaryNode.h>
#endif
#undef IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListDictionaryInternal_NodeEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/ListDictionaryInternal_NodeEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListDictionaryInternal_NodeEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
