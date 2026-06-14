#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplyLayerModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplyLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplyLayerModifier_DEFINED)
#include <Modloader/app/structs/MultiplyLayerModifier__Fields.h>
#if defined(IL2CPP_STRUCT_MultiplyLayerModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplyLayerModifier_DEFINED
struct MultiplyLayerModifier__Class;
struct MultiplyLayerModifier {
    struct MultiplyLayerModifier__Class* klass;
    MonitorData* monitor;
    struct MultiplyLayerModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplyLayerModifier_FWDDECL)
#define IL2CPP_STRUCT_MultiplyLayerModifier_FWDDECL
#include <Modloader/app/structs/MultiplyLayerModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiplyLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplyLayerModifier_DEFINED) && !defined(IL2CPP_STRUCT_MultiplyLayerModifier_FWDDECL)
#include <Modloader/app/structs/MultiplyLayerModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplyLayerModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
