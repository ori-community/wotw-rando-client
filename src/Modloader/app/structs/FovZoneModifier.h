#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FovZoneModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FovZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_FovZoneModifier_DEFINED)
#include <Modloader/app/structs/FovZoneModifier__Fields.h>
#if defined(IL2CPP_STRUCT_FovZoneModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_FovZoneModifier_DEFINED
struct FovZoneModifier__Class;
struct FovZoneModifier {
    struct FovZoneModifier__Class* klass;
    MonitorData* monitor;
    struct FovZoneModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FovZoneModifier_FWDDECL)
#define IL2CPP_STRUCT_FovZoneModifier_FWDDECL
#include <Modloader/app/structs/FovZoneModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_FovZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_FovZoneModifier_DEFINED) && !defined(IL2CPP_STRUCT_FovZoneModifier_FWDDECL)
#include <Modloader/app/structs/FovZoneModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FovZoneModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
