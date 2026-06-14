#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Glitch_TearingSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Glitch_TearingSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch_TearingSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_Glitch_TearingSettings__Fields_DEFINED
struct __declspec(align(8)) Glitch_TearingSettings__Fields {
    float Speed;
    float Intensity;
    float MaxDisplacement;
    bool AllowFlipping;
    bool YuvColorBleeding;
    float YuvOffset;
};
#endif
#if !defined(IL2CPP_STRUCT_Glitch_TearingSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_Glitch_TearingSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Glitch_TearingSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch_TearingSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Glitch_TearingSettings__Fields_FWDDECL)
#include <Modloader/app/structs/Glitch_TearingSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Glitch_TearingSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
