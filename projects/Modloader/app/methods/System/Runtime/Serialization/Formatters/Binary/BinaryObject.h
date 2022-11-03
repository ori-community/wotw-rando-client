#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BinaryObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857090, void, Set, (app::BinaryObject * this_ptr, int32_t object_id, int32_t map_id))
    IL2CPP_REGISTER_METHOD(0x01D8E970, void, Write, (app::BinaryObject * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D8D3F0, void, Read, (app::BinaryObject * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryObject * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObject
