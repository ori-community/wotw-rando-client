#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_DEFINED)
#include <Modloader/app/structs/FrameCounter__Fields.h>
#if defined(IL2CPP_STRUCT_FrameCounter__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameCounter_DEFINED
struct FrameCounter__Class;
struct FrameCounter {
    struct FrameCounter__Class* klass;
    MonitorData* monitor;
    struct FrameCounter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCounter_FWDDECL)
#define IL2CPP_STRUCT_FrameCounter_FWDDECL
#include <Modloader/app/structs/FrameCounter__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_DEFINED) && !defined(IL2CPP_STRUCT_FrameCounter_FWDDECL)
#include <Modloader/app/structs/FrameCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
