#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnSafeCharBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnSafeCharBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer_DEFINED)
#define IL2CPP_STRUCT_UnSafeCharBuffer_DEFINED
struct UnSafeCharBuffer {
    uint16_t* m_buffer;
    int32_t m_totalSize;
    int32_t m_length;
};
#endif
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer_FWDDECL)
#define IL2CPP_STRUCT_UnSafeCharBuffer_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnSafeCharBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer_DEFINED) && !defined(IL2CPP_STRUCT_UnSafeCharBuffer_FWDDECL)
#include <Modloader/app/structs/UnSafeCharBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnSafeCharBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
