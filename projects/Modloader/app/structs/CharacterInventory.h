#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInventory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventory_DEFINED)
#include <Modloader/app/structs/CharacterInventory__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterInventory_DEFINED
struct CharacterInventory__Class;
struct CharacterInventory {
    struct CharacterInventory__Class* klass;
    MonitorData* monitor;
    struct CharacterInventory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInventory_FWDDECL)
#define IL2CPP_STRUCT_CharacterInventory_FWDDECL
#include <Modloader/app/structs/CharacterInventory__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventory_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInventory_FWDDECL)
#include <Modloader/app/structs/CharacterInventory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInventory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
