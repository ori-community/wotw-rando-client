#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderQueueRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderQueueRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderQueueRange_DEFINED)
#define IL2CPP_STRUCT_RenderQueueRange_DEFINED
struct RenderQueueRange {
    int32_t min;
    int32_t max;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderQueueRange_FWDDECL)
#define IL2CPP_STRUCT_RenderQueueRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderQueueRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderQueueRange_DEFINED) && !defined(IL2CPP_STRUCT_RenderQueueRange_FWDDECL)
#include <Modloader/app/structs/RenderQueueRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderQueueRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
