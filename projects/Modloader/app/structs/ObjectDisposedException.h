#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectDisposedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectDisposedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectDisposedException_DEFINED)
#include <Modloader/app/structs/ObjectDisposedException__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectDisposedException__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectDisposedException_DEFINED
struct ObjectDisposedException__Class;
struct ObjectDisposedException {
    struct ObjectDisposedException__Class* klass;
    MonitorData* monitor;
    struct ObjectDisposedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectDisposedException_FWDDECL)
#define IL2CPP_STRUCT_ObjectDisposedException_FWDDECL
#include <Modloader/app/structs/ObjectDisposedException__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectDisposedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectDisposedException_DEFINED) && !defined(IL2CPP_STRUCT_ObjectDisposedException_FWDDECL)
#include <Modloader/app/structs/ObjectDisposedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectDisposedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
