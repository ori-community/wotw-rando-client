#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData__Boxed_DEFINED)
#include <Modloader/app/structs/FrameData.h>
#if defined(IL2CPP_STRUCT_FrameData_DEFINED)
#define IL2CPP_STRUCT_FrameData__Boxed_DEFINED
struct FrameData__Class;
struct FrameData__Boxed {
    struct FrameData__Class* klass;
    MonitorData* monitor;
    struct FrameData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FrameData__Boxed_FWDDECL
#include <Modloader/app/structs/FrameData__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FrameData__Boxed_FWDDECL)
#include <Modloader/app/structs/FrameData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
