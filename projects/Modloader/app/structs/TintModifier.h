#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TintModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TintModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TintModifier_DEFINED)
#include <Modloader/app/structs/TintModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TintModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TintModifier_DEFINED
struct TintModifier__Class;
struct TintModifier {
    struct TintModifier__Class* klass;
    MonitorData* monitor;
    struct TintModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TintModifier_FWDDECL)
#define IL2CPP_STRUCT_TintModifier_FWDDECL
#include <Modloader/app/structs/TintModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TintModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TintModifier_DEFINED) && !defined(IL2CPP_STRUCT_TintModifier_FWDDECL)
#include <Modloader/app/structs/TintModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TintModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
