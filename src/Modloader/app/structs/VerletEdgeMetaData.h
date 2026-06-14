#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletEdgeMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletEdgeMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdgeMetaData_DEFINED)
#include <Modloader/app/structs/VerletEdgeMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_VerletEdgeMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletEdgeMetaData_DEFINED
struct VerletEdgeMetaData__Class;
struct VerletEdgeMetaData {
    struct VerletEdgeMetaData__Class* klass;
    MonitorData* monitor;
    struct VerletEdgeMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletEdgeMetaData_FWDDECL)
#define IL2CPP_STRUCT_VerletEdgeMetaData_FWDDECL
#include <Modloader/app/structs/VerletEdgeMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletEdgeMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdgeMetaData_DEFINED) && !defined(IL2CPP_STRUCT_VerletEdgeMetaData_FWDDECL)
#include <Modloader/app/structs/VerletEdgeMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletEdgeMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
