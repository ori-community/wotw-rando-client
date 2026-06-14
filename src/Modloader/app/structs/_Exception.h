#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Exception_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT__Exception_DEFINED)
#define IL2CPP_STRUCT__Exception_DEFINED
struct _Exception__Class;
struct _Exception {
    struct _Exception__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Exception_FWDDECL)
#define IL2CPP_STRUCT__Exception_FWDDECL
#include <Modloader/app/structs/_Exception__Class.h>
#endif
#undef IL2CPP_STRUCT__Exception_INITIALIZING
#if !defined(IL2CPP_STRUCT__Exception_DEFINED) && !defined(IL2CPP_STRUCT__Exception_FWDDECL)
#include <Modloader/app/structs/_Exception.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Exception.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
