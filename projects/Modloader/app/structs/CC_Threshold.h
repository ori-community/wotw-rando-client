#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Threshold_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Threshold_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Threshold_DEFINED)
#include <Modloader/app/structs/CC_Threshold__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Threshold__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Threshold_DEFINED
struct CC_Threshold__Class;
struct CC_Threshold {
    struct CC_Threshold__Class* klass;
    MonitorData* monitor;
    struct CC_Threshold__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Threshold_FWDDECL)
#define IL2CPP_STRUCT_CC_Threshold_FWDDECL
#include <Modloader/app/structs/CC_Threshold__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Threshold_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Threshold_DEFINED) && !defined(IL2CPP_STRUCT_CC_Threshold_FWDDECL)
#include <Modloader/app/structs/CC_Threshold.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Threshold.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
