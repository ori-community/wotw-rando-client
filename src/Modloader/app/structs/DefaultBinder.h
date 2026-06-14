#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBinder_DEFINED)
#define IL2CPP_STRUCT_DefaultBinder_DEFINED
struct DefaultBinder__Class;
struct DefaultBinder {
    struct DefaultBinder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultBinder_FWDDECL)
#define IL2CPP_STRUCT_DefaultBinder_FWDDECL
#include <Modloader/app/structs/DefaultBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBinder_DEFINED) && !defined(IL2CPP_STRUCT_DefaultBinder_FWDDECL)
#include <Modloader/app/structs/DefaultBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
