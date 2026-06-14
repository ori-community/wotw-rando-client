#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_InputBuffer__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) InputBuffer__Fields {
    struct Byte__Array* buffer;
    int32_t start;
    int32_t end;
    uint32_t bitBuffer;
    int32_t bitsInBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_InputBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputBuffer__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_InputBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/InputBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
