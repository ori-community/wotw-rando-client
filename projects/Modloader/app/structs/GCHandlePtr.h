#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCHandlePtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCHandlePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandlePtr_DEFINED)
#define IL2CPP_STRUCT_GCHandlePtr_DEFINED
struct GCHandlePtr__Class;
struct GCHandlePtr {
    struct GCHandlePtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GCHandlePtr_FWDDECL)
#define IL2CPP_STRUCT_GCHandlePtr_FWDDECL
#include <Modloader/app/structs/GCHandlePtr__Class.h>
#endif
#undef IL2CPP_STRUCT_GCHandlePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandlePtr_DEFINED) && !defined(IL2CPP_STRUCT_GCHandlePtr_FWDDECL)
#include <Modloader/app/structs/GCHandlePtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCHandlePtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
