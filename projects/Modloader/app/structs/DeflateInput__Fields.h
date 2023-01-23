#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateInput__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateInput__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) DeflateInput__Fields {
    struct Byte__Array* buffer;
    int32_t count;
    int32_t startIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_DeflateInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateInput__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_DeflateInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateInput__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
