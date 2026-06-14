#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableShaderProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty_DEFINED)
#include <Modloader/app/structs/OverridableShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_OverridableShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_OverridableShaderProperty_DEFINED
struct OverridableShaderProperty__Class;
struct OverridableShaderProperty {
    struct OverridableShaderProperty__Class* klass;
    MonitorData* monitor;
    struct OverridableShaderProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty_FWDDECL)
#define IL2CPP_STRUCT_OverridableShaderProperty_FWDDECL
#include <Modloader/app/structs/OverridableShaderProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_OverridableShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty_DEFINED) && !defined(IL2CPP_STRUCT_OverridableShaderProperty_FWDDECL)
#include <Modloader/app/structs/OverridableShaderProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableShaderProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
