#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateCodes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateCodes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateCodes__Fields_DEFINED)
#define IL2CPP_STRUCT_InflateCodes__Fields_DEFINED
struct Int32__Array;
struct __declspec(align(8)) InflateCodes__Fields {
    int32_t mode;
    int32_t len;
    struct Int32__Array* tree;
    int32_t tree_index;
    int32_t need;
    int32_t lit;
    int32_t bitsToGet;
    int32_t dist;
    uint8_t lbits;
    uint8_t dbits;
    struct Int32__Array* ltree;
    int32_t ltree_index;
    struct Int32__Array* dtree;
    int32_t dtree_index;
};
#endif
#if !defined(IL2CPP_STRUCT_InflateCodes__Fields_FWDDECL)
#define IL2CPP_STRUCT_InflateCodes__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_InflateCodes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateCodes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InflateCodes__Fields_FWDDECL)
#include <Modloader/app/structs/InflateCodes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateCodes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
