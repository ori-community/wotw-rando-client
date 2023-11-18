#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__DEFINED)
#define IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__DEFINED
struct Type__Array;
struct Type;
struct RuntimeType_ListBuilder_1_Type_ {
    struct Type__Array* _items;
    struct Type* _item;
    int32_t _count;
    int32_t _capacity;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__FWDDECL)
#define IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__FWDDECL
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__DEFINED) && !defined(IL2CPP_STRUCT_RuntimeType_ListBuilder_1_Type__FWDDECL)
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_Type_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_Type_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
