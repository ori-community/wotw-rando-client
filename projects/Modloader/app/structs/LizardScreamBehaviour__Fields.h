#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardScreamBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardScreamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardScreamBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardScreamBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LizardScreamBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* ScreamTimeline;
    bool Blocking;
    bool m_finished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardScreamBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardScreamBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LizardScreamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardScreamBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardScreamBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardScreamBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardScreamBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
