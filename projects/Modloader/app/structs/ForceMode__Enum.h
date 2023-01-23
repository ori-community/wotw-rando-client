#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForceMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ForceMode__Enum_DEFINED
enum class ForceMode__Enum : int32_t {
    Force = 0x00000000,
    Acceleration = 0x00000005,
    Impulse = 0x00000001,
    VelocityChange = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_ForceMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_ForceMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ForceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ForceMode__Enum_FWDDECL)
#include <Modloader/app/structs/ForceMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForceMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
