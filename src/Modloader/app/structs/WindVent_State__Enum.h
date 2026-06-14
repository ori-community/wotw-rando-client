#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindVent_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindVent_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent_State__Enum_DEFINED)
#define IL2CPP_STRUCT_WindVent_State__Enum_DEFINED
enum class WindVent_State__Enum : int32_t {
    InitialState = 0x00000000,
    Anticipation = 0x00000001,
    Burst = 0x00000002,
    CoolDown = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_WindVent_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_WindVent_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WindVent_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WindVent_State__Enum_FWDDECL)
#include <Modloader/app/structs/WindVent_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindVent_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
