#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptor_DEFINED)
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyDescriptor_DEFINED
struct PropertyDescriptor__Class;
struct PropertyDescriptor {
    struct PropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct PropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_PropertyDescriptor_FWDDECL
#include <Modloader/app/structs/PropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_PropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/PropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
