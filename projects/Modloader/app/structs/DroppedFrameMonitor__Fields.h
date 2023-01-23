#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DroppedFrameMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DroppedFrameMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_DroppedFrameMonitor__Fields_DEFINED
struct List_1_DroppedFrameMonitor_TempData_;
struct __declspec(align(8)) DroppedFrameMonitor__Fields {
    int32_t DangerFrames;
    int32_t DroppedFrames_Single;
    int32_t DroppedFrames_Double;
    int32_t DroppedFrames_Triple;
    int32_t DroppedFrames_Multiple;
    int32_t m_dangerFrames;
    int32_t m_droppedFramesSingle;
    int32_t m_droppedFramesDouble;
    int32_t m_droppedFramesTriple;
    int32_t m_droppedFramesMultiple;
    float m_lastUpdateTime;
    struct List_1_DroppedFrameMonitor_TempData_* TempFrameData;
    int32_t m_index;
};
#endif
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DroppedFrameMonitor__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DroppedFrameMonitor_TempData_.h>
#endif
#undef IL2CPP_STRUCT_DroppedFrameMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DroppedFrameMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/DroppedFrameMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DroppedFrameMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
