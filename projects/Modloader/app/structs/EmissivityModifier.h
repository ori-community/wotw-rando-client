#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissivityModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissivityModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissivityModifier_DEFINED)
#include <Modloader/app/structs/EmissivityModifier__Fields.h>
#if defined(IL2CPP_STRUCT_EmissivityModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_EmissivityModifier_DEFINED
struct EmissivityModifier__Class;
struct EmissivityModifier {
    struct EmissivityModifier__Class* klass;
    MonitorData* monitor;
    struct EmissivityModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmissivityModifier_FWDDECL)
#define IL2CPP_STRUCT_EmissivityModifier_FWDDECL
#include <Modloader/app/structs/EmissivityModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_EmissivityModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissivityModifier_DEFINED) && !defined(IL2CPP_STRUCT_EmissivityModifier_FWDDECL)
#include <Modloader/app/structs/EmissivityModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissivityModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
