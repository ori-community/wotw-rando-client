#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteStateInfoBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteStateInfoBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteStateInfoBase__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) WriteStateInfoBase__Fields {
    struct Byte__Array* _header;
    struct Byte__Array* _footer;
    int32_t _maxLineLength;
    struct Byte__Array* buffer;
    int32_t _currentLineLength;
    int32_t _currentBufferUsed;
};
#endif
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_WriteStateInfoBase__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_WriteStateInfoBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WriteStateInfoBase__Fields_FWDDECL)
#include <Modloader/app/structs/WriteStateInfoBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteStateInfoBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
