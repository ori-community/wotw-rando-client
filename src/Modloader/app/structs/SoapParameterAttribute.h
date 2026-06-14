#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapParameterAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapParameterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapParameterAttribute_DEFINED)
#include <Modloader/app/structs/SoapParameterAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapParameterAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapParameterAttribute_DEFINED
struct SoapParameterAttribute__Class;
struct SoapParameterAttribute {
    struct SoapParameterAttribute__Class* klass;
    MonitorData* monitor;
    struct SoapParameterAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapParameterAttribute_FWDDECL)
#define IL2CPP_STRUCT_SoapParameterAttribute_FWDDECL
#include <Modloader/app/structs/SoapParameterAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapParameterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapParameterAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SoapParameterAttribute_FWDDECL)
#include <Modloader/app/structs/SoapParameterAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapParameterAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
