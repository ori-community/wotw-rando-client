#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_DEFINED
enum class SeinChargeShotSpell_State__Enum : int32_t {
    Normal = 0x00000000,
    PreCharge = 0x00000001,
    Charging = 0x00000002,
    FullyCharged = 0x00000003,
    PreAirShot = 0x00000004,
    AirShot = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_FWDDECL)
#include <Modloader/app/structs/SeinChargeShotSpell_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeShotSpell_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
