#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameDelayTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameDelayTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameDelayTask_DEFINED)
#include <Modloader/app/structs/FrameDelayTask__Fields.h>
#if defined(IL2CPP_STRUCT_FrameDelayTask__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameDelayTask_DEFINED
struct FrameDelayTask__Class;
struct FrameDelayTask {
    struct FrameDelayTask__Class* klass;
    MonitorData* monitor;
    struct FrameDelayTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameDelayTask_FWDDECL)
#define IL2CPP_STRUCT_FrameDelayTask_FWDDECL
#include <Modloader/app/structs/FrameDelayTask__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameDelayTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameDelayTask_DEFINED) && !defined(IL2CPP_STRUCT_FrameDelayTask_FWDDECL)
#include <Modloader/app/structs/FrameDelayTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameDelayTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
