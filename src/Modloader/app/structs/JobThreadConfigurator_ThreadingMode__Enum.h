#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_DEFINED
enum class JobThreadConfigurator_ThreadingMode__Enum : int32_t {
    Default = 0x00000000,
    UnityDefault = 0x00000001,
    AllOnCoreOne = 0x00000002,
    AllOnCoreTwo = 0x00000003,
    TwoWorkersOnOwnCores = 0x00000004,
    TwoWorkersWorkerTwoOnCoreZero = 0x00000005,
    TwoWorkersAllCores = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_FWDDECL)
#include <Modloader/app/structs/JobThreadConfigurator_ThreadingMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobThreadConfigurator_ThreadingMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
