#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalLightModifierExtra_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalLightModifierExtra_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightModifierExtra_DEFINED)
#include <Modloader/app/structs/DirectionalLightModifierExtra__Fields.h>
#if defined(IL2CPP_STRUCT_DirectionalLightModifierExtra__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectionalLightModifierExtra_DEFINED
struct DirectionalLightModifierExtra__Class;
struct DirectionalLightModifierExtra {
    struct DirectionalLightModifierExtra__Class* klass;
    MonitorData* monitor;
    struct DirectionalLightModifierExtra__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalLightModifierExtra_FWDDECL)
#define IL2CPP_STRUCT_DirectionalLightModifierExtra_FWDDECL
#include <Modloader/app/structs/DirectionalLightModifierExtra__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectionalLightModifierExtra_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightModifierExtra_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalLightModifierExtra_FWDDECL)
#include <Modloader/app/structs/DirectionalLightModifierExtra.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalLightModifierExtra.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
