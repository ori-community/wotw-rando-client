#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullableConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullableConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_NullableConverter__Fields_DEFINED
struct Type;
struct TypeConverter;
struct __declspec(align(8)) NullableConverter__Fields {
    struct Type* nullableType;
    struct Type* simpleType;
    struct TypeConverter* simpleTypeConverter;
};
#endif
#if !defined(IL2CPP_STRUCT_NullableConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_NullableConverter__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#endif
#undef IL2CPP_STRUCT_NullableConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NullableConverter__Fields_FWDDECL)
#include <Modloader/app/structs/NullableConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullableConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
