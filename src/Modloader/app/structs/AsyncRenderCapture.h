#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRenderCapture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRenderCapture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture_DEFINED)
#include <Modloader/app/structs/AsyncRenderCapture__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncRenderCapture__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncRenderCapture_DEFINED
struct AsyncRenderCapture__Class;
struct AsyncRenderCapture {
    struct AsyncRenderCapture__Class* klass;
    MonitorData* monitor;
    struct AsyncRenderCapture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture_FWDDECL)
#define IL2CPP_STRUCT_AsyncRenderCapture_FWDDECL
#include <Modloader/app/structs/AsyncRenderCapture__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncRenderCapture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRenderCapture_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRenderCapture_FWDDECL)
#include <Modloader/app/structs/AsyncRenderCapture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRenderCapture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
