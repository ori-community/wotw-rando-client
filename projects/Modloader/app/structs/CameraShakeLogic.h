#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeLogic_DEFINED)
#include <Modloader/app/structs/CameraShakeLogic__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShakeLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeLogic_DEFINED
struct CameraShakeLogic__Class;
struct CameraShakeLogic {
    struct CameraShakeLogic__Class* klass;
    MonitorData* monitor;
    struct CameraShakeLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeLogic_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeLogic_FWDDECL
#include <Modloader/app/structs/CameraShakeLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeLogic_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeLogic_FWDDECL)
#include <Modloader/app/structs/CameraShakeLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
