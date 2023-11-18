#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeProviderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeProviderAttribute_DEFINED)
#include <Modloader/app/structs/AttributeProviderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AttributeProviderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributeProviderAttribute_DEFINED
struct AttributeProviderAttribute__Class;
struct AttributeProviderAttribute {
    struct AttributeProviderAttribute__Class* klass;
    MonitorData* monitor;
    struct AttributeProviderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributeProviderAttribute_FWDDECL)
#define IL2CPP_STRUCT_AttributeProviderAttribute_FWDDECL
#include <Modloader/app/structs/AttributeProviderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeProviderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AttributeProviderAttribute_FWDDECL)
#include <Modloader/app/structs/AttributeProviderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeProviderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
