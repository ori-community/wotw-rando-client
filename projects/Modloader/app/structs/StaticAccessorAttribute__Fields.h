#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticAccessorAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticAccessorAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute__Fields_DEFINED)
#include <Modloader/app/structs/StaticAccessorType__Enum.h>
#if defined(IL2CPP_STRUCT_StaticAccessorType__Enum_DEFINED)
#define IL2CPP_STRUCT_StaticAccessorAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) StaticAccessorAttribute__Fields {
    struct String* _Name_k__BackingField;
    StaticAccessorType__Enum _Type_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticAccessorAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StaticAccessorAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticAccessorAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticAccessorAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/StaticAccessorAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticAccessorAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
