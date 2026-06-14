#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitVector32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitVector32_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitVector32_DEFINED)
#define IL2CPP_STRUCT_BitVector32_DEFINED
struct BitVector32 {
    uint32_t data;
};
#endif
#if !defined(IL2CPP_STRUCT_BitVector32_FWDDECL)
#define IL2CPP_STRUCT_BitVector32_FWDDECL
#endif
#undef IL2CPP_STRUCT_BitVector32_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitVector32_DEFINED) && !defined(IL2CPP_STRUCT_BitVector32_FWDDECL)
#include <Modloader/app/structs/BitVector32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitVector32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
