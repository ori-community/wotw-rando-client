#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_DEFINED)
#include <Modloader/app/structs/QuestItemType__Enum.h>
#if defined(IL2CPP_STRUCT_QuestItemType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_DEFINED
struct __declspec(align(8)) PlayerUberStateInventory_QuestItem__Fields {
    bool Collected;
    QuestItemType__Enum Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateInventory_QuestItem__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
