#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthPrecullModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthPrecullModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthPrecullModifier_DEFINED)
#include <Modloader/app/structs/DepthPrecullModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DepthPrecullModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DepthPrecullModifier_DEFINED
struct DepthPrecullModifier__Class;
struct DepthPrecullModifier {
    struct DepthPrecullModifier__Class* klass;
    MonitorData* monitor;
    struct DepthPrecullModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthPrecullModifier_FWDDECL)
#define IL2CPP_STRUCT_DepthPrecullModifier_FWDDECL
#include <Modloader/app/structs/DepthPrecullModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DepthPrecullModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthPrecullModifier_DEFINED) && !defined(IL2CPP_STRUCT_DepthPrecullModifier_FWDDECL)
#include <Modloader/app/structs/DepthPrecullModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthPrecullModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
