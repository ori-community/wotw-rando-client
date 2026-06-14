#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_DEFINED
enum class MicroProfiler_MarkerInfo_FrameFlags__Enum : uint8_t {
    Inactive = 0x00,
    Begun = 0x01,
    Active = 0x02,
    Ended = 0x04,
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_MarkerInfo_FrameFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_MarkerInfo_FrameFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
