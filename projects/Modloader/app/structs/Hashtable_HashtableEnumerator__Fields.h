#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_DEFINED
struct Hashtable;
struct Object;
struct __declspec(align(8)) Hashtable_HashtableEnumerator__Fields {
    struct Hashtable* hashtable;
    int32_t bucket;
    int32_t version;
    bool current;
    int32_t getObjectRetType;
    struct Object* currentKey;
    struct Object* currentValue;
};
#endif
#if !defined(IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Hashtable_HashtableEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/Hashtable_HashtableEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hashtable_HashtableEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
