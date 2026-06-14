#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultBindingPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultBindingPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBindingPropertyAttribute_DEFINED)
#include <Modloader/app/structs/DefaultBindingPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultBindingPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultBindingPropertyAttribute_DEFINED
struct DefaultBindingPropertyAttribute__Class;
struct DefaultBindingPropertyAttribute {
    struct DefaultBindingPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultBindingPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultBindingPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultBindingPropertyAttribute_FWDDECL
#include <Modloader/app/structs/DefaultBindingPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultBindingPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBindingPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultBindingPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultBindingPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultBindingPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
