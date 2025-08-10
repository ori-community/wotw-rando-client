#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/ObjectNull.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectNull {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ObjectNull* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetNullCount, app::ObjectNull* this_ptr, int32_t null_count)
    IL2CPP_REGISTER_METHOD(0x01D94530, void, Write, app::ObjectNull* this_ptr, app::_BinaryWriter* sout)
    IL2CPP_REGISTER_METHOD(0x01D94660, void, Read, app::ObjectNull* this_ptr, app::_BinaryParser* input, app::BinaryHeaderEnum__Enum binary_header_enum)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, app::ObjectNull* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectNull
