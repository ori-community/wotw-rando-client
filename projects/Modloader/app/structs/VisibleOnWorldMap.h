#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisibleOnWorldMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisibleOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap_DEFINED)
#include <Modloader/app/structs/VisibleOnWorldMap__Fields.h>
#if defined(IL2CPP_STRUCT_VisibleOnWorldMap__Fields_DEFINED)
#define IL2CPP_STRUCT_VisibleOnWorldMap_DEFINED
struct VisibleOnWorldMap__Class;
struct VisibleOnWorldMap {
    struct VisibleOnWorldMap__Class* klass;
    MonitorData* monitor;
    struct VisibleOnWorldMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap_FWDDECL)
#define IL2CPP_STRUCT_VisibleOnWorldMap_FWDDECL
#include <Modloader/app/structs/VisibleOnWorldMap__Class.h>
#endif
#undef IL2CPP_STRUCT_VisibleOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleOnWorldMap_DEFINED) && !defined(IL2CPP_STRUCT_VisibleOnWorldMap_FWDDECL)
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
