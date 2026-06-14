#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeType__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeType__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RuntimeType__StaticFields_DEFINED
struct RuntimeType;
struct Type__Array;
struct RuntimeType__StaticFields {
    struct RuntimeType* ValueType;
    struct RuntimeType* EnumType;
    struct RuntimeType* ObjectType;
    struct RuntimeType* StringType;
    struct RuntimeType* DelegateType;
    struct Type__Array* s_SICtorParamTypes;
    struct RuntimeType* s_typedRef;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeType__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeType__StaticFields_FWDDECL
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeType__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeType__StaticFields_FWDDECL)
#include <Modloader/app/structs/RuntimeType__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeType__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
