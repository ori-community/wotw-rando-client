#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinimalTrailModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinimalTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinimalTrailModifier_DEFINED)
#include <Modloader/app/structs/MinimalTrailModifier__Fields.h>
#if defined(IL2CPP_STRUCT_MinimalTrailModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MinimalTrailModifier_DEFINED
struct MinimalTrailModifier__Class;
struct MinimalTrailModifier {
    struct MinimalTrailModifier__Class* klass;
    MonitorData* monitor;
    struct MinimalTrailModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinimalTrailModifier_FWDDECL)
#define IL2CPP_STRUCT_MinimalTrailModifier_FWDDECL
#include <Modloader/app/structs/MinimalTrailModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_MinimalTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinimalTrailModifier_DEFINED) && !defined(IL2CPP_STRUCT_MinimalTrailModifier_FWDDECL)
#include <Modloader/app/structs/MinimalTrailModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinimalTrailModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
