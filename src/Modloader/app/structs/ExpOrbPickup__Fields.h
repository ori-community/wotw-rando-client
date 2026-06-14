#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpOrbPickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpOrbPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__Fields_DEFINED)
#include <Modloader/app/structs/ExpOrbPickup_ExpOrbMessageType__Enum.h>
#include <Modloader/app/structs/PickupBase__Fields.h>
#if defined(IL2CPP_STRUCT_PickupBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_ExpOrbPickup_ExpOrbMessageType__Enum_DEFINED)
#define IL2CPP_STRUCT_ExpOrbPickup__Fields_DEFINED
struct ExpOrbPickup__Fields {
    struct PickupBase__Fields _;
    ExpOrbPickup_ExpOrbMessageType__Enum MessageType;

    int32_t Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpOrbPickup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExpOrbPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpOrbPickup__Fields_FWDDECL)
#include <Modloader/app/structs/ExpOrbPickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpOrbPickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
