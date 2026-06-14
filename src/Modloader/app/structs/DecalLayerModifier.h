#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecalLayerModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecalLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecalLayerModifier_DEFINED)
#include <Modloader/app/structs/DecalLayerModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DecalLayerModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DecalLayerModifier_DEFINED
struct DecalLayerModifier__Class;
struct DecalLayerModifier {
    struct DecalLayerModifier__Class* klass;
    MonitorData* monitor;
    struct DecalLayerModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecalLayerModifier_FWDDECL)
#define IL2CPP_STRUCT_DecalLayerModifier_FWDDECL
#include <Modloader/app/structs/DecalLayerModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DecalLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecalLayerModifier_DEFINED) && !defined(IL2CPP_STRUCT_DecalLayerModifier_FWDDECL)
#include <Modloader/app/structs/DecalLayerModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecalLayerModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
