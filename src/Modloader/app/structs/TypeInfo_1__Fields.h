#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeInfo_1__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) TypeInfo_1__Fields {
    struct String* serverType;
    struct String__Array* serverHierarchy;
    struct String__Array* interfacesImplemented;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TypeInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/TypeInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
