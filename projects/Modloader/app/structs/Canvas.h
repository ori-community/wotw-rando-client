#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Canvas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Canvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_Canvas_DEFINED)
#include <Modloader/app/structs/Canvas__Fields.h>
#if defined(IL2CPP_STRUCT_Canvas__Fields_DEFINED)
#define IL2CPP_STRUCT_Canvas_DEFINED
struct Canvas__Class;
struct Canvas {
    struct Canvas__Class* klass;
    MonitorData* monitor;
    struct Canvas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Canvas_FWDDECL)
#define IL2CPP_STRUCT_Canvas_FWDDECL
#include <Modloader/app/structs/Canvas__Class.h>
#endif
#undef IL2CPP_STRUCT_Canvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_Canvas_DEFINED) && !defined(IL2CPP_STRUCT_Canvas_FWDDECL)
#include <Modloader/app/structs/Canvas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Canvas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
