#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrialData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialData_DEFINED)
#define IL2CPP_STRUCT_ITrialData_DEFINED
struct ITrialData__Class;
struct ITrialData {
    struct ITrialData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrialData_FWDDECL)
#define IL2CPP_STRUCT_ITrialData_FWDDECL
#include <Modloader/app/structs/ITrialData__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialData_DEFINED) && !defined(IL2CPP_STRUCT_ITrialData_FWDDECL)
#include <Modloader/app/structs/ITrialData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrialData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
