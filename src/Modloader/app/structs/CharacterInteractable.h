#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractable_DEFINED)
#include <Modloader/app/structs/CharacterInteractable__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterInteractable__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterInteractable_DEFINED
struct CharacterInteractable__Class;
struct CharacterInteractable {
    struct CharacterInteractable__Class* klass;
    MonitorData* monitor;
    struct CharacterInteractable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInteractable_FWDDECL)
#define IL2CPP_STRUCT_CharacterInteractable_FWDDECL
#include <Modloader/app/structs/CharacterInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInteractable_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInteractable_FWDDECL)
#include <Modloader/app/structs/CharacterInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
