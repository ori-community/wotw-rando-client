#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_DEFINED)
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#if defined(IL2CPP_STRUCT_Compositor_CumulativeStats_DEFINED)
#define IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_DEFINED
struct Compositor_CumulativeStats__Class;
struct Compositor_CumulativeStats__Boxed {
    struct Compositor_CumulativeStats__Class* klass;
    MonitorData* monitor;
    struct Compositor_CumulativeStats fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_FWDDECL
#include <Modloader/app/structs/Compositor_CumulativeStats__Class.h>
#endif
#undef IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Compositor_CumulativeStats__Boxed_FWDDECL)
#include <Modloader/app/structs/Compositor_CumulativeStats__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compositor_CumulativeStats__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
