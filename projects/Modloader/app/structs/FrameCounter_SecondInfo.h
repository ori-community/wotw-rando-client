#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCounter_SecondInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED
struct FrameCounter_SecondInfo {
    int32_t m_profilerStartFrame;
    int32_t m_profilerEndFrame;
    int32_t m_index;
    float m_startTime;
    float m_endTime;
    int32_t m_updateCount;
    float m_deltaTimeSum;
    int32_t m_fixedUpdateCount;
    float m_fixedDeltaTimeSum;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_FWDDECL)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_FrameCounter_SecondInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED) && !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_FWDDECL)
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
