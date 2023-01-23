#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapMethodAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute_DEFINED)
#include <Modloader/app/structs/SoapMethodAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapMethodAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapMethodAttribute_DEFINED
struct SoapMethodAttribute__Class;
struct SoapMethodAttribute {
    struct SoapMethodAttribute__Class* klass;
    MonitorData* monitor;
    struct SoapMethodAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute_FWDDECL)
#define IL2CPP_STRUCT_SoapMethodAttribute_FWDDECL
#include <Modloader/app/structs/SoapMethodAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapMethodAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SoapMethodAttribute_FWDDECL)
#include <Modloader/app/structs/SoapMethodAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapMethodAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
