#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DictionaryEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DictionaryEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionaryEntry_DEFINED)
#define IL2CPP_STRUCT_DictionaryEntry_DEFINED
struct Object;
struct DictionaryEntry {
    struct Object* _key;
    struct Object* _value;
};
#endif
#if !defined(IL2CPP_STRUCT_DictionaryEntry_FWDDECL)
#define IL2CPP_STRUCT_DictionaryEntry_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_DictionaryEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DictionaryEntry_DEFINED) && !defined(IL2CPP_STRUCT_DictionaryEntry_FWDDECL)
#include <Modloader/app/structs/DictionaryEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DictionaryEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
