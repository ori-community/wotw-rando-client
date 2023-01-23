#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableGraph_DEFINED)
#define IL2CPP_STRUCT_PlayableGraph_DEFINED
struct PlayableGraph {
    void* m_Handle;
    uint32_t m_Version;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayableGraph_FWDDECL)
#define IL2CPP_STRUCT_PlayableGraph_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayableGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableGraph_DEFINED) && !defined(IL2CPP_STRUCT_PlayableGraph_FWDDECL)
#include <Modloader/app/structs/PlayableGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
