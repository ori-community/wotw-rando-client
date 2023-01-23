#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BinaryObjectString.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/_BinaryWriter.h>
#include <Modloader/app/structs/_BinaryParser.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BinaryObjectString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set, (app::BinaryObjectString * this_ptr, int32_t object_id, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D8EA00, void, Write, (app::BinaryObjectString * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D8C150, void, Read, (app::BinaryObjectString * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryObjectString * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString
