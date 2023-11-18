#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_DEFINED
enum class AkGlobalCallbackLocation__Enum : int32_t {
    AkGlobalCallbackLocation_Register = 0x00000001,
    AkGlobalCallbackLocation_Begin = 0x00000002,
    AkGlobalCallbackLocation_PreProcessMessageQueueForRender = 0x00000004,
    AkGlobalCallbackLocation_PostMessagesProcessed = 0x00000008,
    AkGlobalCallbackLocation_BeginRender = 0x00000010,
    AkGlobalCallbackLocation_EndRender = 0x00000020,
    AkGlobalCallbackLocation_End = 0x00000040,
    AkGlobalCallbackLocation_Term = 0x00000080,
    AkGlobalCallbackLocation_Monitor = 0x00000100,
    AkGlobalCallbackLocation_MonitorRecap = 0x00000200,
    AkGlobalCallbackLocation_Num = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkGlobalCallbackLocation__Enum_FWDDECL)
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
