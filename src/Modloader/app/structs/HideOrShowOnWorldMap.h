#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideOrShowOnWorldMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideOrShowOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideOrShowOnWorldMap_DEFINED)
#include <Modloader/app/structs/HideOrShowOnWorldMap__Fields.h>
#if defined(IL2CPP_STRUCT_HideOrShowOnWorldMap__Fields_DEFINED)
#define IL2CPP_STRUCT_HideOrShowOnWorldMap_DEFINED
struct HideOrShowOnWorldMap__Class;
struct HideOrShowOnWorldMap {
    struct HideOrShowOnWorldMap__Class* klass;
    MonitorData* monitor;
    struct HideOrShowOnWorldMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HideOrShowOnWorldMap_FWDDECL)
#define IL2CPP_STRUCT_HideOrShowOnWorldMap_FWDDECL
#include <Modloader/app/structs/HideOrShowOnWorldMap__Class.h>
#endif
#undef IL2CPP_STRUCT_HideOrShowOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideOrShowOnWorldMap_DEFINED) && !defined(IL2CPP_STRUCT_HideOrShowOnWorldMap_FWDDECL)
#include <Modloader/app/structs/HideOrShowOnWorldMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideOrShowOnWorldMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
