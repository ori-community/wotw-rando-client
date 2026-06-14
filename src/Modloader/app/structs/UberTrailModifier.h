#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTrailModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTrailModifier_DEFINED)
#include <Modloader/app/structs/UberTrailModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberTrailModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_UberTrailModifier_DEFINED
struct UberTrailModifier__Class;
struct UberTrailModifier {
    struct UberTrailModifier__Class* klass;
    MonitorData* monitor;
    struct UberTrailModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberTrailModifier_FWDDECL)
#define IL2CPP_STRUCT_UberTrailModifier_FWDDECL
#include <Modloader/app/structs/UberTrailModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_UberTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTrailModifier_DEFINED) && !defined(IL2CPP_STRUCT_UberTrailModifier_FWDDECL)
#include <Modloader/app/structs/UberTrailModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTrailModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
