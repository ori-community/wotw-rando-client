#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_DEFINED)
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_DEFINED
struct ExtenderProvidedPropertyAttribute__Class;
struct ExtenderProvidedPropertyAttribute {
    struct ExtenderProvidedPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct ExtenderProvidedPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_FWDDECL
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
