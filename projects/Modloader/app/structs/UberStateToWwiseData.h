#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateToWwiseData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateToWwiseData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_DEFINED)
#include <Modloader/app/structs/UberStateToWwiseData__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateToWwiseData__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateToWwiseData_DEFINED
struct UberStateToWwiseData__Class;
struct UberStateToWwiseData {
    struct UberStateToWwiseData__Class* klass;
    MonitorData* monitor;
    struct UberStateToWwiseData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_FWDDECL)
#define IL2CPP_STRUCT_UberStateToWwiseData_FWDDECL
#include <Modloader/app/structs/UberStateToWwiseData__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateToWwiseData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateToWwiseData_DEFINED) && !defined(IL2CPP_STRUCT_UberStateToWwiseData_FWDDECL)
#include <Modloader/app/structs/UberStateToWwiseData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateToWwiseData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
