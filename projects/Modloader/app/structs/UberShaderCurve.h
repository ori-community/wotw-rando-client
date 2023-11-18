#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCurve_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurve_DEFINED)
#include <Modloader/app/structs/UberShaderCurve__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderCurve__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderCurve_DEFINED
struct UberShaderCurve__Class;
struct UberShaderCurve {
    struct UberShaderCurve__Class* klass;
    MonitorData* monitor;
    struct UberShaderCurve__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCurve_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCurve_FWDDECL
#include <Modloader/app/structs/UberShaderCurve__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurve_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCurve_FWDDECL)
#include <Modloader/app/structs/UberShaderCurve.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCurve.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
