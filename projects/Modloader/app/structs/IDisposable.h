#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDisposable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDisposable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDisposable_DEFINED)
#define IL2CPP_STRUCT_IDisposable_DEFINED
struct IDisposable__Class;
struct IDisposable {
    struct IDisposable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDisposable_FWDDECL)
#define IL2CPP_STRUCT_IDisposable_FWDDECL
#include <Modloader/app/structs/IDisposable__Class.h>
#endif
#undef IL2CPP_STRUCT_IDisposable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDisposable_DEFINED) && !defined(IL2CPP_STRUCT_IDisposable_FWDDECL)
#include <Modloader/app/structs/IDisposable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDisposable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
