#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Polygon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Polygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon_DEFINED)
#include <Modloader/app/structs/Polygon__Fields.h>
#if defined(IL2CPP_STRUCT_Polygon__Fields_DEFINED)
#define IL2CPP_STRUCT_Polygon_DEFINED
struct Polygon__Class;
struct Polygon {
    struct Polygon__Class* klass;
    MonitorData* monitor;
    struct Polygon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Polygon_FWDDECL)
#define IL2CPP_STRUCT_Polygon_FWDDECL
#include <Modloader/app/structs/Polygon__Class.h>
#endif
#undef IL2CPP_STRUCT_Polygon_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon_DEFINED) && !defined(IL2CPP_STRUCT_Polygon_FWDDECL)
#include <Modloader/app/structs/Polygon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Polygon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
