#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestResult_DEFINED)
#include <Modloader/app/structs/FPSTestResult__Fields.h>
#if defined(IL2CPP_STRUCT_FPSTestResult__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSTestResult_DEFINED
struct FPSTestResult__Class;
struct FPSTestResult {
    struct FPSTestResult__Class* klass;
    MonitorData* monitor;
    struct FPSTestResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSTestResult_FWDDECL)
#define IL2CPP_STRUCT_FPSTestResult_FWDDECL
#include <Modloader/app/structs/FPSTestResult__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestResult_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestResult_FWDDECL)
#include <Modloader/app/structs/FPSTestResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
