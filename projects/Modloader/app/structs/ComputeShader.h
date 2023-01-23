#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComputeShader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComputeShader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeShader_DEFINED)
#include <Modloader/app/structs/ComputeShader__Fields.h>
#if defined(IL2CPP_STRUCT_ComputeShader__Fields_DEFINED)
#define IL2CPP_STRUCT_ComputeShader_DEFINED
struct ComputeShader__Class;
struct ComputeShader {
    struct ComputeShader__Class* klass;
    MonitorData* monitor;
    struct ComputeShader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComputeShader_FWDDECL)
#define IL2CPP_STRUCT_ComputeShader_FWDDECL
#include <Modloader/app/structs/ComputeShader__Class.h>
#endif
#undef IL2CPP_STRUCT_ComputeShader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeShader_DEFINED) && !defined(IL2CPP_STRUCT_ComputeShader_FWDDECL)
#include <Modloader/app/structs/ComputeShader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComputeShader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
