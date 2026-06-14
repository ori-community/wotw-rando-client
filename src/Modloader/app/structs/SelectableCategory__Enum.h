#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectableCategory__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectableCategory__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectableCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_SelectableCategory__Enum_DEFINED
enum class SelectableCategory__Enum : int32_t {
    Default = 0x00000000,
    Camera = 0x00000001,
    Audio = 0x00000002,
    Streaming = 0x00000004,
    Other = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_SelectableCategory__Enum_FWDDECL)
#define IL2CPP_STRUCT_SelectableCategory__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SelectableCategory__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectableCategory__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SelectableCategory__Enum_FWDDECL)
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
