#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_DEFINED
struct Hashtable;
struct __declspec(align(8)) SoapServices_TypeInfo__Fields {
    struct Hashtable* Attributes;
    struct Hashtable* Elements;
};
#endif
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SoapServices_TypeInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapServices_TypeInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
