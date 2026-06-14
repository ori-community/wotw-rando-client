#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletVertex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletVertex_DEFINED)
#include <Modloader/app/structs/VerletVertex__Fields.h>
#if defined(IL2CPP_STRUCT_VerletVertex__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletVertex_DEFINED
struct VerletVertex__Class;
struct VerletVertex {
    struct VerletVertex__Class* klass;
    MonitorData* monitor;
    struct VerletVertex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletVertex_FWDDECL)
#define IL2CPP_STRUCT_VerletVertex_FWDDECL
#include <Modloader/app/structs/VerletVertex__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletVertex_DEFINED) && !defined(IL2CPP_STRUCT_VerletVertex_FWDDECL)
#include <Modloader/app/structs/VerletVertex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletVertex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
