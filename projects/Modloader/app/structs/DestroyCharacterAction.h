#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyCharacterAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyCharacterAction_DEFINED)
#include <Modloader/app/structs/DestroyCharacterAction__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyCharacterAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyCharacterAction_DEFINED
struct DestroyCharacterAction__Class;
struct DestroyCharacterAction {
    struct DestroyCharacterAction__Class* klass;
    MonitorData* monitor;
    struct DestroyCharacterAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyCharacterAction_FWDDECL)
#define IL2CPP_STRUCT_DestroyCharacterAction_FWDDECL
#include <Modloader/app/structs/DestroyCharacterAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyCharacterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyCharacterAction_DEFINED) && !defined(IL2CPP_STRUCT_DestroyCharacterAction_FWDDECL)
#include <Modloader/app/structs/DestroyCharacterAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyCharacterAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
