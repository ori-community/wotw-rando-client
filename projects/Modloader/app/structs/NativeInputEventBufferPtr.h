#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputEventBufferPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputEventBufferPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBufferPtr_DEFINED)
#define IL2CPP_STRUCT_NativeInputEventBufferPtr_DEFINED
struct NativeInputEventBufferPtr__Class;
struct NativeInputEventBufferPtr {
    struct NativeInputEventBufferPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeInputEventBufferPtr_FWDDECL)
#define IL2CPP_STRUCT_NativeInputEventBufferPtr_FWDDECL
#include <Modloader/app/structs/NativeInputEventBufferPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeInputEventBufferPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBufferPtr_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputEventBufferPtr_FWDDECL)
#include <Modloader/app/structs/NativeInputEventBufferPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputEventBufferPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
