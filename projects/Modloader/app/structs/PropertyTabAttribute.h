#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyTabAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyTabAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyTabAttribute_DEFINED)
#include <Modloader/app/structs/PropertyTabAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyTabAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyTabAttribute_DEFINED
struct PropertyTabAttribute__Class;
struct PropertyTabAttribute {
    struct PropertyTabAttribute__Class* klass;
    MonitorData* monitor;
    struct PropertyTabAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyTabAttribute_FWDDECL)
#define IL2CPP_STRUCT_PropertyTabAttribute_FWDDECL
#include <Modloader/app/structs/PropertyTabAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyTabAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyTabAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PropertyTabAttribute_FWDDECL)
#include <Modloader/app/structs/PropertyTabAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyTabAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
