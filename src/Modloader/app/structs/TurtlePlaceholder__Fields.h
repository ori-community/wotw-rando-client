#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtlePlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtlePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#include <Modloader/app/structs/LizardSpawnType__Enum.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_LizardSpawnType__Enum_DEFINED)
#define IL2CPP_STRUCT_TurtlePlaceholder__Fields_DEFINED
struct GameObject;
struct TurtlePlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct GameObject* LizardPrefab;
    LizardSpawnType__Enum m_spawnType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtlePlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_TurtlePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtlePlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/TurtlePlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtlePlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
