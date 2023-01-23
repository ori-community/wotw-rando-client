#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterFovController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterFovController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFovController_DEFINED)
#include <Modloader/app/structs/CharacterFovController__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterFovController__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterFovController_DEFINED
struct CharacterFovController__Class;
struct CharacterFovController {
    struct CharacterFovController__Class* klass;
    MonitorData* monitor;
    struct CharacterFovController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterFovController_FWDDECL)
#define IL2CPP_STRUCT_CharacterFovController_FWDDECL
#include <Modloader/app/structs/CharacterFovController__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterFovController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFovController_DEFINED) && !defined(IL2CPP_STRUCT_CharacterFovController_FWDDECL)
#include <Modloader/app/structs/CharacterFovController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterFovController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
