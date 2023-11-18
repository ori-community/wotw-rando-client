#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PolygonJumpGridEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PolygonJumpGridEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry_DEFINED)
#include <Modloader/app/structs/PolygonJumpGridEntry__Fields.h>
#if defined(IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_PolygonJumpGridEntry_DEFINED
struct PolygonJumpGridEntry__Class;
struct PolygonJumpGridEntry {
    struct PolygonJumpGridEntry__Class* klass;
    MonitorData* monitor;
    struct PolygonJumpGridEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry_FWDDECL)
#define IL2CPP_STRUCT_PolygonJumpGridEntry_FWDDECL
#include <Modloader/app/structs/PolygonJumpGridEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_PolygonJumpGridEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry_DEFINED) && !defined(IL2CPP_STRUCT_PolygonJumpGridEntry_FWDDECL)
#include <Modloader/app/structs/PolygonJumpGridEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PolygonJumpGridEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
