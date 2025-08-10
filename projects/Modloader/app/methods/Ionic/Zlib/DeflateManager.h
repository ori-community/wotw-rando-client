#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockState__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionStrategy__Enum.h>
#include <Modloader/app/structs/DeflateManager.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/ZlibCodec.h>

namespace app::classes::Ionic::Zlib::DeflateManager {
    IL2CPP_REGISTER_METHOD(0x03065460, void, ctor, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03065860, void, _InitializeLazyMatch, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03065A50, void, _InitializeTreeData, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03065BF0, void, _InitializeBlocks, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03065E70, void, pqdownheap, app::DeflateManager* this_ptr, app::Int16__Array* tree, int32_t k)
    IL2CPP_REGISTER_METHOD(0x03066140, bool, _IsSmaller, app::Int16__Array* tree, int32_t n, int32_t m, app::SByte__Array* depth)
    IL2CPP_REGISTER_METHOD(0x03066200, void, scan_tree, app::DeflateManager* this_ptr, app::Int16__Array* tree, int32_t max_code)
    IL2CPP_REGISTER_METHOD(0x030665C0, int32_t, build_bl_tree, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030667B0, void, send_all_trees, app::DeflateManager* this_ptr, int32_t lcodes, int32_t dcodes, int32_t blcodes)
    IL2CPP_REGISTER_METHOD(0x03066980, void, send_tree, app::DeflateManager* this_ptr, app::Int16__Array* tree, int32_t max_code)
    IL2CPP_REGISTER_METHOD(0x03066C80, void, put_bytes, app::DeflateManager* this_ptr, app::Byte__Array* p, int32_t start, int32_t len)
    IL2CPP_REGISTER_METHOD(0x03066CD0, void, send_code, app::DeflateManager* this_ptr, int32_t c, app::Int16__Array* tree)
    IL2CPP_REGISTER_METHOD(0x03066D40, void, send_bits, app::DeflateManager* this_ptr, int32_t value, int32_t length)
    IL2CPP_REGISTER_METHOD(0x03066F40, void, _tr_align, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030671C0, bool, _tr_tally, app::DeflateManager* this_ptr, int32_t dist, int32_t lc)
    IL2CPP_REGISTER_METHOD(0x03067610, void, send_compressed_block, app::DeflateManager* this_ptr, app::Int16__Array* ltree, app::Int16__Array* dtree)
    IL2CPP_REGISTER_METHOD(0x03067BD0, void, set_data_type, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03067DF0, void, bi_flush, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03067F00, void, bi_windup, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03068010, void, copy_block, app::DeflateManager* this_ptr, int32_t buf, int32_t len, bool header)
    IL2CPP_REGISTER_METHOD(0x03068190, void, flush_block_only, app::DeflateManager* this_ptr, bool eof)
    IL2CPP_REGISTER_METHOD(0x030681F0, app::BlockState__Enum, DeflateNone, app::DeflateManager* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x030684A0, void, _tr_stored_block, app::DeflateManager* this_ptr, int32_t buf, int32_t stored_len, bool eof)
    IL2CPP_REGISTER_METHOD(0x030685B0, void, _tr_flush_block, app::DeflateManager* this_ptr, int32_t buf, int32_t stored_len, bool eof)
    IL2CPP_REGISTER_METHOD(0x03068880, void, _fillWindow, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03068D20, app::BlockState__Enum, DeflateFast, app::DeflateManager* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x03069460, app::BlockState__Enum, DeflateSlow, app::DeflateManager* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x03069D30, int32_t, longest_match, app::DeflateManager* this_ptr, int32_t cur_match)
    IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, get_WantRfc1950HeaderBytes, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A6EE0, void, set_WantRfc1950HeaderBytes, app::DeflateManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x0306A580,
        int32_t,
        Initialize_1,
        app::DeflateManager* this_ptr,
        app::ZlibCodec* codec,
        app::CompressionLevel__Enum level,
        int32_t bits,
        app::CompressionStrategy__Enum compression_strategy
    )
    IL2CPP_REGISTER_METHOD(
        0x0306A680,
        int32_t,
        Initialize_2,
        app::DeflateManager* this_ptr,
        app::ZlibCodec* codec,
        app::CompressionLevel__Enum level,
        int32_t window_bits,
        int32_t mem_level,
        app::CompressionStrategy__Enum strategy
    )
    IL2CPP_REGISTER_METHOD(0x0306A960, void, Reset, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0306ACA0, void, SetDeflater, app::DeflateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0306AFB0, int32_t, Deflate, app::DeflateManager* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x0306BA60, void, cctor, )
} // namespace app::classes::Ionic::Zlib::DeflateManager
