#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoapFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoapFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute_DEFINED)
#include <Modloader/app/structs/SoapFieldAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SoapFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SoapFieldAttribute_DEFINED
struct SoapFieldAttribute__Class;
struct SoapFieldAttribute {
    struct SoapFieldAttribute__Class* klass;
    MonitorData* monitor;
    struct SoapFieldAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_SoapFieldAttribute_FWDDECL
#include <Modloader/app/structs/SoapFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SoapFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoapFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SoapFieldAttribute_FWDDECL)
#include <Modloader/app/structs/SoapFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoapFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
