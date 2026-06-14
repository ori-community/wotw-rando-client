#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethodInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodInfo_DEFINED)
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#if defined(IL2CPP_STRUCT_MethodAttributes__Enum_DEFINED) && defined(IL2CPP_STRUCT_MethodImplAttributes__Enum_DEFINED) && defined(IL2CPP_STRUCT_CallingConventions__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoMethodInfo_DEFINED
struct Type;
struct MonoMethodInfo {
    struct Type* parent;
    struct Type* ret;
    MethodAttributes__Enum attrs;

    MethodImplAttributes__Enum iattrs;

    CallingConventions__Enum callconv;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoMethodInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoMethodInfo_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MonoMethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethodInfo_FWDDECL)
#include <Modloader/app/structs/MonoMethodInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethodInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
