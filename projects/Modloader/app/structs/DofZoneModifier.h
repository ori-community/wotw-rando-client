#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DofZoneModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DofZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DofZoneModifier_DEFINED)
#include <Modloader/app/structs/DofZoneModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DofZoneModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DofZoneModifier_DEFINED
struct DofZoneModifier__Class;
struct DofZoneModifier {
    struct DofZoneModifier__Class* klass;
    MonitorData* monitor;
    struct DofZoneModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DofZoneModifier_FWDDECL)
#define IL2CPP_STRUCT_DofZoneModifier_FWDDECL
#include <Modloader/app/structs/DofZoneModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DofZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DofZoneModifier_DEFINED) && !defined(IL2CPP_STRUCT_DofZoneModifier_FWDDECL)
#include <Modloader/app/structs/DofZoneModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DofZoneModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
