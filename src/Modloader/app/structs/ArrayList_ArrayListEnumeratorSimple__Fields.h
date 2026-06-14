#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_DEFINED
struct ArrayList;
struct Object;
struct __declspec(align(8)) ArrayList_ArrayListEnumeratorSimple__Fields {
    struct ArrayList* list;
    int32_t index;
    int32_t version;
    struct Object* currentElement;
    bool isArrayList;
};
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_ArrayListEnumeratorSimple__Fields_FWDDECL)
#include <Modloader/app/structs/ArrayList_ArrayListEnumeratorSimple__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList_ArrayListEnumeratorSimple__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
