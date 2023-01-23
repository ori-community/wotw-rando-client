#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellSettings__Fields_DEFINED
struct SpellIconsCollection;
struct SpellDescriptionCollection;
struct SpellShardCompatibilityCollection;
struct AbilityIconCollection;
struct Int32__Array;
struct SpellSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct SpellIconsCollection* Icons;
    struct SpellDescriptionCollection* Descriptions;
    struct SpellShardCompatibilityCollection* Compatibility;
    struct AbilityIconCollection* CustomAbilityIcons;
    struct Int32__Array* ShardSlotCost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellSettings__Fields_FWDDECL
#include <Modloader/app/structs/AbilityIconCollection.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SpellDescriptionCollection.h>
#include <Modloader/app/structs/SpellIconsCollection.h>
#include <Modloader/app/structs/SpellShardCompatibilityCollection.h>
#endif
#undef IL2CPP_STRUCT_SpellSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SpellSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
