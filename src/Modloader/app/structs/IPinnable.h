#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPinnable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPinnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPinnable_DEFINED)
#define IL2CPP_STRUCT_IPinnable_DEFINED
struct IPinnable__Class;
struct IPinnable {
    struct IPinnable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPinnable_FWDDECL)
#define IL2CPP_STRUCT_IPinnable_FWDDECL
#include <Modloader/app/structs/IPinnable__Class.h>
#endif
#undef IL2CPP_STRUCT_IPinnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPinnable_DEFINED) && !defined(IL2CPP_STRUCT_IPinnable_FWDDECL)
#include <Modloader/app/structs/IPinnable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPinnable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
