#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper_DEFINED)
#include <Modloader/app/structs/VertexHelper__Fields.h>
#if defined(IL2CPP_STRUCT_VertexHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexHelper_DEFINED
struct VertexHelper__Class;
struct VertexHelper {
    struct VertexHelper__Class* klass;
    MonitorData* monitor;
    struct VertexHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VertexHelper_FWDDECL)
#define IL2CPP_STRUCT_VertexHelper_FWDDECL
#include <Modloader/app/structs/VertexHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_VertexHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper_DEFINED) && !defined(IL2CPP_STRUCT_VertexHelper_FWDDECL)
#include <Modloader/app/structs/VertexHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
