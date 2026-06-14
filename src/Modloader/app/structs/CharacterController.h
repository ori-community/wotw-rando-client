#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterController_DEFINED)
#include <Modloader/app/structs/CharacterController__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterController__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterController_DEFINED
struct CharacterController__Class;
struct CharacterController {
    struct CharacterController__Class* klass;
    MonitorData* monitor;
    struct CharacterController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterController_FWDDECL)
#define IL2CPP_STRUCT_CharacterController_FWDDECL
#include <Modloader/app/structs/CharacterController__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterController_DEFINED) && !defined(IL2CPP_STRUCT_CharacterController_FWDDECL)
#include <Modloader/app/structs/CharacterController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
