#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderBuffer_DEFINED)
#define IL2CPP_STRUCT_RenderBuffer_DEFINED
struct RenderBuffer {
    int32_t m_RenderTextureInstanceID;
    void* m_BufferPtr;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderBuffer_FWDDECL)
#define IL2CPP_STRUCT_RenderBuffer_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderBuffer_DEFINED) && !defined(IL2CPP_STRUCT_RenderBuffer_FWDDECL)
#include <Modloader/app/structs/RenderBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
