#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__DEFINED)
#define IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__DEFINED
struct Type;
struct Object;
struct KeyValuePair_2_System_Type_System_Object_ {
    struct Type* key;
    struct Object* value;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__FWDDECL)
#define IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePair_2_System_Type_System_Object__FWDDECL)
#include <Modloader/app/structs/KeyValuePair_2_System_Type_System_Object_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePair_2_System_Type_System_Object_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
