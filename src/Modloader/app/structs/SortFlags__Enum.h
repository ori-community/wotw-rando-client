#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SortFlags__Enum_DEFINED
enum class SortFlags__Enum : int32_t {
    None = 0x00000000,
    SortingLayer = 0x00000001,
    RenderQueue = 0x00000002,
    BackToFront = 0x00000004,
    QuantizedFrontToBack = 0x00000008,
    OptimizeStateChanges = 0x00000010,
    CanvasOrder = 0x00000020,
    RendererPriority = 0x00000040,
    CommonOpaque = 0x0000003b,
    CommonTransparent = 0x00000017,
};
#endif
#if !defined(IL2CPP_STRUCT_SortFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_SortFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SortFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SortFlags__Enum_FWDDECL)
#include <Modloader/app/structs/SortFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
