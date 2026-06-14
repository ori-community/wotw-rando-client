#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeparationMapModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeparationMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeparationMapModifier_DEFINED)
#include <Modloader/app/structs/SeparationMapModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SeparationMapModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SeparationMapModifier_DEFINED
struct SeparationMapModifier__Class;
struct SeparationMapModifier {
    struct SeparationMapModifier__Class* klass;
    MonitorData* monitor;
    struct SeparationMapModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeparationMapModifier_FWDDECL)
#define IL2CPP_STRUCT_SeparationMapModifier_FWDDECL
#include <Modloader/app/structs/SeparationMapModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SeparationMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeparationMapModifier_DEFINED) && !defined(IL2CPP_STRUCT_SeparationMapModifier_FWDDECL)
#include <Modloader/app/structs/SeparationMapModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeparationMapModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
