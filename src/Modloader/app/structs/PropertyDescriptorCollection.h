#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyDescriptorCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyDescriptorCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection_DEFINED)
#include <Modloader/app/structs/PropertyDescriptorCollection__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyDescriptorCollection_DEFINED
struct PropertyDescriptorCollection__Class;
struct PropertyDescriptorCollection {
    struct PropertyDescriptorCollection__Class* klass;
    MonitorData* monitor;
    struct PropertyDescriptorCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection_FWDDECL)
#define IL2CPP_STRUCT_PropertyDescriptorCollection_FWDDECL
#include <Modloader/app/structs/PropertyDescriptorCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyDescriptorCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection_DEFINED) && !defined(IL2CPP_STRUCT_PropertyDescriptorCollection_FWDDECL)
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
