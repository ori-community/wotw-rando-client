#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderDetector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDetector_DEFINED)
#include <Modloader/app/structs/UberShaderDetector__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderDetector__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderDetector_DEFINED
struct UberShaderDetector__Class;
struct UberShaderDetector {
    struct UberShaderDetector__Class* klass;
    MonitorData* monitor;
    struct UberShaderDetector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderDetector_FWDDECL)
#define IL2CPP_STRUCT_UberShaderDetector_FWDDECL
#include <Modloader/app/structs/UberShaderDetector__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDetector_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderDetector_FWDDECL)
#include <Modloader/app/structs/UberShaderDetector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderDetector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
