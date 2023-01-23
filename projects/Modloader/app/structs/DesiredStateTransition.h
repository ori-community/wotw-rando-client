#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredStateTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredStateTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransition_DEFINED)
#define IL2CPP_STRUCT_DesiredStateTransition_DEFINED
struct MoonTimeline;
struct IGenericUberState;
struct DesiredStateTransition {
    float DesiredValue;
    struct MoonTimeline* Transition;
    float m_originalState;
    struct IGenericUberState* _GenericUberState_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredStateTransition_FWDDECL)
#define IL2CPP_STRUCT_DesiredStateTransition_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DesiredStateTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransition_DEFINED) && !defined(IL2CPP_STRUCT_DesiredStateTransition_FWDDECL)
#include <Modloader/app/structs/DesiredStateTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredStateTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
