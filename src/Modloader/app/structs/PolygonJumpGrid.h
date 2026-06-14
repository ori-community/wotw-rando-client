#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PolygonJumpGrid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PolygonJumpGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGrid_DEFINED)
#include <Modloader/app/structs/PolygonJumpGrid__Fields.h>
#if defined(IL2CPP_STRUCT_PolygonJumpGrid__Fields_DEFINED)
#define IL2CPP_STRUCT_PolygonJumpGrid_DEFINED
struct PolygonJumpGrid__Class;
struct PolygonJumpGrid {
    struct PolygonJumpGrid__Class* klass;
    MonitorData* monitor;
    struct PolygonJumpGrid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PolygonJumpGrid_FWDDECL)
#define IL2CPP_STRUCT_PolygonJumpGrid_FWDDECL
#include <Modloader/app/structs/PolygonJumpGrid__Class.h>
#endif
#undef IL2CPP_STRUCT_PolygonJumpGrid_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGrid_DEFINED) && !defined(IL2CPP_STRUCT_PolygonJumpGrid_FWDDECL)
#include <Modloader/app/structs/PolygonJumpGrid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PolygonJumpGrid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
