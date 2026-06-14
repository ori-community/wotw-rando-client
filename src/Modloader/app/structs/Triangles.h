#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Triangles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Triangles_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangles_DEFINED)
#define IL2CPP_STRUCT_Triangles_DEFINED
struct Triangles__Class;
struct Triangles {
    struct Triangles__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Triangles_FWDDECL)
#define IL2CPP_STRUCT_Triangles_FWDDECL
#include <Modloader/app/structs/Triangles__Class.h>
#endif
#undef IL2CPP_STRUCT_Triangles_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangles_DEFINED) && !defined(IL2CPP_STRUCT_Triangles_FWDDECL)
#include <Modloader/app/structs/Triangles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Triangles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
