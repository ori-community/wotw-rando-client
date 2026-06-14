#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_DEFINED)
#define IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_DEFINED
struct TypeIdentifier__Array;
struct Object;
struct __declspec(align(8)) List_1_System_TypeIdentifier___Fields {
    struct TypeIdentifier__Array* _items;
    int32_t _size;
    int32_t _version;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_FWDDECL)
#define IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TypeIdentifier__Array.h>
#endif
#undef IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_DEFINED) && !defined(IL2CPP_STRUCT_List_1_System_TypeIdentifier___Fields_FWDDECL)
#include <Modloader/app/structs/List_1_System_TypeIdentifier___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/List_1_System_TypeIdentifier___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
