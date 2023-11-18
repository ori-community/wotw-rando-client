#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Targets__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Targets__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Targets__StaticFields_DEFINED
struct List_1_Game_Targets_AttackableIterator_;
struct List_1_IAttackable_;
struct Dictionary_2_System_Guid_List_1_IAttackable_;
struct List_1_Game_Targets_ConsumerList_;
struct Targets__StaticFields {
    struct List_1_Game_Targets_AttackableIterator_* m_attackableIterators;
    struct List_1_IAttackable_* m_attackables;
    struct Dictionary_2_System_Guid_List_1_IAttackable_* AttackablesConsumerDictionary;
    struct List_1_Game_Targets_ConsumerList_* AttackablesConsumerList;
};
#endif
#if !defined(IL2CPP_STRUCT_Targets__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Targets__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Guid_List_1_IAttackable_.h>
#include <Modloader/app/structs/List_1_Game_Targets_AttackableIterator_.h>
#include <Modloader/app/structs/List_1_Game_Targets_ConsumerList_.h>
#include <Modloader/app/structs/List_1_IAttackable_.h>
#endif
#undef IL2CPP_STRUCT_Targets__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Targets__StaticFields_FWDDECL)
#include <Modloader/app/structs/Targets__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Targets__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
