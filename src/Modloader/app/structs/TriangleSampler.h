#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleSampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleSampler_DEFINED)
#include <Modloader/app/structs/TriangleSampler__Fields.h>
#if defined(IL2CPP_STRUCT_TriangleSampler__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleSampler_DEFINED
struct TriangleSampler__Class;
struct TriangleSampler {
    struct TriangleSampler__Class* klass;
    MonitorData* monitor;
    struct TriangleSampler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriangleSampler_FWDDECL)
#define IL2CPP_STRUCT_TriangleSampler_FWDDECL
#include <Modloader/app/structs/TriangleSampler__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleSampler_DEFINED) && !defined(IL2CPP_STRUCT_TriangleSampler_FWDDECL)
#include <Modloader/app/structs/TriangleSampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleSampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
