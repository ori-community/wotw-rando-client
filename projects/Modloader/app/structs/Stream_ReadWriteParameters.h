#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_ReadWriteParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_ReadWriteParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteParameters_DEFINED)
#define IL2CPP_STRUCT_Stream_ReadWriteParameters_DEFINED
struct Byte__Array;
struct Stream_ReadWriteParameters {
    struct Byte__Array* Buffer;
    int32_t Offset;
    int32_t Count;
};
#endif
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteParameters_FWDDECL)
#define IL2CPP_STRUCT_Stream_ReadWriteParameters_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_Stream_ReadWriteParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_ReadWriteParameters_DEFINED) && !defined(IL2CPP_STRUCT_Stream_ReadWriteParameters_FWDDECL)
#include <Modloader/app/structs/Stream_ReadWriteParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream_ReadWriteParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
