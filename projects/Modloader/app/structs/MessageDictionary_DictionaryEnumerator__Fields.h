#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_DEFINED
struct MessageDictionary;
struct IDictionaryEnumerator;
struct __declspec(align(8)) MessageDictionary_DictionaryEnumerator__Fields {
    struct MessageDictionary* _methodDictionary;
    struct IDictionaryEnumerator* _hashtableEnum;
    int32_t _posMethod;
};
#endif
#if !defined(IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/MessageDictionary.h>
#endif
#undef IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageDictionary_DictionaryEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/MessageDictionary_DictionaryEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageDictionary_DictionaryEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
