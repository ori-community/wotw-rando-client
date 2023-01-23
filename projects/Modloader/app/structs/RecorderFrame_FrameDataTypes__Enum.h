#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_DEFINED
enum class RecorderFrame_FrameDataTypes__Enum : int32_t {
    None = 0x00000000,
    InputData = 0x00000001,
    CameraData = 0x00000002,
    CharacterData = 0x00000003,
    LogCallbackData = 0x00000004,
    RecorderMessageData = 0x00000005,
    BuildData = 0x00000006,
    CheckpointData = 0x00000007,
    TransformRecorderData = 0x00000008,
    DeathsData = 0x00000009,
    FPSData = 0x0000000a,
    AnalogInputData = 0x0000000b,
    CursorInputData = 0x0000000c,
    AbilitiesData = 0x0000000d,
    EntityData = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RecorderFrame_FrameDataTypes__Enum_FWDDECL)
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
