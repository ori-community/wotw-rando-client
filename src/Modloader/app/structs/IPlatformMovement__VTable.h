#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlatformMovement__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlatformMovement__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformMovement__VTable_DEFINED)
#define IL2CPP_STRUCT_IPlatformMovement__VTable_DEFINED
struct IPlatformMovement__VTable {
    VirtualInvokeData get_IsOnGround;
    VirtualInvokeData get_HasWallLeft;
    VirtualInvokeData get_HasWallRight;
    VirtualInvokeData get_IsOnWall;
    VirtualInvokeData get_MovingHorizontally;
    VirtualInvokeData get_Jumping;
    VirtualInvokeData get_LocalSpeed;
    VirtualInvokeData set_LocalSpeed;
    VirtualInvokeData get_WorldSpeed;
    VirtualInvokeData set_WorldSpeed;
    VirtualInvokeData get_GravityAngle;
    VirtualInvokeData set_GravityAngle;
    VirtualInvokeData get_GroundAngle;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_FeetPosition;
    VirtualInvokeData set_FeetPosition;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlatformMovement__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPlatformMovement__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPlatformMovement__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformMovement__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPlatformMovement__VTable_FWDDECL)
#include <Modloader/app/structs/IPlatformMovement__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlatformMovement__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
