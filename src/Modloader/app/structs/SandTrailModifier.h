#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandTrailModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailModifier_DEFINED)
#include <Modloader/app/structs/SandTrailModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SandTrailModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SandTrailModifier_DEFINED
struct SandTrailModifier__Class;
struct SandTrailModifier {
    struct SandTrailModifier__Class* klass;
    MonitorData* monitor;
    struct SandTrailModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandTrailModifier_FWDDECL)
#define IL2CPP_STRUCT_SandTrailModifier_FWDDECL
#include <Modloader/app/structs/SandTrailModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SandTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailModifier_DEFINED) && !defined(IL2CPP_STRUCT_SandTrailModifier_FWDDECL)
#include <Modloader/app/structs/SandTrailModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandTrailModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
