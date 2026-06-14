#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_Property_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_Property_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Property_t_DEFINED)
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#if defined(IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_DEFINED)
#define IL2CPP_STRUCT_VREvent_Property_t_DEFINED
struct VREvent_Property_t {
    uint64_t container;
    ETrackedDeviceProperty__Enum prop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VREvent_Property_t_FWDDECL)
#define IL2CPP_STRUCT_VREvent_Property_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VREvent_Property_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Property_t_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_Property_t_FWDDECL)
#include <Modloader/app/structs/VREvent_Property_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_Property_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
