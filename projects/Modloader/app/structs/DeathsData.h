#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathsData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathsData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathsData_DEFINED)
#include <Modloader/app/structs/DeathsData__Fields.h>
#if defined(IL2CPP_STRUCT_DeathsData__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathsData_DEFINED
struct DeathsData__Class;
struct DeathsData {
    struct DeathsData__Class* klass;
    MonitorData* monitor;
    struct DeathsData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathsData_FWDDECL)
#define IL2CPP_STRUCT_DeathsData_FWDDECL
#include <Modloader/app/structs/DeathsData__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathsData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathsData_DEFINED) && !defined(IL2CPP_STRUCT_DeathsData_FWDDECL)
#include <Modloader/app/structs/DeathsData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathsData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
