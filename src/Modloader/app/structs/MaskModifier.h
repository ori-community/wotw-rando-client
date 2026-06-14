#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskModifier_DEFINED)
#include <Modloader/app/structs/MaskModifier__Fields.h>
#if defined(IL2CPP_STRUCT_MaskModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskModifier_DEFINED
struct MaskModifier__Class;
struct MaskModifier {
    struct MaskModifier__Class* klass;
    MonitorData* monitor;
    struct MaskModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskModifier_FWDDECL)
#define IL2CPP_STRUCT_MaskModifier_FWDDECL
#include <Modloader/app/structs/MaskModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskModifier_DEFINED) && !defined(IL2CPP_STRUCT_MaskModifier_FWDDECL)
#include <Modloader/app/structs/MaskModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
