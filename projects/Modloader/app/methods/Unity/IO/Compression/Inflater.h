#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IFileFormatReader.h>
#include <Modloader/app/structs/Inflater.h>

namespace app::classes::Unity::IO::Compression::Inflater {
    IL2CPP_REGISTER_METHOD(0x02B7AD40, void, ctor, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B000, void, SetFileFormatReader, app::Inflater* this_ptr, app::IFileFormatReader* reader)
    IL2CPP_REGISTER_METHOD(0x02B7B020, void, Reset, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B040, void, SetInput, app::Inflater* this_ptr, app::Byte__Array* input_bytes, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x02B7B070, bool, Finished, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B090, int32_t, get_AvailableOutput, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B0B0, bool, NeedsInput, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B0E0, int32_t, Inflate, app::Inflater* this_ptr, app::Byte__Array* bytes, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x02B7B360, bool, Decode, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7B7B0, bool, DecodeUncompressedBlock, app::Inflater* this_ptr, bool* end_of_block)
    IL2CPP_REGISTER_METHOD(0x02B7BC40, bool, DecodeBlock, app::Inflater* this_ptr, bool* end_of_block_code_seen)
    IL2CPP_REGISTER_METHOD(0x02B7C1C0, bool, DecodeDynamicBlockHeader, app::Inflater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7CBF0, void, cctor, )
} // namespace app::classes::Unity::IO::Compression::Inflater
