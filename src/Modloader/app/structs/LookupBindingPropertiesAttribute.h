#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupBindingPropertiesAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupBindingPropertiesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupBindingPropertiesAttribute_DEFINED)
#include <Modloader/app/structs/LookupBindingPropertiesAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_LookupBindingPropertiesAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupBindingPropertiesAttribute_DEFINED
struct LookupBindingPropertiesAttribute__Class;
struct LookupBindingPropertiesAttribute {
    struct LookupBindingPropertiesAttribute__Class* klass;
    MonitorData* monitor;
    struct LookupBindingPropertiesAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupBindingPropertiesAttribute_FWDDECL)
#define IL2CPP_STRUCT_LookupBindingPropertiesAttribute_FWDDECL
#include <Modloader/app/structs/LookupBindingPropertiesAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_LookupBindingPropertiesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupBindingPropertiesAttribute_DEFINED) && !defined(IL2CPP_STRUCT_LookupBindingPropertiesAttribute_FWDDECL)
#include <Modloader/app/structs/LookupBindingPropertiesAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupBindingPropertiesAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
