#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMinerThrowable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMinerThrowable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMinerThrowable_DEFINED)
#define IL2CPP_STRUCT_IMinerThrowable_DEFINED
struct IMinerThrowable__Class;
struct IMinerThrowable {
    struct IMinerThrowable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMinerThrowable_FWDDECL)
#define IL2CPP_STRUCT_IMinerThrowable_FWDDECL
#include <Modloader/app/structs/IMinerThrowable__Class.h>
#endif
#undef IL2CPP_STRUCT_IMinerThrowable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMinerThrowable_DEFINED) && !defined(IL2CPP_STRUCT_IMinerThrowable_FWDDECL)
#include <Modloader/app/structs/IMinerThrowable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMinerThrowable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
