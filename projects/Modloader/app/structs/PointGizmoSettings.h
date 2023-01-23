#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointGizmoSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointGizmoSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointGizmoSettings_DEFINED)
#include <Modloader/app/structs/PointGizmoSettings__Fields.h>
#if defined(IL2CPP_STRUCT_PointGizmoSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PointGizmoSettings_DEFINED
struct PointGizmoSettings__Class;
struct PointGizmoSettings {
    struct PointGizmoSettings__Class* klass;
    MonitorData* monitor;
    struct PointGizmoSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointGizmoSettings_FWDDECL)
#define IL2CPP_STRUCT_PointGizmoSettings_FWDDECL
#include <Modloader/app/structs/PointGizmoSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_PointGizmoSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointGizmoSettings_DEFINED) && !defined(IL2CPP_STRUCT_PointGizmoSettings_FWDDECL)
#include <Modloader/app/structs/PointGizmoSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointGizmoSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
