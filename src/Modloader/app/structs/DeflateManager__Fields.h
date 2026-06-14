#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager__Fields_DEFINED)
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionStrategy__Enum.h>
#if defined(IL2CPP_STRUCT_CompressionLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompressionStrategy__Enum_DEFINED)
#define IL2CPP_STRUCT_DeflateManager__Fields_DEFINED
struct DeflateManager_CompressFunc;
struct ZlibCodec;
struct Byte__Array;
struct Int16__Array;
struct DeflateManager_Config;
struct Tree;
struct Int32__Array;
struct SByte__Array;
struct __declspec(align(8)) DeflateManager__Fields {
    struct DeflateManager_CompressFunc* DeflateFunction;
    struct ZlibCodec* _codec;
    int32_t status;
    struct Byte__Array* pending;
    int32_t nextPending;
    int32_t pendingCount;
    int8_t data_type;
    int32_t last_flush;
    int32_t w_size;
    int32_t w_bits;
    int32_t w_mask;
    struct Byte__Array* window;
    int32_t window_size;
    struct Int16__Array* prev;
    struct Int16__Array* head;
    int32_t ins_h;
    int32_t hash_size;
    int32_t hash_bits;
    int32_t hash_mask;
    int32_t hash_shift;
    int32_t block_start;
    struct DeflateManager_Config* config;
    int32_t match_length;
    int32_t prev_match;
    int32_t match_available;
    int32_t strstart;
    int32_t match_start;
    int32_t lookahead;
    int32_t prev_length;
    CompressionLevel__Enum compressionLevel;

    CompressionStrategy__Enum compressionStrategy;

    struct Int16__Array* dyn_ltree;
    struct Int16__Array* dyn_dtree;
    struct Int16__Array* bl_tree;
    struct Tree* treeLiterals;
    struct Tree* treeDistances;
    struct Tree* treeBitLengths;
    struct Int16__Array* bl_count;
    struct Int32__Array* heap;
    int32_t heap_len;
    int32_t heap_max;
    struct SByte__Array* depth;
    int32_t _lengthOffset;
    int32_t lit_bufsize;
    int32_t last_lit;
    int32_t _distanceOffset;
    int32_t opt_len;
    int32_t static_len;
    int32_t matches;
    int32_t last_eob_len;
    int16_t bi_buf;
    int32_t bi_valid;
    bool Rfc1950BytesEmitted;
    bool _WantRfc1950HeaderBytes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateManager__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateManager_CompressFunc.h>
#include <Modloader/app/structs/DeflateManager_Config.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/Tree.h>
#include <Modloader/app/structs/ZlibCodec.h>
#endif
#undef IL2CPP_STRUCT_DeflateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateManager__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
