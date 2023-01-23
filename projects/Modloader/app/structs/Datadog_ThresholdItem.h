#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datadog_ThresholdItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datadog_ThresholdItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem_DEFINED)
#define IL2CPP_STRUCT_Datadog_ThresholdItem_DEFINED
struct Datadog_ThresholdItem {
    bool IsSet;
    int32_t Hash;
    int64_t LastTime;
};
#endif
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem_FWDDECL)
#define IL2CPP_STRUCT_Datadog_ThresholdItem_FWDDECL
#endif
#undef IL2CPP_STRUCT_Datadog_ThresholdItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem_DEFINED) && !defined(IL2CPP_STRUCT_Datadog_ThresholdItem_FWDDECL)
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
