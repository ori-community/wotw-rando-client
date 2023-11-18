#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PassiveStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PassiveStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateModifier_DEFINED)
#include <Modloader/app/structs/PassiveStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_PassiveStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_PassiveStateModifier_DEFINED
struct PassiveStateModifier__Class;
struct PassiveStateModifier {
    struct PassiveStateModifier__Class* klass;
    MonitorData* monitor;
    struct PassiveStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PassiveStateModifier_FWDDECL)
#define IL2CPP_STRUCT_PassiveStateModifier_FWDDECL
#include <Modloader/app/structs/PassiveStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_PassiveStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_PassiveStateModifier_FWDDECL)
#include <Modloader/app/structs/PassiveStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PassiveStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
