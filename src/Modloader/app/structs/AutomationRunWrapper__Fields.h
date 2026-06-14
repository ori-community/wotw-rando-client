#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutomationRunWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutomationRunWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper__Fields_DEFINED)
#include <Modloader/app/structs/AutomationRunType__Enum.h>
#if defined(IL2CPP_STRUCT_AutomationRunType__Enum_DEFINED)
#define IL2CPP_STRUCT_AutomationRunWrapper__Fields_DEFINED
struct __declspec(align(8)) AutomationRunWrapper__Fields {
    AutomationRunType__Enum m_type;

    double m_previousRealTimeSinceStartup;
    double m_runtime;
    bool m_hasStarted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutomationRunWrapper__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AutomationRunWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutomationRunWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/AutomationRunWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutomationRunWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
