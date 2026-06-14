#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestOutput_DEFINED)
#include <Modloader/app/structs/FPSTestOutput__Fields.h>
#if defined(IL2CPP_STRUCT_FPSTestOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSTestOutput_DEFINED
struct FPSTestOutput__Class;
struct FPSTestOutput {
    struct FPSTestOutput__Class* klass;
    MonitorData* monitor;
    struct FPSTestOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSTestOutput_FWDDECL)
#define IL2CPP_STRUCT_FPSTestOutput_FWDDECL
#include <Modloader/app/structs/FPSTestOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestOutput_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestOutput_FWDDECL)
#include <Modloader/app/structs/FPSTestOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
