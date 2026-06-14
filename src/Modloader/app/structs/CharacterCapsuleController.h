#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterCapsuleController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterCapsuleController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController_DEFINED)
#include <Modloader/app/structs/CharacterCapsuleController__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterCapsuleController__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterCapsuleController_DEFINED
struct CharacterCapsuleController__Class;
struct CharacterCapsuleController {
    struct CharacterCapsuleController__Class* klass;
    MonitorData* monitor;
    struct CharacterCapsuleController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController_FWDDECL)
#define IL2CPP_STRUCT_CharacterCapsuleController_FWDDECL
#include <Modloader/app/structs/CharacterCapsuleController__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterCapsuleController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController_DEFINED) && !defined(IL2CPP_STRUCT_CharacterCapsuleController_FWDDECL)
#include <Modloader/app/structs/CharacterCapsuleController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterCapsuleController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
