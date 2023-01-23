#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_t_Packed__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_t_Packed__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed__Boxed_DEFINED)
#include <Modloader/app/structs/VREvent_t_Packed.h>
#if defined(IL2CPP_STRUCT_VREvent_t_Packed_DEFINED)
#define IL2CPP_STRUCT_VREvent_t_Packed__Boxed_DEFINED
struct VREvent_t_Packed__Class;
struct VREvent_t_Packed__Boxed {
    struct VREvent_t_Packed__Class* klass;
    MonitorData* monitor;
    struct VREvent_t_Packed fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed__Boxed_FWDDECL)
#define IL2CPP_STRUCT_VREvent_t_Packed__Boxed_FWDDECL
#include <Modloader/app/structs/VREvent_t_Packed__Class.h>
#endif
#undef IL2CPP_STRUCT_VREvent_t_Packed__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_t_Packed__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_t_Packed__Boxed_FWDDECL)
#include <Modloader/app/structs/VREvent_t_Packed__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_t_Packed__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
