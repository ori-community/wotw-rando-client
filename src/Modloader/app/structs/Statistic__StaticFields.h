#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Statistic__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Statistic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistic__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Statistic__StaticFields_DEFINED
struct Int32__Array;
struct Statistic__StaticFields {
    int64_t InCircleCount;
    int64_t InCircleAdaptCount;
    int64_t CounterClockwiseCount;
    int64_t CounterClockwiseAdaptCount;
    int64_t Orient3dCount;
    int64_t HyperbolaCount;
    int64_t CircumcenterCount;
    int64_t CircleTopCount;
    int64_t RelocationCount;
    struct Int32__Array* plus1Mod3;
    struct Int32__Array* minus1Mod3;
};
#endif
#if !defined(IL2CPP_STRUCT_Statistic__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Statistic__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_Statistic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistic__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Statistic__StaticFields_FWDDECL)
#include <Modloader/app/structs/Statistic__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Statistic__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
