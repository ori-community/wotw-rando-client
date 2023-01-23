#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSSampleData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSSampleData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSampleData_DEFINED)
#include <Modloader/app/structs/FPSSampleData__Fields.h>
#if defined(IL2CPP_STRUCT_FPSSampleData__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSSampleData_DEFINED
struct FPSSampleData__Class;
struct FPSSampleData {
    struct FPSSampleData__Class* klass;
    MonitorData* monitor;
    struct FPSSampleData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSSampleData_FWDDECL)
#define IL2CPP_STRUCT_FPSSampleData_FWDDECL
#include <Modloader/app/structs/FPSSampleData__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSSampleData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSampleData_DEFINED) && !defined(IL2CPP_STRUCT_FPSSampleData_FWDDECL)
#include <Modloader/app/structs/FPSSampleData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSSampleData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
