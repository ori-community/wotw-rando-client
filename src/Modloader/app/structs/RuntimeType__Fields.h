#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType__Fields_DEFINED)
#include <Modloader/app/structs/TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeType__Fields_DEFINED
struct MonoTypeInfo;
struct Object;
struct RuntimeConstructorInfo;
struct RuntimeType__Fields {
    struct TypeInfo__Fields _;
    struct MonoTypeInfo* type_info;
    struct Object* GenericCache;
    struct RuntimeConstructorInfo* m_serializationCtor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeType__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeType__Fields_FWDDECL
#include <Modloader/app/structs/MonoTypeInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#endif
#undef IL2CPP_STRUCT_RuntimeType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeType__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
