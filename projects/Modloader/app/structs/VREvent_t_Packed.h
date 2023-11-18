#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_t_Packed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed_DEFINED)
#include <Modloader/app/structs/VREvent_Data_t.h>
#if defined(IL2CPP_STRUCT_VREvent_Data_t_DEFINED)
#define IL2CPP_STRUCT_VREvent_t_Packed_DEFINED
struct VREvent_t_Packed {
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    struct VREvent_Data_t data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed_FWDDECL)
#define IL2CPP_STRUCT_VREvent_t_Packed_FWDDECL
#endif
#undef IL2CPP_STRUCT_VREvent_t_Packed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_t_Packed_FWDDECL)
#include <Modloader/app/structs/VREvent_t_Packed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_t_Packed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
