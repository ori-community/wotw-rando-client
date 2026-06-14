#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionLightModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionLightModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLightModifier_DEFINED)
#include <Modloader/app/structs/InteractionLightModifier__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionLightModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionLightModifier_DEFINED
struct InteractionLightModifier__Class;
struct InteractionLightModifier {
    struct InteractionLightModifier__Class* klass;
    MonitorData* monitor;
    struct InteractionLightModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionLightModifier_FWDDECL)
#define IL2CPP_STRUCT_InteractionLightModifier_FWDDECL
#include <Modloader/app/structs/InteractionLightModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionLightModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLightModifier_DEFINED) && !defined(IL2CPP_STRUCT_InteractionLightModifier_FWDDECL)
#include <Modloader/app/structs/InteractionLightModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionLightModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
