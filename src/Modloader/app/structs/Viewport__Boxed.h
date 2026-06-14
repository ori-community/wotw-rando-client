#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Viewport__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Viewport__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Viewport__Boxed_DEFINED)
#include <Modloader/app/structs/Viewport.h>
#if defined(IL2CPP_STRUCT_Viewport_DEFINED)
#define IL2CPP_STRUCT_Viewport__Boxed_DEFINED
struct Viewport__Class;
struct Viewport__Boxed {
    struct Viewport__Class* klass;
    MonitorData* monitor;
    struct Viewport fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Viewport__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Viewport__Boxed_FWDDECL
#include <Modloader/app/structs/Viewport__Class.h>
#endif
#undef IL2CPP_STRUCT_Viewport__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Viewport__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Viewport__Boxed_FWDDECL)
#include <Modloader/app/structs/Viewport__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Viewport__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
