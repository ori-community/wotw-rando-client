#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitSet__Fields_DEFINED)
#define IL2CPP_STRUCT_BitSet__Fields_DEFINED
struct UInt32__Array;
struct __declspec(align(8)) BitSet__Fields {
    int32_t count;
    struct UInt32__Array* bits;
};
#endif
#if !defined(IL2CPP_STRUCT_BitSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitSet__Fields_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_BitSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitSet__Fields_FWDDECL)
#include <Modloader/app/structs/BitSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
