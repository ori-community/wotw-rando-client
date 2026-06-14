#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder__StaticFields_DEFINED
struct List_1_EntityPlaceholder_;
struct Dictionary_2_System_Type_List_1_Moon_Entity_;
struct List_1_Moon_Entity_;
struct EntityPlaceholder__StaticFields {
    bool PreventSpawningEnemies;
    bool PreventSpawningCompletely;
    bool AllowRequiringGroundToSpawn;
    bool TimeslicePrewarmEntity;
    struct List_1_EntityPlaceholder_* All;
    struct Dictionary_2_System_Type_List_1_Moon_Entity_* s_allEntities;
    struct List_1_Moon_Entity_* s_emptyEntityList;
    bool s_hasSubscribedClearEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder__StaticFields_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
