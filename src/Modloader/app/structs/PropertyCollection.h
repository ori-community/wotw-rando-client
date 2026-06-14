#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyCollection_DEFINED)
#include <Modloader/app/structs/PropertyCollection__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyCollection_DEFINED
struct PropertyCollection__Class;
struct PropertyCollection {
    struct PropertyCollection__Class* klass;
    MonitorData* monitor;
    struct PropertyCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyCollection_FWDDECL)
#define IL2CPP_STRUCT_PropertyCollection_FWDDECL
#include <Modloader/app/structs/PropertyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyCollection_DEFINED) && !defined(IL2CPP_STRUCT_PropertyCollection_FWDDECL)
#include <Modloader/app/structs/PropertyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
