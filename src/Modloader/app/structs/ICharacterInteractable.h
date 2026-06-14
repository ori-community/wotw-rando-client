#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICharacterInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICharacterInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterInteractable_DEFINED)
#define IL2CPP_STRUCT_ICharacterInteractable_DEFINED
struct ICharacterInteractable__Class;
struct ICharacterInteractable {
    struct ICharacterInteractable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICharacterInteractable_FWDDECL)
#define IL2CPP_STRUCT_ICharacterInteractable_FWDDECL
#include <Modloader/app/structs/ICharacterInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_ICharacterInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterInteractable_DEFINED) && !defined(IL2CPP_STRUCT_ICharacterInteractable_FWDDECL)
#include <Modloader/app/structs/ICharacterInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICharacterInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
