#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XUserChangeEventCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XUserChangeEventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserChangeEventCallback_DEFINED)
#include <Modloader/app/structs/XUserChangeEventCallback__Fields.h>
#if defined(IL2CPP_STRUCT_XUserChangeEventCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_XUserChangeEventCallback_DEFINED
struct XUserChangeEventCallback__Class;
struct XUserChangeEventCallback {
    struct XUserChangeEventCallback__Class* klass;
    MonitorData* monitor;
    struct XUserChangeEventCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XUserChangeEventCallback_FWDDECL)
#define IL2CPP_STRUCT_XUserChangeEventCallback_FWDDECL
#include <Modloader/app/structs/XUserChangeEventCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_XUserChangeEventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserChangeEventCallback_DEFINED) && !defined(IL2CPP_STRUCT_XUserChangeEventCallback_FWDDECL)
#include <Modloader/app/structs/XUserChangeEventCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XUserChangeEventCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
