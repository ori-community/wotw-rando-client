#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_DEFINED)
#include <Modloader/app/structs/UberInteractionModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberInteractionModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionModifier_DEFINED
struct UberInteractionModifier__Class;
struct UberInteractionModifier {
    struct UberInteractionModifier__Class* klass;
    MonitorData* monitor;
    struct UberInteractionModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionModifier_FWDDECL
#include <Modloader/app/structs/UberInteractionModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionModifier_FWDDECL)
#include <Modloader/app/structs/UberInteractionModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
