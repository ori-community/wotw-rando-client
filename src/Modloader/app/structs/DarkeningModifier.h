#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DarkeningModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DarkeningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DarkeningModifier_DEFINED)
#include <Modloader/app/structs/DarkeningModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DarkeningModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DarkeningModifier_DEFINED
struct DarkeningModifier__Class;
struct DarkeningModifier {
    struct DarkeningModifier__Class* klass;
    MonitorData* monitor;
    struct DarkeningModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DarkeningModifier_FWDDECL)
#define IL2CPP_STRUCT_DarkeningModifier_FWDDECL
#include <Modloader/app/structs/DarkeningModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DarkeningModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DarkeningModifier_DEFINED) && !defined(IL2CPP_STRUCT_DarkeningModifier_FWDDECL)
#include <Modloader/app/structs/DarkeningModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DarkeningModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
