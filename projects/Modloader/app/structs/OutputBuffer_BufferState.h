#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputBuffer_BufferState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputBuffer_BufferState_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer_BufferState_DEFINED)
#define IL2CPP_STRUCT_OutputBuffer_BufferState_DEFINED
struct OutputBuffer_BufferState {
    int32_t pos;
    uint32_t bitBuf;
    int32_t bitCount;
};
#endif
#if !defined(IL2CPP_STRUCT_OutputBuffer_BufferState_FWDDECL)
#define IL2CPP_STRUCT_OutputBuffer_BufferState_FWDDECL
#endif
#undef IL2CPP_STRUCT_OutputBuffer_BufferState_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer_BufferState_DEFINED) && !defined(IL2CPP_STRUCT_OutputBuffer_BufferState_FWDDECL)
#include <Modloader/app/structs/OutputBuffer_BufferState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputBuffer_BufferState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
