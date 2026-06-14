#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivationStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivationStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationStateModifier_DEFINED)
#include <Modloader/app/structs/ActivationStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_ActivationStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivationStateModifier_DEFINED
struct ActivationStateModifier__Class;
struct ActivationStateModifier {
    struct ActivationStateModifier__Class* klass;
    MonitorData* monitor;
    struct ActivationStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivationStateModifier_FWDDECL)
#define IL2CPP_STRUCT_ActivationStateModifier_FWDDECL
#include <Modloader/app/structs/ActivationStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivationStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_ActivationStateModifier_FWDDECL)
#include <Modloader/app/structs/ActivationStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivationStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
