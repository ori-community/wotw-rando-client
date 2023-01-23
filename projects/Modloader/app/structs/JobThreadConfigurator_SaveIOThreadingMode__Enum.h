#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_DEFINED
enum class JobThreadConfigurator_SaveIOThreadingMode__Enum : int32_t {
    Default = 0x00000000,
    Core1 = 0x00000001,
    Core2 = 0x00000002,
    Core1And2Prefer1 = 0x00000003,
    Core1And2Prefer2 = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_FWDDECL)
#include <Modloader/app/structs/JobThreadConfigurator_SaveIOThreadingMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobThreadConfigurator_SaveIOThreadingMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
