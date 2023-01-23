#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameGraph_DEFINED)
#include <Modloader/app/structs/FrameGraph__Fields.h>
#if defined(IL2CPP_STRUCT_FrameGraph__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameGraph_DEFINED
struct FrameGraph__Class;
struct FrameGraph {
    struct FrameGraph__Class* klass;
    MonitorData* monitor;
    struct FrameGraph__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameGraph_FWDDECL)
#define IL2CPP_STRUCT_FrameGraph_FWDDECL
#include <Modloader/app/structs/FrameGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameGraph_DEFINED) && !defined(IL2CPP_STRUCT_FrameGraph_FWDDECL)
#include <Modloader/app/structs/FrameGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
