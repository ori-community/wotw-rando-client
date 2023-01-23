#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreaseShading_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreaseShading_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreaseShading_DEFINED)
#include <Modloader/app/structs/CreaseShading__Fields.h>
#if defined(IL2CPP_STRUCT_CreaseShading__Fields_DEFINED)
#define IL2CPP_STRUCT_CreaseShading_DEFINED
struct CreaseShading__Class;
struct CreaseShading {
    struct CreaseShading__Class* klass;
    MonitorData* monitor;
    struct CreaseShading__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreaseShading_FWDDECL)
#define IL2CPP_STRUCT_CreaseShading_FWDDECL
#include <Modloader/app/structs/CreaseShading__Class.h>
#endif
#undef IL2CPP_STRUCT_CreaseShading_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreaseShading_DEFINED) && !defined(IL2CPP_STRUCT_CreaseShading_FWDDECL)
#include <Modloader/app/structs/CreaseShading.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreaseShading.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
