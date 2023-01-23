#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_ListDictionary__Fields_DEFINED
struct ListDictionary_DictionaryNode;
struct IComparer;
struct Object;
struct __declspec(align(8)) ListDictionary__Fields {
    struct ListDictionary_DictionaryNode* head;
    int32_t version;
    int32_t count;
    struct IComparer* comparer;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_ListDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListDictionary__Fields_FWDDECL
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/ListDictionary_DictionaryNode.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ListDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/ListDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
