#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute_DEFINED)
#include <Modloader/app/structs/SoapTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapTypeAttribute_DEFINED
struct SoapTypeAttribute__Class;
struct SoapTypeAttribute {
    struct SoapTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct SoapTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_SoapTypeAttribute_FWDDECL
#include <Modloader/app/structs/SoapTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SoapTypeAttribute_FWDDECL)
#include <Modloader/app/structs/SoapTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
