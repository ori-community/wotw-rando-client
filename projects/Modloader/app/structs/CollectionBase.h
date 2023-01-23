#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionBase_DEFINED)
#include <Modloader/app/structs/CollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectionBase_DEFINED
struct CollectionBase__Class;
struct CollectionBase {
    struct CollectionBase__Class* klass;
    MonitorData* monitor;
    struct CollectionBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectionBase_FWDDECL)
#define IL2CPP_STRUCT_CollectionBase_FWDDECL
#include <Modloader/app/structs/CollectionBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionBase_DEFINED) && !defined(IL2CPP_STRUCT_CollectionBase_FWDDECL)
#include <Modloader/app/structs/CollectionBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
