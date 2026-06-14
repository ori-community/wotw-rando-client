#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Edge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Edge_INITIALIZING
#if !defined(IL2CPP_STRUCT_Edge_DEFINED)
#include <Modloader/app/structs/Edge__Fields.h>
#if defined(IL2CPP_STRUCT_Edge__Fields_DEFINED)
#define IL2CPP_STRUCT_Edge_DEFINED
struct Edge__Class;
struct Edge {
    struct Edge__Class* klass;
    MonitorData* monitor;
    struct Edge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Edge_FWDDECL)
#define IL2CPP_STRUCT_Edge_FWDDECL
#include <Modloader/app/structs/Edge__Class.h>
#endif
#undef IL2CPP_STRUCT_Edge_INITIALIZING
#if !defined(IL2CPP_STRUCT_Edge_DEFINED) && !defined(IL2CPP_STRUCT_Edge_FWDDECL)
#include <Modloader/app/structs/Edge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Edge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
