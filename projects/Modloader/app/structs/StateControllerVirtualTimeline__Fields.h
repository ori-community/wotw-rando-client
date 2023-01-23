#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_DEFINED)
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_DEFINED
struct NewSetupStateController;
struct StateControllerVirtualTimeline__Fields {
    struct VirtualMoonTimeline__Fields _;
    struct NewSetupStateController* _StateController_k__BackingField;
    bool m_rebuildingHiearachy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_FWDDECL
#include <Modloader/app/structs/NewSetupStateController.h>
#endif
#undef IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_FWDDECL)
#include <Modloader/app/structs/StateControllerVirtualTimeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateControllerVirtualTimeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
