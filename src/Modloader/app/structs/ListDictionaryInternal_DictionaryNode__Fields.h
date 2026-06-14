#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_DEFINED
struct Object;
struct ListDictionaryInternal_DictionaryNode;
struct __declspec(align(8)) ListDictionaryInternal_DictionaryNode__Fields {
    struct Object* key;
    struct Object* value;
    struct ListDictionaryInternal_DictionaryNode* next;
};
#endif
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_FWDDECL
#include <Modloader/app/structs/ListDictionaryInternal_DictionaryNode.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListDictionaryInternal_DictionaryNode__Fields_FWDDECL)
#include <Modloader/app/structs/ListDictionaryInternal_DictionaryNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListDictionaryInternal_DictionaryNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
