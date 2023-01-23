#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Binder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Binder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Binder_DEFINED)
#define IL2CPP_STRUCT_Binder_DEFINED
struct Binder__Class;
struct Binder {
    struct Binder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Binder_FWDDECL)
#define IL2CPP_STRUCT_Binder_FWDDECL
#include <Modloader/app/structs/Binder__Class.h>
#endif
#undef IL2CPP_STRUCT_Binder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Binder_DEFINED) && !defined(IL2CPP_STRUCT_Binder_FWDDECL)
#include <Modloader/app/structs/Binder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Binder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
