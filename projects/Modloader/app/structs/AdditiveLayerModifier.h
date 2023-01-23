#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdditiveLayerModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdditiveLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveLayerModifier_DEFINED)
#include <Modloader/app/structs/AdditiveLayerModifier__Fields.h>
#if defined(IL2CPP_STRUCT_AdditiveLayerModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_AdditiveLayerModifier_DEFINED
struct AdditiveLayerModifier__Class;
struct AdditiveLayerModifier {
    struct AdditiveLayerModifier__Class* klass;
    MonitorData* monitor;
    struct AdditiveLayerModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdditiveLayerModifier_FWDDECL)
#define IL2CPP_STRUCT_AdditiveLayerModifier_FWDDECL
#include <Modloader/app/structs/AdditiveLayerModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_AdditiveLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveLayerModifier_DEFINED) && !defined(IL2CPP_STRUCT_AdditiveLayerModifier_FWDDECL)
#include <Modloader/app/structs/AdditiveLayerModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdditiveLayerModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
