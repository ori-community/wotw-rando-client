#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardDodgeEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardDodgeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeEvent_DEFINED)
#include <Modloader/app/structs/LizardDodgeEvent__Fields.h>
#if defined(IL2CPP_STRUCT_LizardDodgeEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardDodgeEvent_DEFINED
struct LizardDodgeEvent__Class;
struct LizardDodgeEvent {
    struct LizardDodgeEvent__Class* klass;
    MonitorData* monitor;
    struct LizardDodgeEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardDodgeEvent_FWDDECL)
#define IL2CPP_STRUCT_LizardDodgeEvent_FWDDECL
#include <Modloader/app/structs/LizardDodgeEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardDodgeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeEvent_DEFINED) && !defined(IL2CPP_STRUCT_LizardDodgeEvent_FWDDECL)
#include <Modloader/app/structs/LizardDodgeEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardDodgeEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
