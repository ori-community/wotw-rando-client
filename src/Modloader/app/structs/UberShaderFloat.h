#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFloat_DEFINED)
#include <Modloader/app/structs/UberShaderFloat__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderFloat_DEFINED
struct UberShaderFloat__Class;
struct UberShaderFloat {
    struct UberShaderFloat__Class* klass;
    MonitorData* monitor;
    struct UberShaderFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderFloat_FWDDECL)
#define IL2CPP_STRUCT_UberShaderFloat_FWDDECL
#include <Modloader/app/structs/UberShaderFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFloat_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderFloat_FWDDECL)
#include <Modloader/app/structs/UberShaderFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
