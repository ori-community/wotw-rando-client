#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderWorldProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderWorldProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldProperty_DEFINED)
#include <Modloader/app/structs/UberShaderWorldProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderWorldProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderWorldProperty_DEFINED
struct UberShaderWorldProperty__Class;
struct UberShaderWorldProperty {
    struct UberShaderWorldProperty__Class* klass;
    MonitorData* monitor;
    struct UberShaderWorldProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderWorldProperty_FWDDECL)
#define IL2CPP_STRUCT_UberShaderWorldProperty_FWDDECL
#include <Modloader/app/structs/UberShaderWorldProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderWorldProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldProperty_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderWorldProperty_FWDDECL)
#include <Modloader/app/structs/UberShaderWorldProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderWorldProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
