#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TermInfoReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TermInfoReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TermInfoReader__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) TermInfoReader__Fields {
    int16_t boolSize;
    int16_t numSize;
    int16_t strOffsets;
    struct Byte__Array* buffer;
    int32_t booleansOffset;
};
#endif
#if !defined(IL2CPP_STRUCT_TermInfoReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_TermInfoReader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_TermInfoReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TermInfoReader__Fields_FWDDECL)
#include <Modloader/app/structs/TermInfoReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TermInfoReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
