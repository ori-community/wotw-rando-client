#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_DEFINED)
#define IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_DEFINED
enum class SavePedestalController_CanTeleportResult__Enum : int32_t {
    Denied_Racing = 0x00000000,
    Denied_RestrictZone = 0x00000001,
    Denied_Riding = 0x00000002,
    Denied_NotOnGround = 0x00000003,
    Denied_PerformingCinematic = 0x00000004,
    Denied_Interacting = 0x00000005,
    Success = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestalController_CanTeleportResult__Enum_FWDDECL)
#include <Modloader/app/structs/SavePedestalController_CanTeleportResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestalController_CanTeleportResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
