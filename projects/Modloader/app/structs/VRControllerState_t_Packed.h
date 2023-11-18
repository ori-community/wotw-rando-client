#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRControllerState_t_Packed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRControllerState_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRControllerState_t_Packed_DEFINED)
#include <Modloader/app/structs/VRControllerAxis_t.h>
#if defined(IL2CPP_STRUCT_VRControllerAxis_t_DEFINED)
#define IL2CPP_STRUCT_VRControllerState_t_Packed_DEFINED
struct VRControllerState_t_Packed {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    struct VRControllerAxis_t rAxis0;
    struct VRControllerAxis_t rAxis1;
    struct VRControllerAxis_t rAxis2;
    struct VRControllerAxis_t rAxis3;
    struct VRControllerAxis_t rAxis4;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRControllerState_t_Packed_FWDDECL)
#define IL2CPP_STRUCT_VRControllerState_t_Packed_FWDDECL
#endif
#undef IL2CPP_STRUCT_VRControllerState_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRControllerState_t_Packed_DEFINED) && !defined(IL2CPP_STRUCT_VRControllerState_t_Packed_FWDDECL)
#include <Modloader/app/structs/VRControllerState_t_Packed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRControllerState_t_Packed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
