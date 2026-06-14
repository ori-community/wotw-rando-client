#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommandBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommandBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBuffer_DEFINED)
#include <Modloader/app/structs/CommandBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_CommandBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_CommandBuffer_DEFINED
struct CommandBuffer__Class;
struct CommandBuffer {
    struct CommandBuffer__Class* klass;
    MonitorData* monitor;
    struct CommandBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommandBuffer_FWDDECL)
#define IL2CPP_STRUCT_CommandBuffer_FWDDECL
#include <Modloader/app/structs/CommandBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_CommandBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBuffer_DEFINED) && !defined(IL2CPP_STRUCT_CommandBuffer_FWDDECL)
#include <Modloader/app/structs/CommandBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommandBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
