#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCurrentCharacterAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCurrentCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCurrentCharacterAction_DEFINED)
#include <Modloader/app/structs/SetCurrentCharacterAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetCurrentCharacterAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCurrentCharacterAction_DEFINED
struct SetCurrentCharacterAction__Class;
struct SetCurrentCharacterAction {
    struct SetCurrentCharacterAction__Class* klass;
    MonitorData* monitor;
    struct SetCurrentCharacterAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCurrentCharacterAction_FWDDECL)
#define IL2CPP_STRUCT_SetCurrentCharacterAction_FWDDECL
#include <Modloader/app/structs/SetCurrentCharacterAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetCurrentCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCurrentCharacterAction_DEFINED) && !defined(IL2CPP_STRUCT_SetCurrentCharacterAction_FWDDECL)
#include <Modloader/app/structs/SetCurrentCharacterAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCurrentCharacterAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
