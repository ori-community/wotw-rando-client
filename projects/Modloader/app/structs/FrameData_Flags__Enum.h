#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameData_Flags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameData_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_FrameData_Flags__Enum_DEFINED
enum class FrameData_Flags__Enum : int32_t {
    Evaluate = 0x00000001,
    SeekOccured = 0x00000002,
    Loop = 0x00000004,
    Hold = 0x00000008,
    EffectivePlayStateDelayed = 0x00000010,
    EffectivePlayStatePlaying = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_FrameData_Flags__Enum_FWDDECL)
#define IL2CPP_STRUCT_FrameData_Flags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FrameData_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData_Flags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FrameData_Flags__Enum_FWDDECL)
#include <Modloader/app/structs/FrameData_Flags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameData_Flags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
