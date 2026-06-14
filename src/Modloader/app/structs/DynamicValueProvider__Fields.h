#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicValueProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicValueProvider__Fields_DEFINED
struct MemberInfo_1;
struct Func_2_Object_Object_;
struct Action_2_Object_Object_;
struct __declspec(align(8)) DynamicValueProvider__Fields {
    struct MemberInfo_1* _memberInfo;
    struct Func_2_Object_Object_* _getter;
    struct Action_2_Object_Object_* _setter;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicValueProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicValueProvider__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#endif
#undef IL2CPP_STRUCT_DynamicValueProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicValueProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicValueProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicValueProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicValueProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
