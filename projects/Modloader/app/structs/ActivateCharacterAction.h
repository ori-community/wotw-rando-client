#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateCharacterAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCharacterAction_DEFINED)
#include <Modloader/app/structs/ActivateCharacterAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateCharacterAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateCharacterAction_DEFINED
struct ActivateCharacterAction__Class;
struct ActivateCharacterAction {
    struct ActivateCharacterAction__Class* klass;
    MonitorData* monitor;
    struct ActivateCharacterAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateCharacterAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateCharacterAction_FWDDECL
#include <Modloader/app/structs/ActivateCharacterAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCharacterAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateCharacterAction_FWDDECL)
#include <Modloader/app/structs/ActivateCharacterAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateCharacterAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
