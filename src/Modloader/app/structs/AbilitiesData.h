#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilitiesData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilitiesData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesData_DEFINED)
#include <Modloader/app/structs/AbilitiesData__Fields.h>
#if defined(IL2CPP_STRUCT_AbilitiesData__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilitiesData_DEFINED
struct AbilitiesData__Class;
struct AbilitiesData {
    struct AbilitiesData__Class* klass;
    MonitorData* monitor;
    struct AbilitiesData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilitiesData_FWDDECL)
#define IL2CPP_STRUCT_AbilitiesData_FWDDECL
#include <Modloader/app/structs/AbilitiesData__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilitiesData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesData_DEFINED) && !defined(IL2CPP_STRUCT_AbilitiesData_FWDDECL)
#include <Modloader/app/structs/AbilitiesData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilitiesData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
