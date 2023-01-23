#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject__StaticFields_DEFINED
struct MethodInfo_1;
struct Object;
struct ExpandoObject__StaticFields {
    struct MethodInfo_1* ExpandoTryGetValue;
    struct MethodInfo_1* ExpandoTrySetValue;
    struct MethodInfo_1* ExpandoTryDeleteValue;
    struct MethodInfo_1* ExpandoPromoteClass;
    struct MethodInfo_1* ExpandoCheckVersion;
    struct Object* Uninitialized;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject__StaticFields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject__StaticFields_FWDDECL)
#include <Modloader/app/structs/ExpandoObject__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
