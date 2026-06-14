#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualMoonTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualMoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline_DEFINED)
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_VirtualMoonTimeline_DEFINED
struct VirtualMoonTimeline__Class;
struct VirtualMoonTimeline {
    struct VirtualMoonTimeline__Class* klass;
    MonitorData* monitor;
    struct VirtualMoonTimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline_FWDDECL)
#define IL2CPP_STRUCT_VirtualMoonTimeline_FWDDECL
#include <Modloader/app/structs/VirtualMoonTimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_VirtualMoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline_DEFINED) && !defined(IL2CPP_STRUCT_VirtualMoonTimeline_FWDDECL)
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
