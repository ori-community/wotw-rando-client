#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFRunLoop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFRunLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRunLoop_DEFINED)
#include <Modloader/app/structs/CFRunLoop__Fields.h>
#if defined(IL2CPP_STRUCT_CFRunLoop__Fields_DEFINED)
#define IL2CPP_STRUCT_CFRunLoop_DEFINED
struct CFRunLoop__Class;
struct CFRunLoop {
    struct CFRunLoop__Class* klass;
    MonitorData* monitor;
    struct CFRunLoop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFRunLoop_FWDDECL)
#define IL2CPP_STRUCT_CFRunLoop_FWDDECL
#include <Modloader/app/structs/CFRunLoop__Class.h>
#endif
#undef IL2CPP_STRUCT_CFRunLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRunLoop_DEFINED) && !defined(IL2CPP_STRUCT_CFRunLoop_FWDDECL)
#include <Modloader/app/structs/CFRunLoop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFRunLoop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
