#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCaptureTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCaptureTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester_DEFINED)
#include <Modloader/app/structs/FrameCaptureTester__Fields.h>
#if defined(IL2CPP_STRUCT_FrameCaptureTester__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameCaptureTester_DEFINED
struct FrameCaptureTester__Class;
struct FrameCaptureTester {
    struct FrameCaptureTester__Class* klass;
    MonitorData* monitor;
    struct FrameCaptureTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCaptureTester_FWDDECL)
#define IL2CPP_STRUCT_FrameCaptureTester_FWDDECL
#include <Modloader/app/structs/FrameCaptureTester__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameCaptureTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester_DEFINED) && !defined(IL2CPP_STRUCT_FrameCaptureTester_FWDDECL)
#include <Modloader/app/structs/FrameCaptureTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCaptureTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
