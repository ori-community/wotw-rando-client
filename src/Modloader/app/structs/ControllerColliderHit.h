#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerColliderHit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerColliderHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerColliderHit_DEFINED)
#include <Modloader/app/structs/ControllerColliderHit__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerColliderHit__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerColliderHit_DEFINED
struct ControllerColliderHit__Class;
struct ControllerColliderHit {
    struct ControllerColliderHit__Class* klass;
    MonitorData* monitor;
    struct ControllerColliderHit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerColliderHit_FWDDECL)
#define IL2CPP_STRUCT_ControllerColliderHit_FWDDECL
#include <Modloader/app/structs/ControllerColliderHit__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerColliderHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerColliderHit_DEFINED) && !defined(IL2CPP_STRUCT_ControllerColliderHit_FWDDECL)
#include <Modloader/app/structs/ControllerColliderHit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerColliderHit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
