#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GradientRemapModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GradientRemapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRemapModifier_DEFINED)
#include <Modloader/app/structs/GradientRemapModifier__Fields.h>
#if defined(IL2CPP_STRUCT_GradientRemapModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_GradientRemapModifier_DEFINED
struct GradientRemapModifier__Class;
struct GradientRemapModifier {
    struct GradientRemapModifier__Class* klass;
    MonitorData* monitor;
    struct GradientRemapModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GradientRemapModifier_FWDDECL)
#define IL2CPP_STRUCT_GradientRemapModifier_FWDDECL
#include <Modloader/app/structs/GradientRemapModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_GradientRemapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRemapModifier_DEFINED) && !defined(IL2CPP_STRUCT_GradientRemapModifier_FWDDECL)
#include <Modloader/app/structs/GradientRemapModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GradientRemapModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
