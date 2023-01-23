#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_DEFINED
struct MicroProfilerGraph_MarkerCache {
    int32_t StartFrame;
    int32_t EndFrame;
    int32_t Count;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_FWDDECL
#endif
#undef IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerGraph_MarkerCache_FWDDECL)
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
