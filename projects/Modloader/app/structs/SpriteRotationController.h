#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteRotationController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteRotationController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteRotationController_DEFINED)
#include <Modloader/app/structs/SpriteRotationController__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteRotationController__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteRotationController_DEFINED
struct SpriteRotationController__Class;
struct SpriteRotationController {
    struct SpriteRotationController__Class* klass;
    MonitorData* monitor;
    struct SpriteRotationController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteRotationController_FWDDECL)
#define IL2CPP_STRUCT_SpriteRotationController_FWDDECL
#include <Modloader/app/structs/SpriteRotationController__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteRotationController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteRotationController_DEFINED) && !defined(IL2CPP_STRUCT_SpriteRotationController_FWDDECL)
#include <Modloader/app/structs/SpriteRotationController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteRotationController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
