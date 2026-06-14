#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortModifier_DEFINED)
#include <Modloader/app/structs/DistortModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DistortModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DistortModifier_DEFINED
struct DistortModifier__Class;
struct DistortModifier {
    struct DistortModifier__Class* klass;
    MonitorData* monitor;
    struct DistortModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DistortModifier_FWDDECL)
#define IL2CPP_STRUCT_DistortModifier_FWDDECL
#include <Modloader/app/structs/DistortModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DistortModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortModifier_DEFINED) && !defined(IL2CPP_STRUCT_DistortModifier_FWDDECL)
#include <Modloader/app/structs/DistortModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
