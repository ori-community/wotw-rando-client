#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_DEFINED)
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#if defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_DEFINED
struct FrameCounter_SecondInfo__Class;
struct FrameCounter_SecondInfo__Boxed {
    struct FrameCounter_SecondInfo__Class* klass;
    MonitorData* monitor;
    struct FrameCounter_SecondInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_FWDDECL
#include <Modloader/app/structs/FrameCounter_SecondInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/FrameCounter_SecondInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCounter_SecondInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
