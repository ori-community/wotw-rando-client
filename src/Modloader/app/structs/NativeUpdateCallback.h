#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeUpdateCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeUpdateCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeUpdateCallback_DEFINED)
#include <Modloader/app/structs/NativeUpdateCallback__Fields.h>
#if defined(IL2CPP_STRUCT_NativeUpdateCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeUpdateCallback_DEFINED
struct NativeUpdateCallback__Class;
struct NativeUpdateCallback {
    struct NativeUpdateCallback__Class* klass;
    MonitorData* monitor;
    struct NativeUpdateCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeUpdateCallback_FWDDECL)
#define IL2CPP_STRUCT_NativeUpdateCallback_FWDDECL
#include <Modloader/app/structs/NativeUpdateCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeUpdateCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeUpdateCallback_DEFINED) && !defined(IL2CPP_STRUCT_NativeUpdateCallback_FWDDECL)
#include <Modloader/app/structs/NativeUpdateCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeUpdateCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
