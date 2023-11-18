#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasUpdate__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasUpdate__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdate__Enum_DEFINED)
#define IL2CPP_STRUCT_CanvasUpdate__Enum_DEFINED
enum class CanvasUpdate__Enum : int32_t {
    Prelayout = 0x00000000,
    Layout = 0x00000001,
    PostLayout = 0x00000002,
    PreRender = 0x00000003,
    LatePreRender = 0x00000004,
    MaxUpdateValue = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_CanvasUpdate__Enum_FWDDECL)
#define IL2CPP_STRUCT_CanvasUpdate__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CanvasUpdate__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdate__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CanvasUpdate__Enum_FWDDECL)
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
