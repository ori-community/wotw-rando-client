#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compositor_CumulativeStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compositor_CumulativeStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats_DEFINED)
#define IL2CPP_STRUCT_Compositor_CumulativeStats_DEFINED
struct Compositor_CumulativeStats {
    uint32_t m_nPid;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nNumReprojectedFrames;
    uint32_t m_nNumFramePresentsOnStartup;
    uint32_t m_nNumDroppedFramesOnStartup;
    uint32_t m_nNumReprojectedFramesOnStartup;
    uint32_t m_nNumLoading;
    uint32_t m_nNumFramePresentsLoading;
    uint32_t m_nNumDroppedFramesLoading;
    uint32_t m_nNumReprojectedFramesLoading;
    uint32_t m_nNumTimedOut;
    uint32_t m_nNumFramePresentsTimedOut;
    uint32_t m_nNumDroppedFramesTimedOut;
    uint32_t m_nNumReprojectedFramesTimedOut;
};
#endif
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats_FWDDECL)
#define IL2CPP_STRUCT_Compositor_CumulativeStats_FWDDECL
#endif
#undef IL2CPP_STRUCT_Compositor_CumulativeStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats_DEFINED) && !defined(IL2CPP_STRUCT_Compositor_CumulativeStats_FWDDECL)
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
