#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DeflateManager__StaticFields_DEFINED
struct String__Array;
struct DeflateManager__StaticFields {
    int32_t MEM_LEVEL_MAX;
    int32_t MEM_LEVEL_DEFAULT;
    struct String__Array* _ErrorMessage;
    int32_t PRESET_DICT;
    int32_t INIT_STATE;
    int32_t BUSY_STATE;
    int32_t FINISH_STATE;
    int32_t Z_DEFLATED;
    int32_t STORED_BLOCK;
    int32_t STATIC_TREES;
    int32_t DYN_TREES;
    int32_t Z_BINARY;
    int32_t Z_ASCII;
    int32_t Z_UNKNOWN;
    int32_t Buf_size;
    int32_t MIN_MATCH;
    int32_t MAX_MATCH;
    int32_t MIN_LOOKAHEAD;
    int32_t HEAP_SIZE;
    int32_t END_BLOCK;
};
#endif
#if !defined(IL2CPP_STRUCT_DeflateManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DeflateManager__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_DeflateManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/DeflateManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
