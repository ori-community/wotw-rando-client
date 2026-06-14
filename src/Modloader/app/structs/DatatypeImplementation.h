#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatatypeImplementation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatatypeImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_DEFINED)
#include <Modloader/app/structs/DatatypeImplementation__Fields.h>
#if defined(IL2CPP_STRUCT_DatatypeImplementation__Fields_DEFINED)
#define IL2CPP_STRUCT_DatatypeImplementation_DEFINED
struct DatatypeImplementation__Class;
struct DatatypeImplementation {
    struct DatatypeImplementation__Class* klass;
    MonitorData* monitor;
    struct DatatypeImplementation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_FWDDECL)
#define IL2CPP_STRUCT_DatatypeImplementation_FWDDECL
#include <Modloader/app/structs/DatatypeImplementation__Class.h>
#endif
#undef IL2CPP_STRUCT_DatatypeImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_DEFINED) && !defined(IL2CPP_STRUCT_DatatypeImplementation_FWDDECL)
#include <Modloader/app/structs/DatatypeImplementation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatatypeImplementation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
