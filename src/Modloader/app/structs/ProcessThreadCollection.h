#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessThreadCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessThreadCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessThreadCollection_DEFINED)
#include <Modloader/app/structs/ProcessThreadCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ProcessThreadCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ProcessThreadCollection_DEFINED
struct ProcessThreadCollection__Class;
struct ProcessThreadCollection {
    struct ProcessThreadCollection__Class* klass;
    MonitorData* monitor;
    struct ProcessThreadCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProcessThreadCollection_FWDDECL)
#define IL2CPP_STRUCT_ProcessThreadCollection_FWDDECL
#include <Modloader/app/structs/ProcessThreadCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessThreadCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessThreadCollection_DEFINED) && !defined(IL2CPP_STRUCT_ProcessThreadCollection_FWDDECL)
#include <Modloader/app/structs/ProcessThreadCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessThreadCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
