#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectExt__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectExt__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectExt__Boxed_DEFINED)
#include <Modloader/app/structs/RectExt.h>
#if defined(IL2CPP_STRUCT_RectExt_DEFINED)
#define IL2CPP_STRUCT_RectExt__Boxed_DEFINED
struct RectExt__Class;
struct RectExt__Boxed {
    struct RectExt__Class* klass;
    MonitorData* monitor;
    struct RectExt fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RectExt__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RectExt__Boxed_FWDDECL
#include <Modloader/app/structs/RectExt__Class.h>
#endif
#undef IL2CPP_STRUCT_RectExt__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectExt__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RectExt__Boxed_FWDDECL)
#include <Modloader/app/structs/RectExt__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectExt__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
