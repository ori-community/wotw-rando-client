#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuffer_DEFINED)
#define IL2CPP_STRUCT_StringBuffer_DEFINED
struct Char__Array;
struct StringBuffer {
    struct Char__Array* _buffer;
    int32_t _position;
};
#endif
#if !defined(IL2CPP_STRUCT_StringBuffer_FWDDECL)
#define IL2CPP_STRUCT_StringBuffer_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_StringBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuffer_DEFINED) && !defined(IL2CPP_STRUCT_StringBuffer_FWDDECL)
#include <Modloader/app/structs/StringBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
