#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletVertexMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletVertexMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletVertexMetaData_DEFINED)
#include <Modloader/app/structs/VerletVertexMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_VerletVertexMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletVertexMetaData_DEFINED
struct VerletVertexMetaData__Class;
struct VerletVertexMetaData {
    struct VerletVertexMetaData__Class* klass;
    MonitorData* monitor;
    struct VerletVertexMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletVertexMetaData_FWDDECL)
#define IL2CPP_STRUCT_VerletVertexMetaData_FWDDECL
#include <Modloader/app/structs/VerletVertexMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletVertexMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletVertexMetaData_DEFINED) && !defined(IL2CPP_STRUCT_VerletVertexMetaData_FWDDECL)
#include <Modloader/app/structs/VerletVertexMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletVertexMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
