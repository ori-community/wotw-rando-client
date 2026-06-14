#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_DEFINED)
#define IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_DEFINED
enum class DroppedFrameMonitor_FrameState__Enum : int32_t {
    Good = 0x00000000,
    Danger = 0x00000001,
    Single = 0x00000002,
    Double = 0x00000003,
    Triple = 0x00000004,
    Multiple = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_FWDDECL)
#define IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FrameState__Enum_FWDDECL)
#include <Modloader/app/structs/DroppedFrameMonitor_FrameState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DroppedFrameMonitor_FrameState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
