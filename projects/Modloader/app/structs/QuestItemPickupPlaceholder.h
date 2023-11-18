#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemPickupPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder_DEFINED)
#include <Modloader/app/structs/QuestItemPickupPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder_DEFINED
struct QuestItemPickupPlaceholder__Class;
struct QuestItemPickupPlaceholder {
    struct QuestItemPickupPlaceholder__Class* klass;
    MonitorData* monitor;
    struct QuestItemPickupPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_QuestItemPickupPlaceholder_FWDDECL
#include <Modloader/app/structs/QuestItemPickupPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestItemPickupPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemPickupPlaceholder_FWDDECL)
#include <Modloader/app/structs/QuestItemPickupPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemPickupPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
