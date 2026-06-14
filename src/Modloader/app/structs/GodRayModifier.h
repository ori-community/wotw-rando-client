#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GodRayModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GodRayModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_GodRayModifier_DEFINED)
#include <Modloader/app/structs/GodRayModifier__Fields.h>
#if defined(IL2CPP_STRUCT_GodRayModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_GodRayModifier_DEFINED
struct GodRayModifier__Class;
struct GodRayModifier {
    struct GodRayModifier__Class* klass;
    MonitorData* monitor;
    struct GodRayModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GodRayModifier_FWDDECL)
#define IL2CPP_STRUCT_GodRayModifier_FWDDECL
#include <Modloader/app/structs/GodRayModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_GodRayModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_GodRayModifier_DEFINED) && !defined(IL2CPP_STRUCT_GodRayModifier_FWDDECL)
#include <Modloader/app/structs/GodRayModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GodRayModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
