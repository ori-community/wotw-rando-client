#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRCharacterController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRCharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRCharacterController_DEFINED)
#include <Modloader/app/structs/VRCharacterController__Fields.h>
#if defined(IL2CPP_STRUCT_VRCharacterController__Fields_DEFINED)
#define IL2CPP_STRUCT_VRCharacterController_DEFINED
struct VRCharacterController__Class;
struct VRCharacterController {
    struct VRCharacterController__Class* klass;
    MonitorData* monitor;
    struct VRCharacterController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRCharacterController_FWDDECL)
#define IL2CPP_STRUCT_VRCharacterController_FWDDECL
#include <Modloader/app/structs/VRCharacterController__Class.h>
#endif
#undef IL2CPP_STRUCT_VRCharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRCharacterController_DEFINED) && !defined(IL2CPP_STRUCT_VRCharacterController_FWDDECL)
#include <Modloader/app/structs/VRCharacterController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRCharacterController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
