#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicsExt__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicsExt__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GraphicsExt__StaticFields_DEFINED
struct CommandBuffer;
struct GraphicsExt__StaticFields {
    bool allowSampling;
    struct CommandBuffer* sampleCmd;
};
#endif
#if !defined(IL2CPP_STRUCT_GraphicsExt__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GraphicsExt__StaticFields_FWDDECL
#include <Modloader/app/structs/CommandBuffer.h>
#endif
#undef IL2CPP_STRUCT_GraphicsExt__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GraphicsExt__StaticFields_FWDDECL)
#include <Modloader/app/structs/GraphicsExt__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicsExt__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
