#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRSubmitFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRSubmitFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRSubmitFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRSubmitFlags__Enum_DEFINED
enum class EVRSubmitFlags__Enum : int32_t {
    Submit_Default = 0x00000000,
    Submit_LensDistortionAlreadyApplied = 0x00000001,
    Submit_GlRenderBuffer = 0x00000002,
    Submit_Reserved = 0x00000004,
    Submit_TextureWithPose = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRSubmitFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRSubmitFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRSubmitFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRSubmitFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRSubmitFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EVRSubmitFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRSubmitFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
