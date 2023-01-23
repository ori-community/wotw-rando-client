#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FpsTcTestOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FpsTcTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsTcTestOutput_DEFINED)
#include <Modloader/app/structs/FpsTcTestOutput__Fields.h>
#if defined(IL2CPP_STRUCT_FpsTcTestOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_FpsTcTestOutput_DEFINED
struct FpsTcTestOutput__Class;
struct FpsTcTestOutput {
    struct FpsTcTestOutput__Class* klass;
    MonitorData* monitor;
    struct FpsTcTestOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FpsTcTestOutput_FWDDECL)
#define IL2CPP_STRUCT_FpsTcTestOutput_FWDDECL
#include <Modloader/app/structs/FpsTcTestOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_FpsTcTestOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsTcTestOutput_DEFINED) && !defined(IL2CPP_STRUCT_FpsTcTestOutput_FWDDECL)
#include <Modloader/app/structs/FpsTcTestOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FpsTcTestOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
