#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Path2d_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Path2d_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path2d_DEFINED)
#include <Modloader/app/structs/Path2d__Fields.h>
#if defined(IL2CPP_STRUCT_Path2d__Fields_DEFINED)
#define IL2CPP_STRUCT_Path2d_DEFINED
struct Path2d__Class;
struct Path2d {
    struct Path2d__Class* klass;
    MonitorData* monitor;
    struct Path2d__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Path2d_FWDDECL)
#define IL2CPP_STRUCT_Path2d_FWDDECL
#include <Modloader/app/structs/Path2d__Class.h>
#endif
#undef IL2CPP_STRUCT_Path2d_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path2d_DEFINED) && !defined(IL2CPP_STRUCT_Path2d_FWDDECL)
#include <Modloader/app/structs/Path2d.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Path2d.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
