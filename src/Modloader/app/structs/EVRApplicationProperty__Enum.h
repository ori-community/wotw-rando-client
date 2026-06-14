#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRApplicationProperty__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRApplicationProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationProperty__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRApplicationProperty__Enum_DEFINED
enum class EVRApplicationProperty__Enum : int32_t {
    Name_String = 0x00000000,
    LaunchType_String = 0x0000000b,
    WorkingDirectory_String = 0x0000000c,
    BinaryPath_String = 0x0000000d,
    Arguments_String = 0x0000000e,
    URL_String = 0x0000000f,
    Description_String = 0x00000032,
    NewsURL_String = 0x00000033,
    ImagePath_String = 0x00000034,
    Source_String = 0x00000035,
    IsDashboardOverlay_Bool = 0x0000003c,
    IsTemplate_Bool = 0x0000003d,
    IsInstanced_Bool = 0x0000003e,
    IsInternal_Bool = 0x0000003f,
    WantsCompositorPauseInStandby_Bool = 0x00000040,
    LastLaunchTime_Uint64 = 0x00000046,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRApplicationProperty__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRApplicationProperty__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRApplicationProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationProperty__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRApplicationProperty__Enum_FWDDECL)
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
