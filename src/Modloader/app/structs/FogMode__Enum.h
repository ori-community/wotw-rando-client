#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FogMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FogMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogMode__Enum_DEFINED)
#define IL2CPP_STRUCT_FogMode__Enum_DEFINED
enum class FogMode__Enum : int32_t {
    Linear = 0x00000001,
    Exponential = 0x00000002,
    ExponentialSquared = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_FogMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_FogMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FogMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FogMode__Enum_FWDDECL)
#include <Modloader/app/structs/FogMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FogMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
