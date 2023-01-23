#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_MarkerInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_DEFINED)
#include <Modloader/app/structs/MicroProfiler_MarkerInfo_FrameFlags__Enum.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FrameFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_DEFINED
struct MicroProfiler_MarkerInfo {
    MicroProfiler_MarkerInfo_FrameFlags__Enum m_frameFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_MicroProfiler_MarkerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_MarkerInfo_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
