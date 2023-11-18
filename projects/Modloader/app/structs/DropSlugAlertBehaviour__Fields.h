#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_DropSlugEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_DropSlugEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_DEFINED
struct MoonTimeline;
struct DropSlugAlertBehaviour__Fields {
    struct EntityBehaviourNode_1_DropSlugEntity___Fields _;
    struct MoonTimeline* AlertTimeline;
    struct MoonTimeline* AlertLoopTimeline;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugAlertBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugAlertBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugAlertBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
