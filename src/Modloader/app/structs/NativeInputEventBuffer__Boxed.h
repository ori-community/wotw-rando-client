#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_DEFINED)
#include <Modloader/app/structs/NativeInputEventBuffer.h>
#if defined(IL2CPP_STRUCT_NativeInputEventBuffer_DEFINED)
#define IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_DEFINED
struct NativeInputEventBuffer__Class;
struct NativeInputEventBuffer__Boxed {
    struct NativeInputEventBuffer__Class* klass;
    MonitorData* monitor;
    struct NativeInputEventBuffer fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_FWDDECL
#include <Modloader/app/structs/NativeInputEventBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputEventBuffer__Boxed_FWDDECL)
#include <Modloader/app/structs/NativeInputEventBuffer__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputEventBuffer__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
