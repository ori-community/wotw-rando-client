#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerNPC_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerNPC_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC_State__Enum_DEFINED)
#define IL2CPP_STRUCT_CartographerNPC_State__Enum_DEFINED
enum class CartographerNPC_State__Enum : int32_t {
    Idle = 0x00000000,
    MoveOriToPosition = 0x00000001,
    Purchase = 0x00000002,
    GiveMap = 0x00000003,
    DidNotBuy = 0x00000004,
    AfterMapBuy = 0x00000005,
    AlternateInteraction = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_CartographerNPC_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_CartographerNPC_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CartographerNPC_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CartographerNPC_State__Enum_FWDDECL)
#include <Modloader/app/structs/CartographerNPC_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerNPC_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
