#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DodgeLayerModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DodgeLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DodgeLayerModifier_DEFINED)
#include <Modloader/app/structs/DodgeLayerModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DodgeLayerModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DodgeLayerModifier_DEFINED
struct DodgeLayerModifier__Class;
struct DodgeLayerModifier {
    struct DodgeLayerModifier__Class* klass;
    MonitorData* monitor;
    struct DodgeLayerModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DodgeLayerModifier_FWDDECL)
#define IL2CPP_STRUCT_DodgeLayerModifier_FWDDECL
#include <Modloader/app/structs/DodgeLayerModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DodgeLayerModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DodgeLayerModifier_DEFINED) && !defined(IL2CPP_STRUCT_DodgeLayerModifier_FWDDECL)
#include <Modloader/app/structs/DodgeLayerModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DodgeLayerModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
