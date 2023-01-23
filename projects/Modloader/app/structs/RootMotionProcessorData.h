#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RootMotionProcessorData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RootMotionProcessorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessorData_DEFINED)
#include <Modloader/app/structs/RootMotionProcessorData__Fields.h>
#if defined(IL2CPP_STRUCT_RootMotionProcessorData__Fields_DEFINED)
#define IL2CPP_STRUCT_RootMotionProcessorData_DEFINED
struct RootMotionProcessorData__Class;
struct RootMotionProcessorData {
    struct RootMotionProcessorData__Class* klass;
    MonitorData* monitor;
    struct RootMotionProcessorData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RootMotionProcessorData_FWDDECL)
#define IL2CPP_STRUCT_RootMotionProcessorData_FWDDECL
#include <Modloader/app/structs/RootMotionProcessorData__Class.h>
#endif
#undef IL2CPP_STRUCT_RootMotionProcessorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessorData_DEFINED) && !defined(IL2CPP_STRUCT_RootMotionProcessorData_FWDDECL)
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RootMotionProcessorData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
