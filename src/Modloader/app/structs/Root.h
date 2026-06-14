#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Root_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Root_INITIALIZING
#if !defined(IL2CPP_STRUCT_Root_DEFINED)
#define IL2CPP_STRUCT_Root_DEFINED
struct Root__Class;
struct Root {
    struct Root__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Root_FWDDECL)
#define IL2CPP_STRUCT_Root_FWDDECL
#include <Modloader/app/structs/Root__Class.h>
#endif
#undef IL2CPP_STRUCT_Root_INITIALIZING
#if !defined(IL2CPP_STRUCT_Root_DEFINED) && !defined(IL2CPP_STRUCT_Root_FWDDECL)
#include <Modloader/app/structs/Root.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Root.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
