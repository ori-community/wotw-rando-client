#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeOverlapped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeOverlapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeOverlapped_DEFINED)
#define IL2CPP_STRUCT_NativeOverlapped_DEFINED
struct NativeOverlapped {
    void* InternalLow;
    void* InternalHigh;
    int32_t OffsetLow;
    int32_t OffsetHigh;
    void* EventHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeOverlapped_FWDDECL)
#define IL2CPP_STRUCT_NativeOverlapped_FWDDECL
#endif
#undef IL2CPP_STRUCT_NativeOverlapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeOverlapped_DEFINED) && !defined(IL2CPP_STRUCT_NativeOverlapped_FWDDECL)
#include <Modloader/app/structs/NativeOverlapped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeOverlapped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
