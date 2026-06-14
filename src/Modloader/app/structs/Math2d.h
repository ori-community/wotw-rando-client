#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Math2d_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Math2d_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math2d_DEFINED)
#define IL2CPP_STRUCT_Math2d_DEFINED
struct Math2d__Class;
struct Math2d {
    struct Math2d__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Math2d_FWDDECL)
#define IL2CPP_STRUCT_Math2d_FWDDECL
#include <Modloader/app/structs/Math2d__Class.h>
#endif
#undef IL2CPP_STRUCT_Math2d_INITIALIZING
#if !defined(IL2CPP_STRUCT_Math2d_DEFINED) && !defined(IL2CPP_STRUCT_Math2d_FWDDECL)
#include <Modloader/app/structs/Math2d.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Math2d.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
