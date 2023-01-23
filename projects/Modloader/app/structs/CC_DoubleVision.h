#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_DoubleVision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_DoubleVision_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_DoubleVision_DEFINED)
#include <Modloader/app/structs/CC_DoubleVision__Fields.h>
#if defined(IL2CPP_STRUCT_CC_DoubleVision__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_DoubleVision_DEFINED
struct CC_DoubleVision__Class;
struct CC_DoubleVision {
    struct CC_DoubleVision__Class* klass;
    MonitorData* monitor;
    struct CC_DoubleVision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_DoubleVision_FWDDECL)
#define IL2CPP_STRUCT_CC_DoubleVision_FWDDECL
#include <Modloader/app/structs/CC_DoubleVision__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_DoubleVision_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_DoubleVision_DEFINED) && !defined(IL2CPP_STRUCT_CC_DoubleVision_FWDDECL)
#include <Modloader/app/structs/CC_DoubleVision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_DoubleVision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
