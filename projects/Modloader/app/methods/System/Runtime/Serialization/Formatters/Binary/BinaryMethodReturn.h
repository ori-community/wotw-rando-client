#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn {
    IL2CPP_REGISTER_METHOD(0x01D8E680, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x014751D0, void, ctor, (app::BinaryMethodReturn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D8E760, void, Write, (app::BinaryMethodReturn * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryMethodReturn * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn
