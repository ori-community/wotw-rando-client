#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoftEdgeModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoftEdgeModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftEdgeModifier_DEFINED)
#include <Modloader/app/structs/SoftEdgeModifier__Fields.h>
#if defined(IL2CPP_STRUCT_SoftEdgeModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SoftEdgeModifier_DEFINED
struct SoftEdgeModifier__Class;
struct SoftEdgeModifier {
    struct SoftEdgeModifier__Class* klass;
    MonitorData* monitor;
    struct SoftEdgeModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoftEdgeModifier_FWDDECL)
#define IL2CPP_STRUCT_SoftEdgeModifier_FWDDECL
#include <Modloader/app/structs/SoftEdgeModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SoftEdgeModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftEdgeModifier_DEFINED) && !defined(IL2CPP_STRUCT_SoftEdgeModifier_FWDDECL)
#include <Modloader/app/structs/SoftEdgeModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoftEdgeModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
