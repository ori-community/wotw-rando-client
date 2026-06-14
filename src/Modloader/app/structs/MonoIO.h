#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoIO_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoIO_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoIO_DEFINED)
#define IL2CPP_STRUCT_MonoIO_DEFINED
struct MonoIO__Class;
struct MonoIO {
    struct MonoIO__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoIO_FWDDECL)
#define IL2CPP_STRUCT_MonoIO_FWDDECL
#include <Modloader/app/structs/MonoIO__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoIO_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoIO_DEFINED) && !defined(IL2CPP_STRUCT_MonoIO_FWDDECL)
#include <Modloader/app/structs/MonoIO.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoIO.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
