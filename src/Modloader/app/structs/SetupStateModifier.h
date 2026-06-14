#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier_DEFINED)
#include <Modloader/app/structs/SetupStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SetupStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifier_DEFINED
struct SetupStateModifier__Class;
struct SetupStateModifier {
    struct SetupStateModifier__Class* klass;
    MonitorData* monitor;
    struct SetupStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifier_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifier_FWDDECL
#include <Modloader/app/structs/SetupStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifier_FWDDECL)
#include <Modloader/app/structs/SetupStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
