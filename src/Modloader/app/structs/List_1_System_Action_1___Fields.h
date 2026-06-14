#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_List_1_System_Action_1___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_List_1_System_Action_1___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_System_Action_1___Fields_DEFINED)
#define IL2CPP_STRUCT_List_1_System_Action_1___Fields_DEFINED
struct Action_1_Damage___Array;
struct Object;
struct __declspec(align(8)) List_1_System_Action_1___Fields {
    struct Action_1_Damage___Array* _items;
    int32_t _size;
    int32_t _version;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_List_1_System_Action_1___Fields_FWDDECL)
#define IL2CPP_STRUCT_List_1_System_Action_1___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage___Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_List_1_System_Action_1___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_List_1_System_Action_1___Fields_DEFINED) && !defined(IL2CPP_STRUCT_List_1_System_Action_1___Fields_FWDDECL)
#include <Modloader/app/structs/List_1_System_Action_1___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/List_1_System_Action_1___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
