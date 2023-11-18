#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderPlaceholder__Fields_DEFINED
struct EventTriggerGameplayAnimator;
struct BuilderPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    struct EventTriggerGameplayAnimator* LookEvent;
    bool m_wasLookingLeft;
    bool m_hadInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuilderPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerGameplayAnimator.h>
#endif
#undef IL2CPP_STRUCT_BuilderPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuilderPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/BuilderPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
