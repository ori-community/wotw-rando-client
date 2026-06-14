#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Double__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Double__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Double__Boxed_DEFINED)
#define IL2CPP_STRUCT_Double__Boxed_DEFINED
struct Double__Class;
struct Double__Boxed {
    struct Double__Class* klass;
    MonitorData* monitor;
    double fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Double__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Double__Boxed_FWDDECL
#include <Modloader/app/structs/Double__Class.h>
#endif
#undef IL2CPP_STRUCT_Double__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Double__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Double__Boxed_FWDDECL)
#include <Modloader/app/structs/Double__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Double__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
