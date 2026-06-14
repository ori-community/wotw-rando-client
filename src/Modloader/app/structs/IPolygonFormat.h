#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPolygonFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPolygonFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygonFormat_DEFINED)
#define IL2CPP_STRUCT_IPolygonFormat_DEFINED
struct IPolygonFormat__Class;
struct IPolygonFormat {
    struct IPolygonFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPolygonFormat_FWDDECL)
#define IL2CPP_STRUCT_IPolygonFormat_FWDDECL
#include <Modloader/app/structs/IPolygonFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_IPolygonFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygonFormat_DEFINED) && !defined(IL2CPP_STRUCT_IPolygonFormat_FWDDECL)
#include <Modloader/app/structs/IPolygonFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPolygonFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
