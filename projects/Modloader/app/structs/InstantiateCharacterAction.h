#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateCharacterAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction_DEFINED)
#include <Modloader/app/structs/InstantiateCharacterAction__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiateCharacterAction__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateCharacterAction_DEFINED
struct InstantiateCharacterAction__Class;
struct InstantiateCharacterAction {
    struct InstantiateCharacterAction__Class* klass;
    MonitorData* monitor;
    struct InstantiateCharacterAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction_FWDDECL)
#define IL2CPP_STRUCT_InstantiateCharacterAction_FWDDECL
#include <Modloader/app/structs/InstantiateCharacterAction__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateCharacterAction_FWDDECL)
#include <Modloader/app/structs/InstantiateCharacterAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateCharacterAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
