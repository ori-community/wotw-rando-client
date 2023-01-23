#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsData_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsData_DEFINED)
#include <Modloader/app/structs/fsData__Fields.h>
#if defined(IL2CPP_STRUCT_fsData__Fields_DEFINED)
#define IL2CPP_STRUCT_fsData_DEFINED
struct fsData__Class;
struct fsData {
    struct fsData__Class* klass;
    MonitorData* monitor;
    struct fsData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsData_FWDDECL)
#define IL2CPP_STRUCT_fsData_FWDDECL
#include <Modloader/app/structs/fsData__Class.h>
#endif
#undef IL2CPP_STRUCT_fsData_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsData_DEFINED) && !defined(IL2CPP_STRUCT_fsData_FWDDECL)
#include <Modloader/app/structs/fsData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
