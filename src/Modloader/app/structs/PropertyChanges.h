#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChanges_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChanges_DEFINED)
#include <Modloader/app/structs/PropertyChanges__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyChanges__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChanges_DEFINED
struct PropertyChanges__Class;
struct PropertyChanges {
    struct PropertyChanges__Class* klass;
    MonitorData* monitor;
    struct PropertyChanges__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyChanges_FWDDECL)
#define IL2CPP_STRUCT_PropertyChanges_FWDDECL
#include <Modloader/app/structs/PropertyChanges__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChanges_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChanges_FWDDECL)
#include <Modloader/app/structs/PropertyChanges.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChanges.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
