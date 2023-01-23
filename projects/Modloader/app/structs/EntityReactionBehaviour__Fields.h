#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED
struct List_1_Moon_MoonReference_1__7;
struct List_1_Moon_BehaviourSystem_ITask_;
struct EntityEvent;
struct EntityReactionBehaviour__Fields {
    struct EntityTask__Fields _;
    struct List_1_Moon_MoonReference_1__7* NonInterruptables;
    struct List_1_Moon_BehaviourSystem_ITask_* m_resolvedNonInterruptables;
    struct EntityEvent* m_reactionEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_ITask_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__7.h>
#endif
#undef IL2CPP_STRUCT_EntityReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
