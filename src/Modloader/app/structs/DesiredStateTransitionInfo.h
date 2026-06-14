#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredStateTransitionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo_DEFINED)
#include <Modloader/app/structs/DesiredStateTransition.h>
#if defined(IL2CPP_STRUCT_DesiredStateTransition_DEFINED)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo_DEFINED
struct String;
struct DesiredStateTransitionInfo {
    struct String* Name;
    struct DesiredStateTransition DesiredState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo_FWDDECL)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DesiredStateTransitionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo_DEFINED) && !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo_FWDDECL)
#include <Modloader/app/structs/DesiredStateTransitionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredStateTransitionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
