#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_DEFINED)
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#if defined(IL2CPP_STRUCT_Datadog_ThresholdItem_DEFINED)
#define IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_DEFINED
struct Datadog_ThresholdItem__Class;
struct Datadog_ThresholdItem__Boxed {
    struct Datadog_ThresholdItem__Class* klass;
    MonitorData* monitor;
    struct Datadog_ThresholdItem fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_FWDDECL
#include <Modloader/app/structs/Datadog_ThresholdItem__Class.h>
#endif
#undef IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Datadog_ThresholdItem__Boxed_FWDDECL)
#include <Modloader/app/structs/Datadog_ThresholdItem__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datadog_ThresholdItem__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
