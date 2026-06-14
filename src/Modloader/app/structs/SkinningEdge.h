#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinningEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinningEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningEdge_DEFINED)
#include <Modloader/app/structs/SkinningEdge__Fields.h>
#if defined(IL2CPP_STRUCT_SkinningEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_SkinningEdge_DEFINED
struct SkinningEdge__Class;
struct SkinningEdge {
    struct SkinningEdge__Class* klass;
    MonitorData* monitor;
    struct SkinningEdge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinningEdge_FWDDECL)
#define IL2CPP_STRUCT_SkinningEdge_FWDDECL
#include <Modloader/app/structs/SkinningEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_SkinningEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningEdge_DEFINED) && !defined(IL2CPP_STRUCT_SkinningEdge_FWDDECL)
#include <Modloader/app/structs/SkinningEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinningEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
