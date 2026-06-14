#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMember__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionMember__Fields_DEFINED
struct Type;
struct Func_2_Object_Object_;
struct Action_2_Object_Object_;
struct __declspec(align(8)) ReflectionMember__Fields {
    struct Type* _MemberType_k__BackingField;
    struct Func_2_Object_Object_* _Getter_k__BackingField;
    struct Action_2_Object_Object_* _Setter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectionMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectionMember__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ReflectionMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionMember__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectionMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
