#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionPunchModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionPunchModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier_DEFINED)
#include <Modloader/app/structs/InteractionPunchModifier__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionPunchModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionPunchModifier_DEFINED
struct InteractionPunchModifier__Class;
struct InteractionPunchModifier {
    struct InteractionPunchModifier__Class* klass;
    MonitorData* monitor;
    struct InteractionPunchModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier_FWDDECL)
#define IL2CPP_STRUCT_InteractionPunchModifier_FWDDECL
#include <Modloader/app/structs/InteractionPunchModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionPunchModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier_DEFINED) && !defined(IL2CPP_STRUCT_InteractionPunchModifier_FWDDECL)
#include <Modloader/app/structs/InteractionPunchModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionPunchModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
