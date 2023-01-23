#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stomper_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stomper_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper_State__Enum_DEFINED)
#define IL2CPP_STRUCT_Stomper_State__Enum_DEFINED
enum class Stomper_State__Enum : int32_t {
    Normal = 0x00000000,
    Shake = 0x00000001,
    Falling = 0x00000002,
    Fallen = 0x00000003,
    Raising = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_Stomper_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_Stomper_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Stomper_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Stomper_State__Enum_FWDDECL)
#include <Modloader/app/structs/Stomper_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stomper_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
