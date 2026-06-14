#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPolygon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPolygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygon_DEFINED)
#define IL2CPP_STRUCT_IPolygon_DEFINED
struct IPolygon__Class;
struct IPolygon {
    struct IPolygon__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPolygon_FWDDECL)
#define IL2CPP_STRUCT_IPolygon_FWDDECL
#include <Modloader/app/structs/IPolygon__Class.h>
#endif
#undef IL2CPP_STRUCT_IPolygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygon_DEFINED) && !defined(IL2CPP_STRUCT_IPolygon_FWDDECL)
#include <Modloader/app/structs/IPolygon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPolygon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
