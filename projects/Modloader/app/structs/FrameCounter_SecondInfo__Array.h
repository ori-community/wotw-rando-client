#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_DEFINED)
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#if defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_DEFINED
struct FrameCounter_SecondInfo__Array__Class;
struct FrameCounter_SecondInfo__Array {
    struct FrameCounter_SecondInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct FrameCounter_SecondInfo vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_FWDDECL
#include <Modloader/app/structs/FrameCounter_SecondInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_FrameCounter_SecondInfo__Array_FWDDECL)
#include <Modloader/app/structs/FrameCounter_SecondInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCounter_SecondInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
