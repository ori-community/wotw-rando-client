#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TessellationModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TessellationModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TessellationModifier_DEFINED)
#include <Modloader/app/structs/TessellationModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TessellationModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TessellationModifier_DEFINED
struct TessellationModifier__Class;
struct TessellationModifier {
    struct TessellationModifier__Class* klass;
    MonitorData* monitor;
    struct TessellationModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TessellationModifier_FWDDECL)
#define IL2CPP_STRUCT_TessellationModifier_FWDDECL
#include <Modloader/app/structs/TessellationModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TessellationModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TessellationModifier_DEFINED) && !defined(IL2CPP_STRUCT_TessellationModifier_FWDDECL)
#include <Modloader/app/structs/TessellationModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TessellationModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
