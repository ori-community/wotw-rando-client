#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdge_DEFINED)
#include <Modloader/app/structs/VerletEdge__Fields.h>
#if defined(IL2CPP_STRUCT_VerletEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletEdge_DEFINED
struct VerletEdge__Class;
struct VerletEdge {
    struct VerletEdge__Class* klass;
    MonitorData* monitor;
    struct VerletEdge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletEdge_FWDDECL)
#define IL2CPP_STRUCT_VerletEdge_FWDDECL
#include <Modloader/app/structs/VerletEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletEdge_DEFINED) && !defined(IL2CPP_STRUCT_VerletEdge_FWDDECL)
#include <Modloader/app/structs/VerletEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
