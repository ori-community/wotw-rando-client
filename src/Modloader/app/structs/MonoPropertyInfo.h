#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoPropertyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoPropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo_DEFINED)
#include <Modloader/app/structs/PropertyAttributes__Enum.h>
#if defined(IL2CPP_STRUCT_PropertyAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoPropertyInfo_DEFINED
struct Type;
struct String;
struct MethodInfo_1;
struct MonoPropertyInfo {
    struct Type* parent;
    struct Type* declaring_type;
    struct String* name;
    struct MethodInfo_1* get_method;
    struct MethodInfo_1* set_method;
    PropertyAttributes__Enum attrs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoPropertyInfo_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MonoPropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoPropertyInfo_FWDDECL)
#include <Modloader/app/structs/MonoPropertyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoPropertyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
