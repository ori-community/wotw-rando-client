#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortExtraModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortExtraModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortExtraModifier_DEFINED)
#include <Modloader/app/structs/DistortExtraModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DistortExtraModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DistortExtraModifier_DEFINED
struct DistortExtraModifier__Class;
struct DistortExtraModifier {
    struct DistortExtraModifier__Class* klass;
    MonitorData* monitor;
    struct DistortExtraModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DistortExtraModifier_FWDDECL)
#define IL2CPP_STRUCT_DistortExtraModifier_FWDDECL
#include <Modloader/app/structs/DistortExtraModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DistortExtraModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortExtraModifier_DEFINED) && !defined(IL2CPP_STRUCT_DistortExtraModifier_FWDDECL)
#include <Modloader/app/structs/DistortExtraModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortExtraModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
