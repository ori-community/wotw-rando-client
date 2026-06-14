#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#include <Modloader/app/structs/QuestItemType__Enum.h>
#if defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_QuestItemType__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_DEFINED
struct QuestItemPickupPlaceholder__Fields {
    struct CollectablePlaceholder__Fields _;
    QuestItemType__Enum ItemType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/QuestItemPickupPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemPickupPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
