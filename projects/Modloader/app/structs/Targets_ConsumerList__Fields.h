#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Targets_ConsumerList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Targets_ConsumerList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList__Fields_DEFINED)
#define IL2CPP_STRUCT_Targets_ConsumerList__Fields_DEFINED
struct IAttackableConsumer;
struct List_1_IAttackable_;
struct __declspec(align(8)) Targets_ConsumerList__Fields {
    struct IAttackableConsumer* Consumer;
    struct List_1_IAttackable_* List;
};
#endif
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList__Fields_FWDDECL)
#define IL2CPP_STRUCT_Targets_ConsumerList__Fields_FWDDECL
#include <Modloader/app/structs/IAttackableConsumer.h>
#include <Modloader/app/structs/List_1_IAttackable_.h>
#endif
#undef IL2CPP_STRUCT_Targets_ConsumerList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_ConsumerList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Targets_ConsumerList__Fields_FWDDECL)
#include <Modloader/app/structs/Targets_ConsumerList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Targets_ConsumerList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
