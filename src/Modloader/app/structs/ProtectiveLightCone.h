#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtectiveLightCone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtectiveLightCone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone_DEFINED)
#include <Modloader/app/structs/ProtectiveLightCone__Fields.h>
#if defined(IL2CPP_STRUCT_ProtectiveLightCone__Fields_DEFINED)
#define IL2CPP_STRUCT_ProtectiveLightCone_DEFINED
struct ProtectiveLightCone__Class;
struct ProtectiveLightCone {
    struct ProtectiveLightCone__Class* klass;
    MonitorData* monitor;
    struct ProtectiveLightCone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone_FWDDECL)
#define IL2CPP_STRUCT_ProtectiveLightCone_FWDDECL
#include <Modloader/app/structs/ProtectiveLightCone__Class.h>
#endif
#undef IL2CPP_STRUCT_ProtectiveLightCone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightCone_DEFINED) && !defined(IL2CPP_STRUCT_ProtectiveLightCone_FWDDECL)
#include <Modloader/app/structs/ProtectiveLightCone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtectiveLightCone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
