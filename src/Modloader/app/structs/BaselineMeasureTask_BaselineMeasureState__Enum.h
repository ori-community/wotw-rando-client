#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_DEFINED)
#define IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_DEFINED
enum class BaselineMeasureTask_BaselineMeasureState__Enum : int32_t {
    Idle = 0x00000000,
    StartMeasure = 0x00000001,
    Measuring = 0x00000002,
    FinishMeasure = 0x00000003,
    Delay = 0x00000004,
    Finish = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_FWDDECL)
#define IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BaselineMeasureTask_BaselineMeasureState__Enum_FWDDECL)
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
