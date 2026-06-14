#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperty_DEFINED)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderProperty_DEFINED
struct UberShaderProperty__Class;
struct UberShaderProperty {
    struct UberShaderProperty__Class* klass;
    MonitorData* monitor;
    struct UberShaderProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderProperty_FWDDECL)
#define IL2CPP_STRUCT_UberShaderProperty_FWDDECL
#include <Modloader/app/structs/UberShaderProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperty_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderProperty_FWDDECL)
#include <Modloader/app/structs/UberShaderProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
