#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapServices_TypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapServices_TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo_DEFINED)
#include <Modloader/app/structs/SoapServices_TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SoapServices_TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapServices_TypeInfo_DEFINED
struct SoapServices_TypeInfo__Class;
struct SoapServices_TypeInfo {
    struct SoapServices_TypeInfo__Class* klass;
    MonitorData* monitor;
    struct SoapServices_TypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo_FWDDECL)
#define IL2CPP_STRUCT_SoapServices_TypeInfo_FWDDECL
#include <Modloader/app/structs/SoapServices_TypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapServices_TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapServices_TypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_SoapServices_TypeInfo_FWDDECL)
#include <Modloader/app/structs/SoapServices_TypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapServices_TypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
