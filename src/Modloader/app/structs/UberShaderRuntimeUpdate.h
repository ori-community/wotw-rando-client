#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRuntimeUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate_DEFINED)
#include <Modloader/app/structs/UberShaderRuntimeUpdate__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate_DEFINED
struct UberShaderRuntimeUpdate__Class;
struct UberShaderRuntimeUpdate {
    struct UberShaderRuntimeUpdate__Class* klass;
    MonitorData* monitor;
    struct UberShaderRuntimeUpdate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate_FWDDECL
#include <Modloader/app/structs/UberShaderRuntimeUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRuntimeUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate_FWDDECL)
#include <Modloader/app/structs/UberShaderRuntimeUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRuntimeUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
