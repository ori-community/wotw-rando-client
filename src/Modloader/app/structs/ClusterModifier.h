#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClusterModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClusterModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClusterModifier_DEFINED)
#include <Modloader/app/structs/ClusterModifier__Fields.h>
#if defined(IL2CPP_STRUCT_ClusterModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_ClusterModifier_DEFINED
struct ClusterModifier__Class;
struct ClusterModifier {
    struct ClusterModifier__Class* klass;
    MonitorData* monitor;
    struct ClusterModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClusterModifier_FWDDECL)
#define IL2CPP_STRUCT_ClusterModifier_FWDDECL
#include <Modloader/app/structs/ClusterModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_ClusterModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClusterModifier_DEFINED) && !defined(IL2CPP_STRUCT_ClusterModifier_FWDDECL)
#include <Modloader/app/structs/ClusterModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClusterModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
