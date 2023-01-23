#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendableMask__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendableMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED
enum class SuspendableMask__Enum : int32_t {
    None = 0x00000000,
    Default = 0x00000001,
    Ori = 0x00000002,
    UI = 0x00000004,
    Camera = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_SuspendableMask__Enum_FWDDECL)
#define IL2CPP_STRUCT_SuspendableMask__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SuspendableMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SuspendableMask__Enum_FWDDECL)
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
