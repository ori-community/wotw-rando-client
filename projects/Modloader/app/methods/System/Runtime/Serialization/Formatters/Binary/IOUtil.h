#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::IOUtil {
    IL2CPP_REGISTER_METHOD(0x00EB1B80, bool, FlagTest, (app::MessageEnum__Enum flag, app::MessageEnum__Enum target))
    IL2CPP_REGISTER_METHOD(0x01D92630, void, WriteStringWithCode, (app::String * value, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D926E0, void, WriteWithCode, (app::Type * type, app::Object* value, app::_BinaryWriter* sout))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::IOUtil
