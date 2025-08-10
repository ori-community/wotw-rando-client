#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HuffmanTree.h>
#include <Modloader/app/structs/InputBuffer.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::Unity::IO::Compression::HuffmanTree {
    IL2CPP_REGISTER_METHOD(0x02B79C90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02B7A110, app::HuffmanTree*, get_StaticLiteralLengthTree, )
    IL2CPP_REGISTER_METHOD(0x02B7A1B0, app::HuffmanTree*, get_StaticDistanceTree, )
    IL2CPP_REGISTER_METHOD(0x02B7A250, void, ctor, app::HuffmanTree* this_ptr, app::Byte__Array* code_lengths)
    IL2CPP_REGISTER_METHOD(0x02B7A2A0, app::Byte__Array*, GetStaticLiteralTreeLength, )
    IL2CPP_REGISTER_METHOD(0x02B7A3F0, app::Byte__Array*, GetStaticDistanceTreeLength, )
    IL2CPP_REGISTER_METHOD(0x02B7A4A0, app::UInt32__Array*, CalculateHuffmanCode, app::HuffmanTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7A7B0, void, CreateTable, app::HuffmanTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7AB30, int32_t, GetNextSymbol, app::HuffmanTree* this_ptr, app::InputBuffer* input)
} // namespace app::classes::Unity::IO::Compression::HuffmanTree
