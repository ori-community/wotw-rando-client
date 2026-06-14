#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtendedPropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtendedPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedPropertyDescriptor_DEFINED)
#include <Modloader/app/structs/ExtendedPropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_ExtendedPropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtendedPropertyDescriptor_DEFINED
struct ExtendedPropertyDescriptor__Class;
struct ExtendedPropertyDescriptor {
    struct ExtendedPropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct ExtendedPropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtendedPropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_ExtendedPropertyDescriptor_FWDDECL
#include <Modloader/app/structs/ExtendedPropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtendedPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtendedPropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_ExtendedPropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/ExtendedPropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtendedPropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
