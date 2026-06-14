#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_DEFINED
struct List_1_Moon_Timeline_Reaction_;
struct __declspec(align(8)) TimelineDoubleEndQueue__Fields {
    struct List_1_Moon_Timeline_Reaction_* m_earlyReactions;
    struct List_1_Moon_Timeline_Reaction_* m_lateReactions;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_Reaction_.h>
#endif
#undef IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineDoubleEndQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineDoubleEndQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
