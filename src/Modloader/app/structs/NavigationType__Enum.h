#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED)
#define IL2CPP_STRUCT_NavigationType__Enum_DEFINED
enum class NavigationType__Enum : int32_t {
    Air = 0x00000000,
    Ground = 0x00000001,
    Wall = 0x00000002,
    Ceiling = 0x00000003,
    Sand = 0x00000004,
    Water = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_NavigationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_NavigationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NavigationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NavigationType__Enum_FWDDECL)
#include <Modloader/app/structs/NavigationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
