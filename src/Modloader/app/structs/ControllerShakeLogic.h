#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerShakeLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerShakeLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeLogic_DEFINED)
#include <Modloader/app/structs/ControllerShakeLogic__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerShakeLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerShakeLogic_DEFINED
struct ControllerShakeLogic__Class;
struct ControllerShakeLogic {
    struct ControllerShakeLogic__Class* klass;
    MonitorData* monitor;
    struct ControllerShakeLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerShakeLogic_FWDDECL)
#define IL2CPP_STRUCT_ControllerShakeLogic_FWDDECL
#include <Modloader/app/structs/ControllerShakeLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerShakeLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerShakeLogic_DEFINED) && !defined(IL2CPP_STRUCT_ControllerShakeLogic_FWDDECL)
#include <Modloader/app/structs/ControllerShakeLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerShakeLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
