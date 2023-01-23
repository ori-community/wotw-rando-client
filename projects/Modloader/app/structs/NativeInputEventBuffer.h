#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputEventBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputEventBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer_DEFINED)
#define IL2CPP_STRUCT_NativeInputEventBuffer_DEFINED
struct Void;
struct NativeInputEventBuffer {
    struct Void* eventBuffer;
    int32_t eventCount;
    int32_t sizeInBytes;
    int32_t capacityInBytes;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer_FWDDECL)
#define IL2CPP_STRUCT_NativeInputEventBuffer_FWDDECL
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_NativeInputEventBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputEventBuffer_FWDDECL)
#include <Modloader/app/structs/NativeInputEventBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputEventBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
