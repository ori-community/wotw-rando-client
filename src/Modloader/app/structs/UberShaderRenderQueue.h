#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRenderQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRenderQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRenderQueue_DEFINED)
#define IL2CPP_STRUCT_UberShaderRenderQueue_DEFINED
struct UberShaderRenderQueue__Class;
struct UberShaderRenderQueue {
    struct UberShaderRenderQueue__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRenderQueue_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRenderQueue_FWDDECL
#include <Modloader/app/structs/UberShaderRenderQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRenderQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRenderQueue_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRenderQueue_FWDDECL)
#include <Modloader/app/structs/UberShaderRenderQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRenderQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
