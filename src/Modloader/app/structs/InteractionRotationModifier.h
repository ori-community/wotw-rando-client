#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionRotationModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionRotationModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier_DEFINED)
#include <Modloader/app/structs/InteractionRotationModifier__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionRotationModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionRotationModifier_DEFINED
struct InteractionRotationModifier__Class;
struct InteractionRotationModifier {
    struct InteractionRotationModifier__Class* klass;
    MonitorData* monitor;
    struct InteractionRotationModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier_FWDDECL)
#define IL2CPP_STRUCT_InteractionRotationModifier_FWDDECL
#include <Modloader/app/structs/InteractionRotationModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionRotationModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier_DEFINED) && !defined(IL2CPP_STRUCT_InteractionRotationModifier_FWDDECL)
#include <Modloader/app/structs/InteractionRotationModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionRotationModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
