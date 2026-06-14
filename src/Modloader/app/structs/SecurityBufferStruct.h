#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityBufferStruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityBufferStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct_DEFINED)
#include <Modloader/app/structs/BufferType__Enum.h>
#if defined(IL2CPP_STRUCT_BufferType__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityBufferStruct_DEFINED
struct SecurityBufferStruct {
    int32_t count;
    BufferType__Enum type;

    void* token;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct_FWDDECL)
#define IL2CPP_STRUCT_SecurityBufferStruct_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecurityBufferStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct_DEFINED) && !defined(IL2CPP_STRUCT_SecurityBufferStruct_FWDDECL)
#include <Modloader/app/structs/SecurityBufferStruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityBufferStruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
