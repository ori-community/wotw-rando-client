#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceDistortionModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceDistortionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceDistortionModifier_DEFINED)
#include <Modloader/app/structs/TurbulenceDistortionModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceDistortionModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceDistortionModifier_DEFINED
struct TurbulenceDistortionModifier__Class;
struct TurbulenceDistortionModifier {
    struct TurbulenceDistortionModifier__Class* klass;
    MonitorData* monitor;
    struct TurbulenceDistortionModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceDistortionModifier_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceDistortionModifier_FWDDECL
#include <Modloader/app/structs/TurbulenceDistortionModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceDistortionModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceDistortionModifier_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceDistortionModifier_FWDDECL)
#include <Modloader/app/structs/TurbulenceDistortionModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceDistortionModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
