#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tree__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Tree__StaticFields_DEFINED
struct Int32__Array;
struct SByte__Array;
struct Tree__StaticFields {
    int32_t HEAP_SIZE;
    struct Int32__Array* ExtraLengthBits;
    struct Int32__Array* ExtraDistanceBits;
    struct Int32__Array* extra_blbits;
    struct SByte__Array* bl_order;
    struct SByte__Array* _dist_code;
    struct SByte__Array* LengthCode;
    struct Int32__Array* LengthBase;
    struct Int32__Array* DistanceBase;
};
#endif
#if !defined(IL2CPP_STRUCT_Tree__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Tree__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#endif
#undef IL2CPP_STRUCT_Tree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Tree__StaticFields_FWDDECL)
#include <Modloader/app/structs/Tree__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tree__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
