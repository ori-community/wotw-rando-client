#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispPickupContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispPickupContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispPickupContext__Fields_DEFINED)
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum.h>
#if defined(IL2CPP_STRUCT_WispMessageIcon_Wisp__Enum_DEFINED)
#define IL2CPP_STRUCT_WispPickupContext__Fields_DEFINED
struct __declspec(align(8)) WispPickupContext__Fields {
    WispMessageIcon_Wisp__Enum Wisp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispPickupContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_WispPickupContext__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WispPickupContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispPickupContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WispPickupContext__Fields_FWDDECL)
#include <Modloader/app/structs/WispPickupContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispPickupContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
