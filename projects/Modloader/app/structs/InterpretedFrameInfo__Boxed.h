#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_DEFINED)
#include <Modloader/app/structs/InterpretedFrameInfo.h>
#if defined(IL2CPP_STRUCT_InterpretedFrameInfo_DEFINED)
#define IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_DEFINED
struct InterpretedFrameInfo__Class;
struct InterpretedFrameInfo__Boxed {
    struct InterpretedFrameInfo__Class* klass;
    MonitorData* monitor;
    struct InterpretedFrameInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_FWDDECL
#include <Modloader/app/structs/InterpretedFrameInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InterpretedFrameInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/InterpretedFrameInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpretedFrameInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
