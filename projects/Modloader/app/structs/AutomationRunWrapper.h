#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutomationRunWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutomationRunWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper_DEFINED)
#include <Modloader/app/structs/AutomationRunWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_AutomationRunWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_AutomationRunWrapper_DEFINED
struct AutomationRunWrapper__Class;
struct AutomationRunWrapper {
    struct AutomationRunWrapper__Class* klass;
    MonitorData* monitor;
    struct AutomationRunWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper_FWDDECL)
#define IL2CPP_STRUCT_AutomationRunWrapper_FWDDECL
#include <Modloader/app/structs/AutomationRunWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_AutomationRunWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper_DEFINED) && !defined(IL2CPP_STRUCT_AutomationRunWrapper_FWDDECL)
#include <Modloader/app/structs/AutomationRunWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutomationRunWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
