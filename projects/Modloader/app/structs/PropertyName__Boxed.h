#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyName__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyName__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyName__Boxed_DEFINED)
#include <Modloader/app/structs/PropertyName.h>
#if defined(IL2CPP_STRUCT_PropertyName_DEFINED)
#define IL2CPP_STRUCT_PropertyName__Boxed_DEFINED
struct PropertyName__Class;
struct PropertyName__Boxed {
    struct PropertyName__Class* klass;
    MonitorData* monitor;
    struct PropertyName fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyName__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PropertyName__Boxed_FWDDECL
#include <Modloader/app/structs/PropertyName__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyName__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyName__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PropertyName__Boxed_FWDDECL)
#include <Modloader/app/structs/PropertyName__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyName__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
