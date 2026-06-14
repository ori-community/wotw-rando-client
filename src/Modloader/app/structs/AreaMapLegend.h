#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapLegend_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapLegend_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapLegend_DEFINED)
#include <Modloader/app/structs/AreaMapLegend__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapLegend__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapLegend_DEFINED
struct AreaMapLegend__Class;
struct AreaMapLegend {
    struct AreaMapLegend__Class* klass;
    MonitorData* monitor;
    struct AreaMapLegend__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapLegend_FWDDECL)
#define IL2CPP_STRUCT_AreaMapLegend_FWDDECL
#include <Modloader/app/structs/AreaMapLegend__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapLegend_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapLegend_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapLegend_FWDDECL)
#include <Modloader/app/structs/AreaMapLegend.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapLegend.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
