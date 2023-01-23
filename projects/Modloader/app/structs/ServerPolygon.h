#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPolygon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPolygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPolygon_DEFINED)
#include <Modloader/app/structs/ServerPolygon__Fields.h>
#if defined(IL2CPP_STRUCT_ServerPolygon__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerPolygon_DEFINED
struct ServerPolygon__Class;
struct ServerPolygon {
    struct ServerPolygon__Class* klass;
    MonitorData* monitor;
    struct ServerPolygon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerPolygon_FWDDECL)
#define IL2CPP_STRUCT_ServerPolygon_FWDDECL
#include <Modloader/app/structs/ServerPolygon__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerPolygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPolygon_DEFINED) && !defined(IL2CPP_STRUCT_ServerPolygon_FWDDECL)
#include <Modloader/app/structs/ServerPolygon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPolygon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
