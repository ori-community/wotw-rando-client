#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInteractables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInteractables_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractables_DEFINED)
#define IL2CPP_STRUCT_CharacterInteractables_DEFINED
struct CharacterInteractables__Class;
struct CharacterInteractables {
    struct CharacterInteractables__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterInteractables_FWDDECL)
#define IL2CPP_STRUCT_CharacterInteractables_FWDDECL
#include <Modloader/app/structs/CharacterInteractables__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterInteractables_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractables_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInteractables_FWDDECL)
#include <Modloader/app/structs/CharacterInteractables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInteractables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
