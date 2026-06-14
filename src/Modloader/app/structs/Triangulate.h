#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Triangulate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Triangulate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangulate_DEFINED)
#define IL2CPP_STRUCT_Triangulate_DEFINED
struct Triangulate__Class;
struct Triangulate {
    struct Triangulate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Triangulate_FWDDECL)
#define IL2CPP_STRUCT_Triangulate_FWDDECL
#include <Modloader/app/structs/Triangulate__Class.h>
#endif
#undef IL2CPP_STRUCT_Triangulate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangulate_DEFINED) && !defined(IL2CPP_STRUCT_Triangulate_FWDDECL)
#include <Modloader/app/structs/Triangulate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Triangulate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
