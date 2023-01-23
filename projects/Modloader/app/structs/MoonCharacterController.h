#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonCharacterController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonCharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCharacterController_DEFINED)
#include <Modloader/app/structs/MoonCharacterController__Fields.h>
#if defined(IL2CPP_STRUCT_MoonCharacterController__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonCharacterController_DEFINED
struct MoonCharacterController__Class;
struct MoonCharacterController {
    struct MoonCharacterController__Class* klass;
    MonitorData* monitor;
    struct MoonCharacterController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonCharacterController_FWDDECL)
#define IL2CPP_STRUCT_MoonCharacterController_FWDDECL
#include <Modloader/app/structs/MoonCharacterController__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonCharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCharacterController_DEFINED) && !defined(IL2CPP_STRUCT_MoonCharacterController_FWDDECL)
#include <Modloader/app/structs/MoonCharacterController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonCharacterController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
