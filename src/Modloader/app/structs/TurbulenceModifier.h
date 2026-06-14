#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceModifier_DEFINED)
#include <Modloader/app/structs/TurbulenceModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceModifier_DEFINED
struct TurbulenceModifier__Class;
struct TurbulenceModifier {
    struct TurbulenceModifier__Class* klass;
    MonitorData* monitor;
    struct TurbulenceModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceModifier_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceModifier_FWDDECL
#include <Modloader/app/structs/TurbulenceModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceModifier_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceModifier_FWDDECL)
#include <Modloader/app/structs/TurbulenceModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
