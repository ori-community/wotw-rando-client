#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_DEFINED)
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_DEFINED
struct WwiseHooksProcessing_WiseEvent__Class;
struct WwiseHooksProcessing_WiseEvent {
    struct WwiseHooksProcessing_WiseEvent__Class* klass;
    MonitorData* monitor;
    struct WwiseHooksProcessing_WiseEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_FWDDECL)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_FWDDECL
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_DEFINED) && !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent_FWDDECL)
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
