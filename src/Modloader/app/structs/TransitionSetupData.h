#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransitionSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransitionSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionSetupData_DEFINED)
#include <Modloader/app/structs/TransitionSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_TransitionSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_TransitionSetupData_DEFINED
struct TransitionSetupData__Class;
struct TransitionSetupData {
    struct TransitionSetupData__Class* klass;
    MonitorData* monitor;
    struct TransitionSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransitionSetupData_FWDDECL)
#define IL2CPP_STRUCT_TransitionSetupData_FWDDECL
#include <Modloader/app/structs/TransitionSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_TransitionSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionSetupData_DEFINED) && !defined(IL2CPP_STRUCT_TransitionSetupData_FWDDECL)
#include <Modloader/app/structs/TransitionSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransitionSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
