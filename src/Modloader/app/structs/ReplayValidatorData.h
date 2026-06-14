#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidatorData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidatorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidatorData_DEFINED)
#include <Modloader/app/structs/ReplayValidatorData__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayValidatorData__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayValidatorData_DEFINED
struct ReplayValidatorData__Class;
struct ReplayValidatorData {
    struct ReplayValidatorData__Class* klass;
    MonitorData* monitor;
    struct ReplayValidatorData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidatorData_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidatorData_FWDDECL
#include <Modloader/app/structs/ReplayValidatorData__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidatorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidatorData_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidatorData_FWDDECL)
#include <Modloader/app/structs/ReplayValidatorData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidatorData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
