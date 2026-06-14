#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComputeBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComputeBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeBuffer_DEFINED)
#include <Modloader/app/structs/ComputeBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_ComputeBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_ComputeBuffer_DEFINED
struct ComputeBuffer__Class;
struct ComputeBuffer {
    struct ComputeBuffer__Class* klass;
    MonitorData* monitor;
    struct ComputeBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComputeBuffer_FWDDECL)
#define IL2CPP_STRUCT_ComputeBuffer_FWDDECL
#include <Modloader/app/structs/ComputeBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_ComputeBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeBuffer_DEFINED) && !defined(IL2CPP_STRUCT_ComputeBuffer_FWDDECL)
#include <Modloader/app/structs/ComputeBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComputeBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
