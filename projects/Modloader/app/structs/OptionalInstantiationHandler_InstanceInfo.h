#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_DEFINED
struct OptionalInstantiationHandler_InstanceInfo {
    int32_t InstanceID;
    int32_t FrameNumber;
    struct Vector3 Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_FWDDECL)
#define IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_DEFINED) && !defined(IL2CPP_STRUCT_OptionalInstantiationHandler_InstanceInfo_FWDDECL)
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
