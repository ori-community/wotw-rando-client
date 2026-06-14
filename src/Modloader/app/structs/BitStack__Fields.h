#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitStack__Fields_DEFINED)
#define IL2CPP_STRUCT_BitStack__Fields_DEFINED
struct UInt32__Array;
struct __declspec(align(8)) BitStack__Fields {
    struct UInt32__Array* bitStack;
    int32_t stackPos;
    uint32_t curr;
};
#endif
#if !defined(IL2CPP_STRUCT_BitStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitStack__Fields_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_BitStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitStack__Fields_FWDDECL)
#include <Modloader/app/structs/BitStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
