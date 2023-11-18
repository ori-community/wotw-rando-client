#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapAttribute_DEFINED)
#include <Modloader/app/structs/SoapAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapAttribute_DEFINED
struct SoapAttribute__Class;
struct SoapAttribute {
    struct SoapAttribute__Class* klass;
    MonitorData* monitor;
    struct SoapAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapAttribute_FWDDECL)
#define IL2CPP_STRUCT_SoapAttribute_FWDDECL
#include <Modloader/app/structs/SoapAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SoapAttribute_FWDDECL)
#include <Modloader/app/structs/SoapAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
