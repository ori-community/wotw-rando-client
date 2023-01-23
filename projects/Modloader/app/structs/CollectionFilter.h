#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionFilter_DEFINED)
#include <Modloader/app/structs/CollectionFilter__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectionFilter_DEFINED
struct CollectionFilter__Class;
struct CollectionFilter {
    struct CollectionFilter__Class* klass;
    MonitorData* monitor;
    struct CollectionFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectionFilter_FWDDECL)
#define IL2CPP_STRUCT_CollectionFilter_FWDDECL
#include <Modloader/app/structs/CollectionFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionFilter_DEFINED) && !defined(IL2CPP_STRUCT_CollectionFilter_FWDDECL)
#include <Modloader/app/structs/CollectionFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
