#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SoapServices__StaticFields_DEFINED
struct Hashtable;
struct SoapServices__StaticFields {
    struct Hashtable* _xmlTypes;
    struct Hashtable* _xmlElements;
    struct Hashtable* _soapActions;
    struct Hashtable* _soapActionsMethods;
    struct Hashtable* _typeInfos;
};
#endif
#if !defined(IL2CPP_STRUCT_SoapServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SoapServices__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_SoapServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SoapServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/SoapServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
