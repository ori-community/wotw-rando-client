#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeModifierContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeModifierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeModifierContext_DEFINED)
#include <Modloader/app/structs/CameraShakeModifierContext__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShakeModifierContext__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeModifierContext_DEFINED
struct CameraShakeModifierContext__Class;
struct CameraShakeModifierContext {
    struct CameraShakeModifierContext__Class* klass;
    MonitorData* monitor;
    struct CameraShakeModifierContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeModifierContext_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeModifierContext_FWDDECL
#include <Modloader/app/structs/CameraShakeModifierContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeModifierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeModifierContext_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeModifierContext_FWDDECL)
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
