#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Marshal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Marshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Marshal_DEFINED)
#define IL2CPP_STRUCT_Marshal_DEFINED
struct Marshal__Class;
struct Marshal {
    struct Marshal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Marshal_FWDDECL)
#define IL2CPP_STRUCT_Marshal_FWDDECL
#include <Modloader/app/structs/Marshal__Class.h>
#endif
#undef IL2CPP_STRUCT_Marshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Marshal_DEFINED) && !defined(IL2CPP_STRUCT_Marshal_FWDDECL)
#include <Modloader/app/structs/Marshal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Marshal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
