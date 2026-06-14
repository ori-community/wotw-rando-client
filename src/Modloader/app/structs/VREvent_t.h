#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_DEFINED)
#include <Modloader/app/structs/VREvent_Data_t.h>
#if defined(IL2CPP_STRUCT_VREvent_Data_t_DEFINED)
#define IL2CPP_STRUCT_VREvent_t_DEFINED
struct VREvent_t {
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    struct VREvent_Data_t data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VREvent_t_FWDDECL)
#define IL2CPP_STRUCT_VREvent_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VREvent_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_t_FWDDECL)
#include <Modloader/app/structs/VREvent_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
