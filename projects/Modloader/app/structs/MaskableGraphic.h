#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskableGraphic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskableGraphic_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskableGraphic_DEFINED)
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#if defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskableGraphic_DEFINED
struct MaskableGraphic__Class;
struct MaskableGraphic {
    struct MaskableGraphic__Class* klass;
    MonitorData* monitor;
    struct MaskableGraphic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskableGraphic_FWDDECL)
#define IL2CPP_STRUCT_MaskableGraphic_FWDDECL
#include <Modloader/app/structs/MaskableGraphic__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskableGraphic_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskableGraphic_DEFINED) && !defined(IL2CPP_STRUCT_MaskableGraphic_FWDDECL)
#include <Modloader/app/structs/MaskableGraphic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskableGraphic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
