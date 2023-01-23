#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_DEFINED
struct List_1_RespawningPlaceholder_;
struct List_1_LegacyEntity_;
struct List_1_EntityPlaceholder_;
struct List_1_Moon_Entity_;
struct List_1_MessageProvider_;
struct MessageBox;
struct ActionMethod;
struct AllEnemiesKilledTrigger__Fields {
    struct LegacyTrigger__Fields _;
    struct List_1_RespawningPlaceholder_* LegacyRespawningPlaceholders;
    struct List_1_LegacyEntity_* LegacyEntities;
    struct List_1_EntityPlaceholder_* NewRespanwingPlaceholders;
    struct List_1_Moon_Entity_* NewEntities;
    bool AutoPopulatePlaceholderReferences;
    struct List_1_MessageProvider_* Messages;
    bool ShowMessages;
    int32_t TriggerOnCounter;
    int32_t m_counter;
    struct MessageBox* m_lastMessageBox;
    struct ActionMethod* ActionOnAwakeTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/List_1_LegacyEntity_.h>
#include <Modloader/app/structs/List_1_MessageProvider_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_RespawningPlaceholder_.h>
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AllEnemiesKilledTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/AllEnemiesKilledTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllEnemiesKilledTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
