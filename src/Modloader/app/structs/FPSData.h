#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSData_DEFINED)
#include <Modloader/app/structs/FPSData__Fields.h>
#if defined(IL2CPP_STRUCT_FPSData__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSData_DEFINED
struct FPSData__Class;
struct FPSData {
    struct FPSData__Class* klass;
    MonitorData* monitor;
    struct FPSData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSData_FWDDECL)
#define IL2CPP_STRUCT_FPSData_FWDDECL
#include <Modloader/app/structs/FPSData__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSData_DEFINED) && !defined(IL2CPP_STRUCT_FPSData_FWDDECL)
#include <Modloader/app/structs/FPSData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
